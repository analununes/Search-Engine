#include <iostream>
#include <iomanip>
#include <string>
#include <map>

using namespace std;


struct Node {
    string suffix;
    Node *adress;
    Node *a;Node *b;Node *c;Node *d;Node *e;Node *f;Node *g;
    Node *h;Node *i;Node *j;Node *k;Node *l;Node *m;Node *n;
    Node *o;Node *p;Node *q;Node *r;Node *s;Node *t;Node *u;
    Node *v;Node *w;Node *x;Node *y;Node *z;

    Node(string word): suffix(word){
        adress = nullptr;
        Node *a = nullptr; Node *b = nullptr; Node *c = nullptr; Node *d = nullptr; Node *e = nullptr;
        Node *f = nullptr; Node *g = nullptr; Node *h = nullptr; Node *i = nullptr; Node *j = nullptr;
        Node *k = nullptr; Node *l = nullptr; Node *m = nullptr; Node *n = nullptr; Node *o = nullptr; 
        Node *p = nullptr; Node *q = nullptr; Node *r = nullptr; Node *s = nullptr; Node *t = nullptr;
        Node *u = nullptr; Node *v = nullptr; Node *w = nullptr; Node *x = nullptr; Node *y = nullptr;
        Node *z = nullptr;
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

typedef void(*set_func)(Node **&cur);
map<string,set_func> create_table (){
    map <string, set_func> table;
    table["a"] = &set_a; table["b"] = &set_b;  table["c"] = &set_c; table["d"] = &set_d; table["e"] = &set_e; table["f"] = &set_f; 
    table["g"] = &set_g; table["h"] = &set_h;  table["i"] = &set_i; table["j"] = &set_j; table["k"] = &set_k; table["l"] = &set_l; 
    table["m"] = &set_m; table["n"] = &set_n;  table["o"] = &set_o; table["p"] = &set_p; table["q"] = &set_q; table["r"] = &set_r; 
    table["s"] = &set_s; table["t"] = &set_tt; table["u"] = &set_u; table["v"] = &set_v; table["w"] = &set_w; table["x"] = &set_x; 
    table["y"] = &set_y; table["z"] = &set_z;
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
                cout<<"palavra "<<(*p)->suffix<<" inserida na árvore"<<endl;
            }
        }
        
        bool find_insert(string suf, Node **&p,string &curw) {
            p = &pRoot;
            string curl;
            string s;
            string k;
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
                        s = suf[l+i];
                        (table.find(s)->second)(p);
                        return false;
                    }
                }
                curw+=((*p)->suffix);
                if(curw==suf)return true;
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

};

int main(){
    Node *teste = new Node("teste");
    SuffixTree arvore;
    arvore.insert("*");
    arvore.insert("*model");
    arvore.insert("*nail");
    arvore.insert("*mobile");
    if(arvore.find("*nail")){
        cout<<"1"<<endl;
    };
    if(arvore.find("*mobile")){
        cout<<"2"<<endl;
    };
    if(arvore.find("*model")){
        cout<<"3"<<endl;
    };
    cout<<"*rodei"<<endl;
    return 0;
};