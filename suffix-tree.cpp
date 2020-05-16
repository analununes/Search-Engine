#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <fstream>  
#include <bits/stdc++.h> 
#include <cctype>
#include <stdio.h>

using namespace std;


struct Node {
    string suffix;
    Node *adress;
    Node *a;Node *b;Node *c;Node *d;Node *e;Node *f;Node *g;
    Node *h;Node *i;Node *j;Node *k;Node *l;Node *m;Node *n;
    Node *o;Node *p;Node *q;Node *r;Node *s;Node *t;Node *u;
    Node *v;Node *w;Node *x;Node *y;Node *z;
    Node *n1;Node *n2;Node *n3;Node *n4;Node *n5;
    Node *n6;Node *n7;Node *n8;Node *n9;Node *n0;

    Node(string word): suffix(word){
        adress = nullptr;
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
            if (!find_insert(suffix, p,curw)) {
                if (curw.length()==0){
                    *p = new Node(suffix);
                }else{
                    *p = new Node(suffix.substr(curw.length()));
                }
                cout<<"sufixo "<<(*p)->suffix<<" inserida na árvore"<<endl;
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
                        cout<<curw<<endl;
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
                if(curw==suf)return true;
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
                cout<<curw<<endl;
                if(curw==suf)return true;
                curl = suf[curw.length()];
                cout<<curl<<endl;
                (table.find(curl)->second)(p);
            }
            return false;
        }

};

int main(){
    SuffixTree arvore;
    arvore.insert("*");

    ofstream outfile ("test.txt");

    //outfile << "O território peruano abrigou a civilização de Caral, uma das mais antigas do mundo, bem como o Império Inca, considerado o maior Estado da América pré-colombiana. O seu território foi elevado a vice-reinado pelo Império Espanhol, no século XVI. Atualmente, o Peru é uma república presidencialista democrática dividida em 25 regiões. A sua geografia é variada, exibindo desde planícies áridas na costa do Pacífico, aos picos nevados dos Andes e à floresta amazônica, características que proporcionam a este país diversos recursos naturais."<< endl;
    outfile << "Peruvian territory was home to several ancient cultures. Ranging from the Norte Chico civilization starting in 3500 BC, the oldest civilization in the Americas and one of the five cradles of civilization, to the Inca Empire, the largest state in pre-Columbian America, the territory now including Peru has one of the longest histories of civilization of any country, tracing its heritage back to the 4th millennia BCE." <<endl;
    outfile.close();

    // filestream variable file 
    fstream file; 
    string word, t, q, filename, a; 
    int i;
    // filename of the file 
    filename = "test.txt"; 
  
    // opening file 
    file.open(filename.c_str()); 
  
    // extracting words from the file 
    while (file >> word) { 
        i = 0;
        a+='*';
        while (word[i] != '\0') {
        if ((word[i] > 47 && word[i] < 58) || (word[i] > 64 && word[i] < 91) || (word[i] > 96 && word[i] < 123) ){
            a += tolower(word[i]);
        }
        i++;
        }
        if (a!=" "){
            arvore.insert(a);
        }
        // displaying content 
        cout << a << endl; 
        a.clear();
        }
    return 0;
};
