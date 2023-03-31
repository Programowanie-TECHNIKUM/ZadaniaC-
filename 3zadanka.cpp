#include <iostream>
#include <string>
#include <string.h>
using namespace std;


void zadanie1() {
    int u,v;
    cout << "Podaj liczbe u: ";
    cin >> u;
    cout << "Podaj liczbe v: ";
    cin >> v;
    int dzielenie = v / u;
    int reszta = v % u;
    cout << "Suma dzielenia : " << dzielenie << " Reszta : " << reszta << endl;
    cout << "Rzeczywista: " << (100 * v / u) * 0.01;
}

void zadanie2() {
    char imie[100];
    char nazwisko[100];

    cout << "Wpisz imie: ";
    cin >> imie;
    cout << "Wpisz nazwisko: ";
    cin >> nazwisko;
    int ile = strlen(imie) + strlen(nazwisko);
    cout << "Inicjaly: " << imie[0] << " " << nazwisko[0] << endl;
    cout << "Razem znakow maja: " << ile << endl;
    cout << "Ostatnia litera nazwiska to: " << nazwisko[strlen(nazwisko) - 1];
}

void zadanie3() {
    int a,b,c;

    cout << "Podaj A: ";
    cin >> a;
    cout << "Podaj B: ";
    cin >> b;
    cout << "Podaj C: ";
    cin >> c;

    int suma = a + b + c;

    int srednia = suma / 3;

    cout << "Suma: " << suma << endl;
    cout << "Srednia: " << srednia << endl;

    if(srednia > 4) {
        cout << "Dobra srednia" << endl;
    } else {
        cout << "Slaba srednia" << endl;
    }

}

void zadanie4() {
    int tab[12];
    int a;
    int wynik;
    for(int i = 0; i < 12; i++) {
        tab[i] = rand() % 11;
    }
    cout << "Wybierz cyfra od 0 do 10: ";
    cin >> a;
    for(int i = 0; i < 12; i++) {
        cout << i << ". " << tab[i] << endl;
        if(tab[i] == a) {
           wynik = wynik + 1;

        }
    }
    cout << "Razem cyfra " << a << " pojawila sie " << wynik << " razy ";


}

int main()
{
    //zadanie1();
    //zadanie2();
    //zadanie3();
    //zadanie4();
    
    return 0;
}
