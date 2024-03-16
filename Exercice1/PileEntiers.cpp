#include <iostream>
using namespace std;
class PileEntiers{
int max1 ; 
int * adr ; 
int nelem ; 
public :

PileEntiers (int n=100) {
    nelem=0;
    max1=n;
    adr=new int[n];
    } 
PileEntiers(const PileEntiers& p){
      nelem=p.nelem;
      adr=new int[p.nelem];
      for(int i=0;i<p.nelem;i++){
        adr[i]=p.adr[i];
      }
}
~PileEntiers () {
    delete[] adr;
    cout<<"All Destroyed"<<endl;
}
void Empiler(int i){
    if(nelem<max1){
        adr[nelem++]=i;
    }
    else{
        cout<<"we can't add any more"<<endl;
    }
}
int Depiler() {
    if(nelem<=max1 && !nelem==0){
       
        return adr[--nelem];
    }
    else{
        return -1;
    }
}
bool Pleine() {
    if(nelem>0){
        return 1;
    }
    else{
        return 0;
    }
}
bool Vide(){
    if(nelem<0){
        return 0;
    }
    else{
        return 1;
    }
} 
void affiche(){
    for(int i=0;i<nelem;i++){
        cout<<adr[i]<<"\t";
      }
      cout<<endl;
}
friend void operator< (int a, PileEntiers &p);
friend void operator> (int b, PileEntiers &p);
friend void operator == (PileEntiers &p1,PileEntiers &p2);

};

void operator> (PileEntiers &p,int b){
    p.Depiler();
    p.Empiler(b);

}

void operator< (PileEntiers &p,int a){
    p.Empiler(a);
}

void operator== (PileEntiers &p1,PileEntiers &p2){
        if(p2.nelem!=p1.nelem){
            delete[] p1.adr;
            p1.adr=new int[p2.nelem];
            for(int i=0;i<p2.nelem;i++){
                 p1.adr[i]=p2.adr[i];
            }
        }
}

int main(){
    PileEntiers a,b(2); PileEntiers *ad=new PileEntiers;
    a.Empiler(7);
    a.Empiler(5);
    a.Empiler(7);
    PileEntiers c(a);
    b==a;
    b.affiche();
    a.affiche();
    c.affiche();
    cout<<boolalpha<<a.Pleine()<<endl;
    cout<<boolalpha<<c.Pleine()<<endl;
    a<10;
    a.affiche();
    a>1;
    a.affiche();
}