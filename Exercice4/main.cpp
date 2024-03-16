#include <iostream>
#include "complexe.h"
using namespace std;

int main(){
    complexe defaut,zero(0.0, 0.0), un(2.0, 8.0), i(0.0, 1.0),z(un*un), j;
    z.affiche();
    un.affiche();
    cout<<un<<endl;
    cout<<boolalpha<<(un==zero)<<endl;
    cout<<"test == "<<endl;
    cout<<boolalpha<<zero<<"==?"<<defaut<<endl;
    if (zero == defaut)
        cout << " oui" << endl;
    else
        cout << " non" << endl;

    j = un + i; 
    cout << un << " + " << i << " = " << j <<endl;
    complexe trois(un);
    trois += un; 
    trois += 1.0;
    cout << un << " + " << un << " + 1.0 = " << trois <<endl;
    complexe deux(trois);
    deux -= un;
    cout << trois << " - " << un << " = " << deux <<endl;
    cout<<i<< " * " <<i<< " = " << z <<endl;
    complexe k=z/i;
    cout<< z << " / " <<i<< " = "<<k<<endl;
    cout<<"------------------------------------------------------"<<endl;
    cout<<"autre test"<<endl;
    cout<<"------------------------------------------------------"<<endl;
    cout<<"affichage de i=un+zero"<<endl;
    cout<<(i=un+zero)<<endl;
    cout<<"affichage de j=i+un"<<endl;
    cout<<(j=i+un)<<endl;
    cout<<"affichage de j=j+3"<<endl;
    cout<<(j=j+3)<<endl;
    cout<<"affichage de j=i-un"<<endl;
    cout<<(j=i-un)<<endl;
    cout<<"affichage de j=i*un"<<endl;
    cout<<(j=i*un)<<endl;
    cout<<"affichage de j=i/un"<<endl;
    cout<<(j=i/un)<<endl;
    cout<<"affichage de j=i*400"<<endl;
    cout<<(j=i*400)<<endl;
    complexe r(1.1,1.1);
    cout<<"affichage pour tester +="<<endl;
    cout<<(r+=100)<<endl;
    cout<<(r+=j)<<endl;
    cout<<"affichage de *= et /="<<endl;
    cout<<(r*=un)<<" "<<(r/=j)<<endl;
    cout<<"------------------------------------------------------"<<endl;
    cout<<"fin..........."<<endl;
    cout<<"------------------------------------------------------"<<endl;

}