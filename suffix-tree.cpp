#include <iostream>
#include <iomanip>
#include <string>
#include <unordered_map>

using namespace std;


struct Node {
    string suffix;
    Node *adress;
    Node *a;Node *b;Node *c;Node *d;Node *e;Node *f;Node *g;
    Node *h;Node *i;Node *j;Node *k;Node *l;Node *m;Node *n;
    Node *o;Node *p;Node *q;Node *r;Node *s;Node *t;Node *u;
    Node *v;Node *w;Node *x;Node *y;Node *z;

    Node(string x): suffix(x){
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

/////////////////////////////////////////////////////////////////////////////////////////////////////

class SuffixTree{
    private:
        Node *pRoot;
        void hash(){
            typedef void(*set_func)(Node **&cur);
            unordered_map <string, set_func> m;

            m["a"] = &set_a; m["b"] = &set_b;  m["c"] = &set_c; m["d"] = &set_d; m["e"] = &set_e; m["f"] = &set_f; 
            m["g"] = &set_g; m["h"] = &set_h;  m["i"] = &set_i; m["j"] = &set_j; m["k"] = &set_k; m["l"] = &set_l; 
            m["m"] = &set_m; m["n"] = &set_n;  m["o"] = &set_o; m["p"] = &set_p; m["q"] = &set_q; m["r"] = &set_r; 
            m["s"] = &set_s; m["t"] = &set_tt; m["u"] = &set_u; m["v"] = &set_v; m["w"] = &set_w; m["x"] = &set_x; 
            m["y"] = &set_y; m["z"] = &set_z;
        };
 
};

 int main(){
     Node *teste = new Node("teste");
     return 0;
 };