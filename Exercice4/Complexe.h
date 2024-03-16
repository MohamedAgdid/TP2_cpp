
#include <iostream>
using namespace std;
class complexe{
     double re;
     double img;
     public:
     complexe(double a,double b);
     complexe(const complexe& z);
     ~complexe();
     void affiche();
     bool operator==(const complexe &p);
    friend ostream& operator<<(ostream& os,const complexe& p);
    //ostream& operator<<(ostream& os) const;
    complexe operator+(const complexe &p); 
    complexe operator+=(const complexe &p); 
    complexe operator+=(float a);
    complexe operator+(float);
    complexe operator-(const complexe &p);
    complexe operator-=(const complexe &p);
    complexe operator/(const complexe &p);
    complexe operator*(const complexe &p);
    complexe operator-(float);
    complexe operator*(float);
    complexe operator/(float);
    complexe operator-=(float a);
    complexe operator*=(float a);
    complexe operator/=(float a);
    complexe operator*=(const complexe &p);
    complexe operator/=(const complexe &p);
};

complexe::complexe(double a=0,double b=0){
     img=b;
     re=a;
}

complexe::complexe(const complexe& z){
     re=z.re;
     img=z.img;
     }
complexe::~complexe(){}
void complexe::affiche(){
    cout<<re<<" + "<<img<<"i"<<endl;
}
ostream& operator<<(ostream& os,const complexe & p) {
    os << "(" << p.re << "+ " << p.img << "i)";
    return os;
}
/*ostream& complexe::operator<<(ostream& os) {
    os << "(" << re << "+ " << img << "i)";
    return os;
}*/
bool complexe::operator==(const complexe &p){
    return (re==p.re && img==p.img);
}
complexe complexe::operator+(const complexe &p){
    complexe res;
    res.re=re+p.re;
    res.img=img+p.img;
    return res;
}

complexe complexe::operator+(float a){
    complexe res;
    res.re=re+a;
    res.img=img+a;
    return res;
}
complexe complexe::operator+=(float a){
    complexe res;
    res.re=re+a;
    res.img=img+a;
    return res;
}
complexe complexe::operator*=(float a){
    complexe res;
    res.re=re*a;
    res.img=img*a;
    return res;
}
complexe complexe::operator/=(float a){
    complexe res;
    res.re=re/a;
    res.img=img/a;
    return res;
}
complexe complexe::operator-=(float a){
    complexe res;
    res.re=re-a;
    res.img=img;
    return res;
}
complexe complexe::operator-(const complexe &p){
    complexe res;
    res.re=re-p.re;
    res.img=img-p.img;
    return res;
}

complexe complexe::operator-(float a){
    complexe res;
    res.re=re-a;
    res.img=img;
    return res;
}
complexe complexe::operator*(const complexe &p){
    complexe res;
    res.re = re * p.re - img * p.img;
    res.img = re * p.img + img * p.re;
    return res;
}

complexe complexe::operator*(float a){
    complexe res;
    res.re=re*a;
    res.img=img*a;
    return res;
}
complexe complexe::operator/(const complexe &p){
    complexe res;
    float denominator = p.re * p.re + p.img * p.img;
    res.re = (re * p.re + img * p.img) / denominator;
    res.img = (img * p.re - re * p.img) / denominator;
    return res;
}

complexe complexe::operator/(float a){
    complexe res;
    res.re=re/a;
    res.img=img/a;
    return res;
}
complexe complexe::operator+=(const complexe &p){
    complexe res;
    res.re=re+p.re;
    res.img=img+p.img;
    return res;
}
complexe complexe::operator-=(const complexe &p){
    complexe res;
    res.re=re-p.re;
    res.img=img-p.img;
    return res;
}
complexe complexe::operator*=(const complexe &p){
    complexe res;
    res.re = re * p.re - img * p.img;
    res.img = re * p.img + img * p.re;
    return res;
}
complexe complexe::operator/=(const complexe &p){
    complexe res;
    float denominator = p.re * p.re + p.img * p.img;
    res.re = (re * p.re + img * p.img) / denominator;
    res.img = (img * p.re - re * p.img) / denominator;
    return res;
}

