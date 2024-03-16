#include <iostream>
#include <cstring>
using namespace std;

class chaine{
    int longueur;
    char *texte;
    public:
      chaine(){
        longueur=0;
        texte=new char[0];
      }
      chaine(const char* ch) {
        longueur = strlen(ch);
        texte = new char[longueur];
        strcpy(texte,  ch);
    }
    
      chaine(chaine &ch) {
        texte=new char[longueur=ch.longueur];
        strcpy(texte, ch.texte);
        
      }
      void affiche(){
        cout<<"Votre texte est : "<<texte<<endl;
      }
      void operator=(chaine &p){
            if(this->longueur!=p.longueur){
              delete[] this->texte;
              this->texte=new char[p.longueur];
            }
            strcpy(this->texte,p.texte);
      }
      void operator==(chaine &p1){   //comparaison
           if(strcmp(this->texte,p1.texte)==1){
            cout<<texte<<" super a "<<p1.texte<<endl;
          
           }
           else if(strcmp(this->texte,p1.texte)==-1){
            cout<<texte<<" inferiur a "<<p1.texte<<endl;
           }
           else{
            cout<<texte<<" egale a "<<p1.texte<<endl;
             
           }
      }
      void operator+(chaine &p1)    { //concaténation
            cout<<this->texte<<p1.texte<<endl;     
             }  
      char operator[](int i){
           return texte[i];
      }   //accès à un caractère de rang donné
      


};
int main(){
    chaine a("Mohamed"),c("HI");
    a.affiche();
    cout<<a[1]<<endl;
    chaine b=a;
    b==a;
    c==a;
    //a+b+c;
    a+b;
  
}