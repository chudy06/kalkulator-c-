#include <iostream>
#include <math.h>

using namespace std;

int main() {
    float liczba1, liczba2;
    char operacja;

    cout << "Autor: Kamil " << endl;

     cout << "\n Podaj pierwsza liczbe: ";
     cin >> liczba1;

     cout << "\n Podaj operacje(+, -, *, /): ";
     cin >> operacja;

     cout << "\n Podaj druga liczbe: ";
     cin >> liczba2;

     if  (operacja == '+') {
        cout << "Wynik: " << liczba1 + liczba2 << endl;
     } else if (operacja == '-') {
        cout << "Wynik: " << liczba1 - liczba2 << endl;
     } else if (operacja == '*') {
        cout << "Wynik: " << liczba1 * liczba2 << endl;
     } else if (operacja == '/') {
        if (liczba2 != 0) {
            cout << "\n Wynik: " << liczba1 / liczba2 << endl;
        } else {
            cout << "\n Nie mozna dzielic przez zero :) " << endl;
        }
     } else {
        cout << "\n Nie prawidlowa operacja" << endl;
     }

     return 0;
}
