#include <iostream>

using namespace std;

void sum(int a, int b) {
    int w = a + b;
    cout << w;
}

int main()
{
//    int tel = 123123123;
//  int *wsk = &tel;

//    cout << *wsk << endl;

/*    int a,b;

    cout << "Wypisz A: ";
    cin >> a;
    cout << "Wypisz B: ";
    cin >> b;

    int *aa = &a;
    int *bb = &b;

    int w = *aa + *bb;

    cout << w;

    return 0; */

    int aw, bw;

    cin >> aw;
    cin >> bw;

    int *a = &aw;
    cout << *a << endl;
    int *b = &bw;
    cout << *b << endl;


   sum(*a, *b);


}
