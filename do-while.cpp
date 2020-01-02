#include <iostream>
#include <cstdlib>

using namespace std;

int main (int argc, char *argv[]) {

string napis;
const char poczatkowy = 'k';
char koncowy;
int licznik = 0;
int napis_dlugosc = 0;
int napis_max = 0;
int napis_min = 0;
int roznica = 0;
int wyrazy_koncowka= 0;


    cout << "Wpisz wyraz:" << endl;

do{
    cin >> napis;
    if (poczatkowy == napis[0]){
    licznik++;
    }else if (poczatkowy != napis[0]){
    licznik = 0;
    }

    napis_dlugosc = napis.size();

    koncowy = napis[napis_dlugosc - 1];

    if((koncowy >= 'A' && koncowy <= 'Z') || (koncowy >= 'a' && koncowy <= 'z'))
        wyrazy_koncowka++;

    if (napis_dlugosc > napis_max)
        napis_max = napis_dlugosc;

    if (napis_min > napis_dlugosc || napis_min == 0)
        napis_min = napis_dlugosc;

    roznica = napis_max - napis_min;

}while(licznik < 2);


    cout << "Litera konczy sie " << wyrazy_koncowka << " wyrazow." << endl;
    cout << "Roznica miedzy najkrotszym a najdluzszym wyrazem wynosi: " << roznica << endl;


return 0;

}
