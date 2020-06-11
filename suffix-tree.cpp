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

struct func{
    string textId;
    string title;
    int nTitle;
    int nText;
    func *alfaNext;
    func *rankNext;

    func(string n): textId(n){
        nTitle = 0;
        nText = 0;
        alfaNext = nullptr;
        rankNext = nullptr;
        title = "\0";
    }
};

struct Node {
    string suffix;
    func *address;
    Node *a;Node *b;Node *c;Node *d;Node *e;Node *f;Node *g;
    Node *h;Node *i;Node *j;Node *k;Node *l;Node *m;Node *n;
    Node *o;Node *p;Node *q;Node *r;Node *s;Node *t;Node *u;
    Node *v;Node *w;Node *x;Node *y;Node *z;
    Node *n1;Node *n2;Node *n3;Node *n4;Node *n5;
    Node *n6;Node *n7;Node *n8;Node *n9;Node *n0;

    Node(string word): suffix(word){
        func *addres = nullptr;
        Node *a = nullptr; Node *b = nullptr; Node *c = nullptr; Node *d = nullptr; Node *e = nullptr;
        Node *f = nullptr; Node *g = nullptr; Node *h = nullptr; Node *i = nullptr; Node *j = nullptr;
        Node *k = nullptr; Node *l = nullptr; Node *m = nullptr; Node *n = nullptr; Node *o = nullptr; 
        Node *p = nullptr; Node *q = nullptr; Node *r = nullptr; Node *s = nullptr; Node *t = nullptr;
        Node *u = nullptr; Node *v = nullptr; Node *w = nullptr; Node *x = nullptr; Node *y = nullptr;
        Node *z = nullptr; 
        Node *n1 = nullptr; Node *n2 = nullptr; Node *n3 = nullptr; Node *n4 = nullptr;Node *n5 = nullptr;
        Node *n6 = nullptr; Node *n7 = nullptr; Node *n8 = nullptr; Node *n9 = nullptr;Node *n0 = nullptr;
    }
};   


void set_a(Node **&curr){
    curr = &((*curr)->a); 
};
void set_b(Node **&curr){
    curr = &((*curr)->b); 
};
void set_c(Node **&curr){
    curr = &((*curr)->c); 
};
void set_d(Node **&curr){
    curr = &((*curr)->d); 
};
void set_e(Node **&curr){
    curr = &((*curr)->e); 
};
void set_f(Node **&curr){
    curr = &((*curr)->f); 
};
void set_g(Node **&curr){
    curr = &((*curr)->g); 
};
void set_h(Node **&curr){
    curr = &((*curr)->h); 
};
void set_i(Node **&curr){
    curr = &((*curr)->i); 
};
void set_j(Node **&curr){
    curr = &((*curr)->j); 
};
void set_k(Node **&curr){
    curr = &((*curr)->k); 
};
void set_l(Node **&curr){
    curr = &((*curr)->l); 
};
void set_m(Node **&curr){
    curr = &((*curr)->m); 
};
void set_n(Node **&curr){
    curr = &((*curr)->n); 
};
void set_o(Node **&curr){
    curr = &((*curr)->o); 
};
void set_p(Node **&curr){
    curr = &((*curr)->p); 
};
void set_q(Node **&curr){
    curr = &((*curr)->q); 
};
void set_r(Node **&curr){
    curr = &((*curr)->r); 
};
void set_s(Node **&curr){
    curr = &((*curr)->s); 
};
void set_tt(Node **&curr){
    curr = &((*curr)->t); 
};
void set_u(Node **&curr){
    curr = &((*curr)->u); 
};
void set_v(Node **&curr){
    curr = &((*curr)->v); 
};
void set_w(Node **&curr){
    curr = &((*curr)->w); 
};
void set_x(Node **&curr){
    curr = &((*curr)->x); 
};
void set_y(Node **&curr){
    curr = &((*curr)->y); 
};
void set_z(Node **&curr){
    curr = &((*curr)->z); 
};
void set_1(Node **&curr){
    curr = &((*curr)->n1); 
};
void set_2(Node **&curr){
    curr = &((*curr)->n2); 
};
void set_3(Node **&curr){
    curr = &((*curr)->n3); 
};
void set_4(Node **&curr){
    curr = &((*curr)->n4); 
};
void set_5(Node **&curr){
    curr = &((*curr)->n5); 
};
void set_6(Node **&curr){
    curr = &((*curr)->n6); 
};
void set_7(Node **&curr){
    curr = &((*curr)->n7); 
};
void set_8(Node **&curr){
    curr = &((*curr)->n8); 
};
void set_9(Node **&curr){
    curr = &((*curr)->n9); 
};
void set_0(Node **&curr){
    curr = &((*curr)->n0); 
};

