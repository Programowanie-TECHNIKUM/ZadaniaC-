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
    char t1[10];

    if(plik3.good()) {
        cout << "Plik sie otworzyl :)";
    } else {
        cout << "Nie udalo sie otworzyc :(";
    }
}

void zadanko() {


    int t1[10], t2[10],t3[10],i;


    for(i=0;i<10;i++){
        t1[i]=rand()%10+1;
        t2[i]=rand()%10+1;
    }

    fstream plik,plik2;

    plik.open("./losowe.txt", ios::in);

    if(plik.good()==false){
        cout<<"pliku nie udalo sie otworzyc"<<endl;
    }
    else{
            while(!plik.eof()){
                for(i=0;i<10;i++){
                    plik << t1[i] << t2[i];
                }
            }
    }

    plik.close();

    plik2.open("./sum.txt", ios::app);

    for(i=0;i<10;i++){
        plik2 << t3 << endl;
    }

    plik2.close();
}

void pobieranie() {
    fstream plik4;
    plik4.open("./losowe.txt", ios::in);


    if(plik4.good() == false) {
        cout << "Nie udalo sie otworzyc :(";
    } else {
        cout << "Otworzono plik :)";
    }
}

void zadanko2() {
    string znaki[5];

    for(int i = 0; i < 5; i++) {
        cout << i << ". ";
        cin >> znaki[i];
    }

    fstream plik;
    plik.open("./test.txt", ios::app);
    for(int i = 0; i < 5; i++) {
        plik << znaki[i] << endl;
    }

    string wiersz;

    fstream plik2;
    plik2.open("./test.txt", ios::in);

    if(plik2.good()) {
        while(getline(plik2, wiersz)) {
            cout << wiersz << " ma: " << wiersz.length() << "znakow" << endl;
        }
    }




}

int main()
{
    //zodiak();
    //losowych10();
    //czyplikjest();
    //pobieranie();
    //zadanko();
    zadanko2();
    return 0;
}
