#include <iostream>
#include <fstream>
#include <random>
using namespace std;



void zodiak() {
    string imie, zodiak;

    cout << "Wypisz swoje imie: ";
    cin >> imie;
    cout << "Wypisz swoj znak zodiaku: ";
    cin >> zodiak;

    fstream plik;
    plik.open("./tekst.txt", ios::app);
    plik << imie << ';' << zodiak << endl;
    plik.close();
}

void losowych10() {
    for(int i = 0; i < 10; i++) {
        int a;

        a = rand() % 100;

        fstream plik2;
        plik2.open("./losowe.txt", ios::app);
        plik2 << a << " ";
        plik2.close();

        cout << "Wylosowano liczbe: " << a << " i zapisana ja w pliku!" << endl;
    }
}

void czyplikjest() {
    fstream plik3;
    plik3.open("./losowe.txt", ios::in);

    if(plik3.good()) {
        cout << "Plik sie otworzyl :)";
    } else {
        cout << "Nie udalo sie otworzyc :(";
    }
}

void pobieranie() {
    fstream plik4;
    plik4.open("./losowe.txt", ios::in);

    if(plik4.good() == false) {
        cout << "Nie udalo sie otworzyc :(";
    } else {
        string wiersz;
        while(getline(plik4, wiersz)) {
            cout << wiersz << endl;
        }
    }
}


int main()
{
    //zodiak();
    //losowych10();
    //czyplikjest();
    pobieranie();
    return 0;
}