typedef void(*set_func)(Node **&cur);
map<string,set_func> create_table (){
    map <string, set_func> table;
    table["a"] = &set_a; table["b"] = &set_b;  table["c"] = &set_c; table["d"] = &set_d; table["e"] = &set_e; table["f"] = &set_f; 
    table["g"] = &set_g; table["h"] = &set_h;  table["i"] = &set_i; table["j"] = &set_j; table["k"] = &set_k; table["l"] = &set_l; 
    table["m"] = &set_m; table["n"] = &set_n;  table["o"] = &set_o; table["p"] = &set_p; table["q"] = &set_q; table["r"] = &set_r; 
    table["s"] = &set_s; table["t"] = &set_tt; table["u"] = &set_u; table["v"] = &set_v; table["w"] = &set_w; table["x"] = &set_x; 
    table["y"] = &set_y; table["z"] = &set_z;  table["1"] = &set_1; table["2"] = &set_2; table["3"] = &set_3; table["4"] = &set_4; 
    table["5"] = &set_5; table["6"] = &set_6;  table["7"] = &set_7; table["8"] = &set_8; table["9"] = &set_9;
    table["0"] = &set_0;
    return table;  
};

map<string,set_func> table = create_table();
/////////////////////////////////////////////////////////////////////////////////////////////////////

class SuffixTree{
    private:
        Node *pRoot;  

    public:
        SuffixTree(): pRoot(nullptr){
        };


        void insert(string suffix) {
            Node **p;
            string curw;
            string suf;
            if (!find_insert(suffix, p,curw)) {
                if (curw.length()==0){
                    *p = new Node(suffix);
                    cout<<(((*p)->address))<<endl;
                    cout<<"if"<<endl;
                }else{
                    suf = suffix.substr(curw.length());
                    *p = new Node(suf);
                    cout<<(((*p)->address))<<endl;
                    cout<<"else"<<endl;
                }
                //cout<<"sufixo "<<(*p)->suffix<<" inserido na árvore"<<endl;
            }
        }
        
        bool find_insert(string suf, Node **&p,string &curw) {
            p = &pRoot;
            Node **daddy = p;
            string curl;
            string s,m,k;
            int l;
            while(*p) {
                l = curw.length();
                k = (*p)->suffix;
                for(int i=0;i<(k.length());i++){
                    if(suf[l+i]!=k[i]){
                        //se o sufixo atual tem letras diferentes da palavra procurada
                        //dividimos o Node 

                        *p = new Node(k.substr(0,i));
                        curw+=k.substr(0,i);
                        Node **t = p;
                        s = k[i];
                        (table.find(s)->second)(p);
                        *p = new Node(k.substr(i));
                        p = t;
                        if (l+i==suf.length()){
                            return true;
                        }else{
                        s = suf[l+i];
                        (table.find(s)->second)(p);
                        return false;
                        }
                        
                    }
                }
                curw+=((*p)->suffix);
                if(curw==suf){
                    return true;
                }
                daddy = p;
                curl = suf[curw.length()];
                (table.find(curl)->second)(p);
            };
            return false;
        }

         bool find(string suf) {
            Node **p;
            p = &pRoot;
            string curw;
            string curl;
            while(*p){
                curw+=((*p)->suffix);
                if(curw==suf)return true;
                curl = suf[curw.length()];
                (table.find(curl)->second)(p);
            }
            return false;
        }
        
