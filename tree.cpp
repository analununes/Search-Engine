#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <fstream> 
#include <bits/stdc++.h> 
#include <cctype>
#include <stdio.h>
#include <time.h>
#include <vector>

using namespace std;

///////////////////////////////////// estruturas /////////////////////////////////////////////////////////////
//-----------------------node para linked list dos resultados------------------------------------------------

struct func{
 string textId;
 int nText;
 func *rankNext;
 vector<int> resultado;


 func(string n): textId(n){
 nText = 0;
 rankNext = nullptr;
 }

 func(vector<int> r): resultado(r){}
};

//----------------------------node para palavras da árvore---------------------------------------------------
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
 func *address = nullptr;
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

//--------------------------------funções usadas no map-------------------------------------------------------
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

//--------------------map para acessar nodes filhos de acordo com a letra ou algarismo----------------------------------------------
typedef void(*set_func)(Node **&cur);
map<string,set_func> create_table (){
 map <string, set_func> table;
 table["a"] = &set_a; table["b"] = &set_b; table["c"] = &set_c; table["d"] = &set_d; table["e"] = &set_e; table["f"] = &set_f; 
 table["g"] = &set_g; table["h"] = &set_h; table["i"] = &set_i; table["j"] = &set_j; table["k"] = &set_k; table["l"] = &set_l; 
 table["m"] = &set_m; table["n"] = &set_n; table["o"] = &set_o; table["p"] = &set_p; table["q"] = &set_q; table["r"] = &set_r; 
 table["s"] = &set_s; table["t"] = &set_tt; table["u"] = &set_u; table["v"] = &set_v; table["w"] = &set_w; table["x"] = &set_x; 
 table["y"] = &set_y; table["z"] = &set_z; table["1"] = &set_1; table["2"] = &set_2; table["3"] = &set_3; table["4"] = &set_4; 
 table["5"] = &set_5; table["6"] = &set_6; table["7"] = &set_7; table["8"] = &set_8; table["9"] = &set_9;
 table["0"] = &set_0;
 return table; 
};
map<string,set_func> table = create_table();

//////////////////////////////////////////////// árvore //////////////////////////////////////////////////////////////////////////////
class SuffixTree{
    private:
        Node *pRoot; 

    public:
        SuffixTree(): pRoot(nullptr){};

//-----------------------------------------------criação------------------------------------------------------------
    //se a palavra não for encontrada na árvore, inserimos a parte que falta da mesma
    void insert(string suffix) {
        Node **p;
        string curw;
        if (!find_insert(suffix, p,curw)) {
            if (curw.length()==0){
                *p = new Node(suffix);
            }else{
                *p = new Node(suffix.substr(curw.length()));
            }
        }
    }
    
    //procura a palavra na árvore e se não encontrar deixa preparado o Node onde o sufixo
    //restante deve ser inserido 
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

    //função para encontrar ou criar uma linked list das ids onde a palavra aparece
    bool insert_loc(string suf, string text_id, int read_t, string titulo) {
        Node **p;
        p = &pRoot;
        string curw;
        string curl;
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
                if(*froot==nullptr){
                    *froot = new func("*"); 
                }
                prev = froot;
                k = &((*froot)->rankNext);
                curn = (*froot)->nText;
                curn += 1;
                (*froot)->nText = curn; 
                *fnew = new func(text_id);
                (*fnew)->nText = read_t;
                prev = froot;
                rankeada(prev,fnew);
                return true;
            }
            curl = suf[curw.length()];
            (table.find(curl)->second)(p);
        }
        
        return false;
    }

    //insere cada id na linked list, ordenada por quantas vezes a palavra apareceu
    //no texto
    bool rankeada(func **&froot, func **&k){
        int total = (*k)->nText;
        int curr;
        func **prev;
        /*prev = froot;
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
        (*prev)->rankNext = *k;*/
        prev = froot;
        froot = &((*froot)->rankNext);
        (*k)->rankNext = *froot;
        (*prev)->rankNext = *k;
        return true;
    }

//-------------------------------------------------pesquisa---------------------------------------------------
    //apenas procura a palavra na árvore    
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

