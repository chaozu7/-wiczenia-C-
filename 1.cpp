#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main (int argc, char *argv[]) {
/* zak³adam, ¿e char to jeden znak, nie ma jeszcze podanej w materia³ach opcji .length (?) */
    char a, d;
    int b, c;
    double e = 0;

    cout << "Czy chcesz dzialac na znakach (napisz litere t lub T), czy wolisz dzialac na liczbach calkowitych (napisz dowolny inny znak)?" << endl;
    cout << "Podaj znak:" << endl;

    cin >> a;

    if (a == 't' || a == 'T'){
    cout << "Podaj dowolny znak: " << endl;
    cin >> d;

        if (d >= 'a' && d <= 'z'){
            cout << "Znak jest mala litera." << endl;
        }else if (d >= 'A' && d <= 'Z'){
            cout << "Znak jest duza litera." << endl;
        }else if (d >= '0' && d <= '9'){
            cout << "Znak jest cyfra." << endl;
        } else {
            cout << "To inny znak." << endl;
        }

    } else {
        cout << "Podaj liczbe: " << endl;
        cin >> b;
        cout << "Podaj drug¹ liczbe: " << endl;
        cin >> c;

        if ((b < c) && (b%2 == 0)){
          cout << "Liczba jest parzysta." << endl;
        } else if((b < c) && (b%2 != 0)){
          cout << "Liczba jest nieparzysta."<< endl;
        } else if ( b == c) {
            return 0;
        } else if((b > c) && (c%2 != 0)){
          cout << "Liczba jest nieparzysta."<< endl;
        } else if ((b > c) && (c%2 == 0)){
          cout << "Liczba jest parzysta." << endl;
        }

        if (b < c){
           if (c == 0) {
            cout << "Nie dzielimy przez 0" << endl;
           }else if (c != 0){
               e = b/(2.0*c);
           cout << "Wynik dzielenia to: " << e ;
           }
        }else if ( b > c){
            if (b == 0) {
            cout << "Nie dzielimy przez 0" << endl;
           } else if (b != 0){
               e = c/(2.0*b);
            cout << "Wynik dzielenia to: " << e ;
           }
        }

    }

     return 0;
}