        int search(string suf, func **&k) {
            Node **p;
            p = &pRoot;
            string curw;
            string curl;
            int resu;
            int li = 0;
            while(*p){
                curw+=((*p)->suffix);
                if(curw==suf){
                    k = &((*p)->address);
                    return 1;
                    }
                curl = suf[curw.length()];
                (table.find(curl)->second)(p);
            }
            return 0;
        }

        bool insert_loc(string suf, string text_id, int read_t, string titulo) {
            Node **p;
            p = &pRoot;
            string curw;
            string curl;
            string nId;//
            func **k;
            func **froot;
            func **prev;
            func **fnew;
            func **aux;
            int curn;
            bool alf,rank = 0;
            while(*p){
                curw+=((*p)->suffix);
                if(curw==suf){
                    froot = &((*p)->address);
                    //root da linked list com o numero de resultados
                    if(*froot==nullptr){
                        *froot = new func("*"); 
                    }
                    
                    /*prev = froot;
                    k = &((*froot)->rankNext);
                    while(*k){
                        if((*k)->textId == text_id){
                            *fnew  = new func(text_id); 
                            (*fnew)->title = titulo; 
                            aux = &((*k)->alfaNext);
                            (*fnew)->alfaNext = *aux;
                            //if (read_t){
                                curn = ((*k)->nTitle);
                                curn += 10*read_t;
                                (*fnew)->nTitle = curn;
                            //}else{
                                curn = ((*k)->nText);
                                curn += !read_t;
                                ((*fnew)->nText) = curn;
                            //}
                            k = &((*k)->rankNext);
                            ((*prev)->rankNext) = *k;
                            rankeada(froot,fnew);
                            return true;
                        }
                        prev = k;
                        k = &((*k)->rankNext);  
                    } */
                    curn = (*froot)->nText;
                    curn +=  1;
                    (*froot)->nText = curn;
                    nId = (*froot)->title;
                    nId += text_id + " ";
                    (*froot)->title = nId;
                    nId.clear();
                    *fnew = new func(text_id);
                    //(*fnew)->nTitle = read_t ;
                    (*fnew)->nText  = read_t;
                    (*fnew)->title  = titulo;
                    prev = froot;
                    //alfabetica(froot,fnew);
                    rankeada(prev,fnew);
                    return true;
                }
                curl = suf[curw.length()];
                (table.find(curl)->second)(p);
            
            }
            
            return false;
        }

        /*bool alfabetica(func **&froot, func **&k){
            string titulo = (*k)->title;
            string curr;
            func **prev;
            int title,text;
            prev = froot;
            froot = &((*froot)->alfaNext);
            while(*froot){
                curr = (*froot)->title;
                int i = 0;
                int minimo = min(curr.length(),titulo.length());
                for(i=0;i<minimo;i++){
                    if (curr[i]>titulo[i]){
                        froot = &((*prev)->alfaNext);
                        (*k)->alfaNext = *froot;
                        (*prev)->alfaNext = *k;
                    return true;
                    }else if(curr[i]<titulo[i]){
                        i = minimo;
                    }else{
                        i ++;
                        if (i==minimo && curr.length()>titulo.length()){
                            cout<<"hm"<<endl;
                            froot = &((*prev)->alfaNext);
                            (*k)->alfaNext = *froot;
                            (*prev)->alfaNext = *k;
                        }
                        
                    }
                }
                
                prev = froot;
                froot = &((*froot)->alfaNext);
            }
            
            (*prev)->alfaNext = *k;
            return true;
            //}
        }*/

        bool rankeada(func **&froot, func **&k){
            int total = (*k)->nText;
            int curr;
            func **prev;
            prev = froot;
            froot = &((*froot)->rankNext);
            while((*froot)){
                curr = (*froot)->nText;
                if(curr<total){
                    froot = &((*prev)->rankNext);
                    (*k)->rankNext = *froot;
                    (*prev)->rankNext = *k;
                    return true;
                }
                prev = froot;
                froot = &((*froot)->rankNext); 
            }
            (*prev)->rankNext = *k;
            return true;
        }
};



