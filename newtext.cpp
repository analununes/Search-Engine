#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <fstream>  
#include <bits/stdc++.h> 
#include <cctype>
#include <stdio.h>
#include <time.h>

using namespace std;

//cada artigo é filtrado, recebe uma nova id e é inteiramente armazenado em uma linha do arquivo,
//cada arquivo contém 10000 artigos 
int main(){
    fstream file;
    ofstream novo; 
    string word, t, q, filename, a, suf, text; 
    int i;
    bool notText,reading;
    string titulo = "\0";
    int text_id = 0;
    int read_t = 0; 
    int linhas = 0;
    int id_arquivo = 0;
    t = to_string(id_arquivo);
    
    filename = "newtxt/newtext_"+ t;
    novo.open(filename.c_str()); 
    if(!novo){
        cout<<"erro"<<endl;
    }
    for (int k = 1; k < 155; k++){
    filename = "raw.en/text_"+ to_string(k); 
    cout<<filename<<endl;
    file.open(filename.c_str()); 
    if(!file){
        cout<<"erro"<<endl;
    }
   
    
    reading = 1;
    notText = 0;
    while (file >> word) { 
        i = 0;
        a+='*';
        if(word[0]==60){
            notText = 1;
        }

        if(notText){
            if(word.substr(0,3)=="id="){
                t = to_string(id_arquivo*10000+linhas);
                text = "id=" + t;
            }

            if (read_t == 1){
                if(word.substr(0,12)==("nonfiltered=")){
                        text += " title=" + titulo + " * ";
                        read_t = 0;
                }else{
                    titulo += " " + word;
                }
            }else if(word.substr(0,6)==("title=")){
                read_t = 1;
                word = word.substr(6);
                titulo = word;
            }

        }else{ 
            a = " ";
            while (word[i] != '\0') {
                if ((word[i] > 47 && word[i] < 58) || (word[i] > 64 && word[i] < 91) || (word[i] > 96 && word[i] < 123) ){
                    a += tolower(word[i]);
                }
                i++;
            }
            if(a.length()>1){
                text += a;
            }
        }
        a.clear();

        if(word[word.length()-1]==62){
            notText=0;
        }
        if( word == "</doc>"){
            text += " \n";
            novo << text;
            text.clear();
            linhas+=1;
        }
        if(linhas==10000){
            cout<<id_arquivo<<"-----------"<<endl;
            novo.close();
            novo.clear();
            id_arquivo+=1;
            t = to_string(id_arquivo);
            filename = "newtxt/newtext_"+t;
            novo.open(filename.c_str()); 
            if(!novo){
                cout<<"erro"<<endl;
            }
            linhas = 0;
        }
    }
    if(text.length()>0){
        text += " \n";
        novo << text;
        text.clear();
        linhas+=1;
    }
    file.close();
    file.clear();
    }
}

  
