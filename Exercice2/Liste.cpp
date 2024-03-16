#include <iostream>
using namespace std;

class liste {
private:
    int *T;
    int max1;

public:
  
    liste(int max) {
        max1=max;
        T = new int[max1];
    }

    liste(const liste &L)  {
        max1=L.max1;
        T = new int[max1];
        for (int i = 0; i < max1; i++) {
            T[i] = L.T[i];
        }
    }

    ~liste() {
        delete[] T;
    }

    // Surcharge de l'opérateur =
    liste& operator=(const liste &L) {
        if (this != &L) {
            delete[] T;
            max1 = L.max1;
            T = new int[max1];
            for (int i = 0; i < max1; i++) {
                T[i] = L.T[i];
            }
        }
        return *this;
    }

    void saisie() {
        cout << "Saisissez les elements :\n";
        for (int i = 0; i < max1; ++i) {
            cout << "T[" << i << "] = ";
            cin >> T[i];
        }
    }

    void affiche() {
        cout << "Contenu de la liste:\n";
        for (int i = 0; i < max1; ++i) {
            cout << T[i] << "\t";
        }
        cout << endl;
    }
};

int main() {

    int nelm;
    cout<<"enter nbr elemts de la liste a : ";
    cin>>nelm;
    liste a(nelm);
    a.saisie();
    cout << "Liste a:\n";
    a.affiche();


    liste b = a;
    cout << "Liste b (copie de a):\n";
    b.affiche();

    return 0;
}
