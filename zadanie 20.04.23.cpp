#include <iostream>

using namespace std;

void zadanie1() {
        int l;

        int suma = 0;
        int wieksze = 0;

        cout << "Podaj L: ";
        cin >> l;
        int tablica[l];

        if(l <= 50 && l >= 0) {
                for(int i = 0; i < l; i++) {
                    cout << "Podaj wartosc do komorki nr. " << i << ": ";
                    cin >> tablica[i];
                    suma = suma + tablica[i];
                }

                cout << "Liczby w tablicy: ";

                for(int k = 0; k < l; k++) {
                    cout << tablica[k] << " ";
                }

                cout << endl;
                cout << "Suma: "<< suma << endl;

                int srednia = suma / l;
                cout << "Srednia: " << srednia << endl;

                for(int p = 0; p < l; p++) {
                    if(tablica[p] > srednia) {
                        wieksze++;
                    }
                }

                cout << wieksze << " liczb jest wiekszych od sredniej";


        } else {
            cout << "Liczba musi byc z przedzialu 1-50";
        }
}

void zadanie2() {
string slowa[20];
    char z1, z2;

    cout << "Podaj 20 wyrazow: " << endl;
    for (int i = 0; i < 20; i++) {
        cout <<  "Podaj wyraz do komorki " << i << ": ";
        cin >> slowa[i];
    }

    cout << "Podaj znak z1: ";
    cin >> z1;
    cout << "Podaj znak z2: ";
    cin >> z2;

    for (int i = 0; i < 20; i++) {
        if (slowa[i].find(z1) != string::npos && slowa[i].find(z2) == string::npos) {
            cout << slowa[i] << endl;
        }
    }
}

int main()
{
    //zadanie1();
    //zadanie2();
    return 0;
}