//-------------------------------------------------serialização---------------------------------------------------
    //as duas funções são usadas para percorrer a árvore salvando em texto sufixos e ids
    void serialize(string filename){
        ofstream file;
        file.open(filename);
        Node **pNode;
        pNode = &pRoot;
        Node **aux;
        string filhos[36] = {"1","2","3","4","5","6","7","8","9","0","a","b","c","d","e",
        "f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};
        for(int i = 0;i<36;i++){
            aux = pNode;
            (table.find(filhos[i])->second)(aux);
            if (*aux!=nullptr){
                run_serialize(aux,file);
            }
        }
    }
    void run_serialize(Node **&pCur,ofstream &file){
        func **aux;
        Node **a;
        int i;
        string filhos[36] = {"1","2","3","4","5","6","7","8","9","0","a","b","c","d","e",
        "f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};
        a = pCur;
        aux = &((*pCur)->address);
        if(*aux!=nullptr){
            file<<(*pCur)->suffix+" ";
            file<<to_string((*aux)->nText)+" ";
            aux = &((*aux)->rankNext);
            while(*aux){
                file<<(*aux)->textId+" ";
                file<<to_string((*aux)->nText)+" ";
                aux = &((*aux)->rankNext);
            }
        }else{
            file<<"&"+(*pCur)->suffix+" ";
        }

        for(i = 0;i<36;i++){
            a = pCur;
            (table.find(filhos[i])->second)(a);
            if (*a!=nullptr){
                run_serialize(a,file);
            }
        }
        file << ") ";
    }

//--------------------------------------------------diserialização---------------------------------------------------
    //as duas funções são usadas para montar a árvore a partir de um arquivo de texto
    void diserialize(string filename){
        ifstream file;
        string line;
        Node **pNode ;
        pNode = &pRoot;
        file.open(filename);
        //getline(file,line);
        //stringstream split;
        //split << line;
        string cur;
        while(file >> cur){
            pNode = &pRoot;
            run_diserialize(pNode,cur,file);
        }
    }


    bool run_diserialize (Node **&pNode, string &curr, ifstream & split){
        func **cur;
        Node **pNew;
        int r,i;
        string curl;string address; string textid; string ntext;
        vector<int> resultados;
        if (curr==")") return true;
        Node **aux = pNode;
        curl = curr[0];
        if(curl!="&"){
            (table.find(curl)->second)(pNode);
            *pNode = new Node(curr);
            split >> address;
            cur = &((*pNode)->address);
            *cur = new func("*");
            (*cur)->nText= stoi(address);
            //(*pNode)->address = *cur;
            for (i = 0;i< stoi(address);i++){
                textid.clear();
                split >> textid;
                //cur = &((*cur)->rankNext);  
                //*cur = new func(textid); 
                ntext.clear();
                split >> ntext;
                //(*cur)->nText = stoi(ntext);
                resultados.push_back(stoi(textid));
                resultados.push_back(stoi(ntext));
            } 
            *cur = new func(resultados);
            (*pNode)->address = *cur;
        }else{
            curl = curr[1];
            (table.find(curl)->second)(pNode);
            *pNode = new Node(curr.substr(1));
        }

        while(split >> curr){ 
            if(run_diserialize(pNode, curr, split)) break;
        }
        
        pNode = aux;
        return false;
    }
};

// Driver function to sort the vector elements by  
// first element of pair in descending order
bool sortinrev(const pair<int,int> &a, const pair<int,int> &b){
       return (a.first > b.first);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main(){
    SuffixTree arvore;
    arvore.insert("*");
    arvore.diserialize("arvore*");

    fstream file; 
    string word, t, q, filename, a, c, d, text_id, suf, r1,r2,resultado; 
    int i,k,j,openfile,cnid,nid;
    bool notText,reading;
    string titulo = "\0";
    int read_t = 0;
    int ocorr = 0;
    bool imprimir;

//--------------------------------------criando-a-árvore------------------------------------------
    //abre os k primeiros arquivos e insere suas palavras na árvore, juntamente com ids dos
    //resultados e número de vezes em que a palavra foi encontrada no texto
    /*for (k = 0; k < 136; k++){
        filename = "dicionarios/d_" + to_string(k); 
        cout<<filename<<endl;
        file.open(filename.c_str()); 
        if(!file){
            cout<<"erro"<<endl;
        }
        reading = 1;
        while (file >> word) { 
            i = 0;
            a+='*';
            if(word.substr(0,3)=="id="){
                notText = 1;
                text_id.clear();
                text_id = word.substr(3);
            }else if(notText == 1){
                if(word[word.length()-1]==34){
                    notText = 0;
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
                    if(a.length()>1){
                        arvore.insert(a);
                        arvore.insert_loc(a,text_id,ocorr,titulo);
                    }
                }
            }
            a.clear();

            if(word[word.length()-1]==62){
                notText=0;
            }   
        }
        file.close();
        file.clear();
    }
    cout<<"serializando"<<endl;


    arvore.serialize("arvore60");*/

//---------------------------------------pesquisa-na-árvore---------------------------------------
    bool pesquisar = 1;
    while(pesquisar==1){
    string query;
    func **k;
    func **l;
    func **rs;
    int hm;
    cout<<"digite sua pesquisa:";
    cin>>query;
    clock_t Ticks[2];
    Ticks[0] = clock();
    a = "*";
    i = 0;
    while (i != query.length()) {
        if ((query[i] > 47 && query[i] < 58) || (query[i] > 64 && query[i] < 91) || (query[i] > 96 && query[i] < 123) ){
            a += tolower(query[i]);
        }
    i++;
    }
        if(a.length()>0){
            if (arvore.search(a,k)){
                Ticks[1] = clock();
                vector<int> resultados;
                resultados = (*k)->resultado;
                double Tempo = (Ticks[1] - Ticks[0]) * 1000.0 / CLOCKS_PER_SEC;
                rs = k;
                vector<string> titulos;
                i = 0;

                vector< pair <int,int> > vect;
                int z = resultados.size()/2;
                int arr[z];
                int arr1[z];
                for(int i=0; i<z;i++){
                    arr[i] = resultados[2*i];
                    arr1[i] = resultados[2*i + 1];
                }
                // Entering values in vector of pairs
                for (int i=0; i<z; i++) vect.push_back( make_pair(arr[i],arr1[i]) );
                // using modified sort() function to sort
                sort(vect.begin(), vect.end(), sortinrev);

                //resultados = (*k)->resultado;
                cout<<resultados.size()/2<<" resultados encontrados em "<< Tempo<< "ms"<<endl;
                cout<<" "<<endl;
                while(i < resultados.size()/2){
                    cout<<i<<"->";
                    //nid = resultados[2*i];
                    nid = vect[i].second;
                    openfile = floor(nid/10000);
                    filename = "newtxt/newtext_"+ to_string(openfile);
                    file.open(filename.c_str()); 
                    while(file >> word){
                        if(cnid==nid){
                                hm++;
                                if(word.substr(0,6) == "title="){
                                    cout<<word.substr(6)+" ";
                                }
                                else if (word == "*"){
                                    cout<<" "<<endl;
                                    file.close();
                                    file.clear();
                                }
                                else{
                                    cout<<word+" ";
                                }
                            }
                            if(word.substr(0,3)== "id="){
                            cnid = stoi(word.substr(3));
                            }
                    }
                    cout<<vect[i].first<<endl;
                    i +=1;
                    if (i%20==0){
                        cout<<"ver mais resultados? [s/n]"<<endl;
                        string ask;
                        cin>>ask;
                        if (ask == "n"){
                            k = rs;
                            break;
                        }
                    }
                }
                cout<<"quer abrir algum arquivo?"<<endl;
                cout<<"digite o número do arquivo ou n para sair:"<<endl;
                cin>>query;
                if(query!="n"){
                    if (stoi(query)>i){
                        cout<<"não existe"<<endl;
                    }else{
                        i = stoi(query);
                        //nid = resultados[2*i];
                        nid = vect[i].second;
                        openfile = floor(nid/10000);
                        filename = "newtxt/newtext_"+ to_string(openfile);
                        file.open(filename.c_str()); 
                        if(!file){
                            cout<<"erro"<<endl;
                        }
                        while(file >> word){
                            if(cnid==nid){
                                if(word.substr(0,6) == "title="){
                                    cout<<word.substr(6)+" ";
                                }
                                else if (word == "*"){
                                    cout<<"\n"<<endl;
                                }
                                else{
                                    cout<<word+" ";
                                }
                            }else if(cnid>nid){
                                cout<<" "<<endl;
                                file.close();
                                file.clear();
                            }
                            if(word.substr(0,3)== "id="){
                                cnid = stoi(word.substr(3));
                            }
                        }
                        cout<<" "<<endl;
                    }
                }
            }else{
                cout<<"não encontrado"<<endl;
            }
        }
            a.clear();
          
            cout<<"fazer outra pesquisa? [s/n]"<<endl;
            cin>>query;
            if(query == "n"){
                pesquisar = 0;
            }
        
        }
    return 0;
};