int main(){
    SuffixTree arvore;
    arvore.insert("*");

    fstream file; 
    string word, t, q, filename, a, c, d, text_id, suf, r1,r2,resultado; 
    string b[2];
    int i,j;
    bool notText,reading;
    string titulo = "\0";
    int read_t = 0;
    int ocorr = 0;
    // for (k = 0; k < 154; k++){
    filename = "dicionario.txt";
    // opening file 
    file.open(filename.c_str()); 
    if(!file){
        cout<<"erro"<<endl;
    }
    // extracting words from the file 
    reading = 1;
    notText = 0;
    while (file >> word) { 
        i = 0;
        a+='*';
        //cout<<word<<endl;
        if(word.substr(0,3)=="id="){
            notText = 1;
            text_id.clear();
            text_id = word;
        }

        /*if(notText){
            if(word[0]==34){
                text_id = word;
            }
        
            if (read_t == 1){
                if(word.substr(0,12)==("nonfiltered=")){
                    suf = "\0";
                    for(j = 0;j<titulo.length();j++){
                        suf +=titulo[j];
                        if(titulo[j]==32 || j==titulo.length()-1){
                            suf += "\0";
                            i = 0;
                            a = "*";
                        while (suf[i] != '\0') {
                            if (((suf[i] > 47 && suf[i] < 58) || (suf[i] > 64 && suf[i] < 91) || (suf[i] > 96 && suf[i] < 123)) && (suf[i]!=32) ){
                                a += tolower(suf[i]);
                            }
                            i++;
                        }
                        if(a.length()>1){
                        arvore.insert(a);
                        arvore.insert_loc(a,text_id,read_t,titulo);
                        }
                        a.clear();
                        suf.clear();
                    }
                    }
                    read_t = 0;
                }else{
                    titulo += " " + word;
                }
            }else if(word.substr(0,6)==("title=")){
                read_t = 1;
                word = word.substr(6);
                titulo = word;
            }*/

        //}else{  //cout<<"aqui"<<endl;
        titulo = " ";
        if(notText == 1){
                if(word.substr(0,7)=="title="){
                    //titulo.clear();
                    //titulo = word.substr(7);
                }else if(word[word.length()-1]==34){
                    //titulo+=word;
                    notText = 0;
                }else{
                    //titulo += word;
                }
        }else{ 
            if(word[0] == 38){
                ocorr = stoi(word.substr(1));
            }else{
                a = "*";
                while (word[i] != '\0') {
                    if ((word[i] > 47 && word[i] < 58) || (word[i] > 64 && word[i] < 91) || (word[i] > 96 && word[i] < 123) ){
                        a += tolower(word[i]);
                    }
                    i++;
                }
                cout<<a<<endl;
                if(a.length()>1){
                    arvore.insert(a);
                    arvore.insert_loc(a,text_id,ocorr,titulo);
                }
                }}
        //}
        a.clear();

        if(word[word.length()-1]==62){
            notText=0;
        }
        
    }
    file.close();
    file.clear();
//}

bool pesquisar = 1;
while(pesquisar==1){
    string query;
    func **k;
    func **l;
    func **rs;
    *k = new func("\0");
    *l = new func("\0");
    cout<<"digite sua pesquisa:";
    cin>>query;
    clock_t Ticks[2];
    Ticks[0] = clock();
    a = "*";
    while (query[i] != '\0') {
        if ((query[i] > 47 && query[i] < 58) || (query[i] > 64 && query[i] < 91) || (query[i] > 96 && query[i] < 123) ){
            a += tolower(query[i]);
        }
        else if(query[i]==32){
            b[2] = a;
            a = "*";
        }
        i++;
    }
    b[1] = a;
    if(b[1].length()){
        if (arvore.search(b[0],k)){
            Ticks[1] = clock();
            double Tempo = (Ticks[1] - Ticks[0]) * 1000.0 / CLOCKS_PER_SEC;
            rs = k;
            cout<<(*k)->nText<<" resultados encontrados em "<< Tempo<< "ms"<<endl;
            cout<<(*k)->alfaNext<<endl;
            *k = (*k)->rankNext;
            i = 0;
            while(*k){
                cout<<i<<"->"<<(*k)->textId<<endl;
                cout<<(*k)->nText<<endl;
                cout<<(*k)->nTitle<<endl;
                //cout<<(*k)->alfaNext<<endl;
                i +=1;
                if (i%20==0){
                    cout<<"ver mais resultados? [s/n]"<<endl;
                    string ask;
                    cin>>ask;
                    if (ask == "n"){
                        break;
                    }
                }
                *k = (*k)->rankNext;
            }
            cout<<"quer abrir algum arquivo?"<<endl;
            cout<<"digite o número do arquivo ou qualquer letra para sair:"<<endl;
            cin>>query;
            if(stoi(query)){
                if (stoi(query)>i){
                    cout<<"não existe"<<endl;
                }else{
                    i = stoi(query);
                    while(i){
                        *k = (*k)->rankNext;
                        i-=1;
                    }
                    filename = "newtxt_"+ ((*k)->textId).substr(0,3);
                    file.open(filename.c_str()); 
                    if(!file){
                        cout<<"erro"<<endl;
                    }
                    cout<<(*k)->title + "\n";
                    while(file >> word){
                        if(word.substr(0,3)== "id="){
                           text_id = word.substr(3); 
                        }
                        while(text_id==(*k)->textId){
                            cout<<word;
                        }
                    }
                    cout<<" "<<endl;
                }
            }
        }else{
            cout<<"não encontrado"<<endl;
        }
    }else{
        if (arvore.search(b[0],k)||arvore.search(b[1],l)){
            Ticks[1] = clock();
            double Tempo = (Ticks[1] - Ticks[0]) * 1000.0 / CLOCKS_PER_SEC;
            r1 = ((*k)->title);
            r2 = ((*l)->title);
            i,j = 0;
            while(i < r1.length() && j < r2.length()){
                if(r1[i]==32 && r2[j]==32){
                    if(stoi(c)==stoi(d)){
                        resultado += c;
                    }
                    else if(stoi(c)<stoi(d)){
                        c = "\0";
                        i++;
                    }
                    else{
                        d = "\0";
                        j++;
                    }
                }
                while(r1[i]!=32){
                    c += r1[i];
                    i++;
                }
                while(r2[j]!=32){
                    d += r2[j];
                    j++;
                }
            }
            cout<<(*k)->nText<<" resultados encontrados em "<< Tempo<< "ms"<<endl;
            cout<<(*k)->alfaNext<<endl;
            *k = (*k)->rankNext;
            i = 0;
            j = 0;
            d = "\0";
            while(*k){
                while(resultado[j]!=32){
                    d += resultado[j];
                    j++;
                }
                if((*k)->textId==d){
                    cout<<i<<"->"<<(*k)->textId<<endl;
                    cout<<(*k)->nText<<endl;
                    cout<<(*k)->nTitle<<endl;
                    //cout<<(*k)->alfaNext<<endl;
                    i +=1;
                    j++;
                    d = "\0";
                }
                if (i%20==0){
                    cout<<"ver mais resultados? [s/n]"<<endl;
                    string ask;
                    cin>>ask;
                    if (ask == "n"){
                        break;
                    }
                }
                *k = (*k)->rankNext;
            }
            cout<<"quer abrir algum arquivo?"<<endl;
            cout<<"digite o número do arquivo ou qualquer letra para sair:"<<endl;
            cin>>query;
            if(stoi(query)){
                if (stoi(query)>i){
                    cout<<"não existe"<<endl;
                }else{
                    i = stoi(query);
                    while(i){
                        *k = (*k)->rankNext;
                        if(resultado.find((*k)->textId)){
                            i-=1;
                        }
                    }
                    filename = "newtxt_"+ ((*k)->textId).substr(0,3);
                    file.open(filename.c_str()); 
                    if(!file){
                        cout<<"erro"<<endl;
                    }
                    cout<<(*k)->title + "\n";
                    while(file >> word){
                        if(word.substr(0,3)== "id="){
                           text_id = word.substr(3); 
                        }
                        while(text_id==(*k)->textId){
                            cout<<word;
                        }
                    }
                    cout<<" "<<endl;
                }
            }
        }else{
            cout<<"não encontrado"<<endl;
        }

    }
    
    cout<<"fazer outra pesquisa? [s/n]"<<endl;
    cin>>query;
    if(query == "n"){
        pesquisar = 0;
    }
    }
    return 0;
};