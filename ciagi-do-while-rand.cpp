/******************************************************************************
a. wczytuje ci¹g liczb ca³kowitych jednocyfrowych (niekoniecznie dodatnich) a¿
do wczytania liczby innej ni¿ jednocyfrowa (pêtl¹ while) i drukuje najmniejsz¹
wczytan¹ liczbê ci¹gu (o ile w tym ci¹gu by³y jakieœ liczby), nie licz¹c tej ostatniej
liczby koñcz¹cej ci¹g.
b. potem wczytuje liczbê ca³kowit¹ k, wymuszaj¹c, by k by³o dodatnie i mniejsze od 10
(pêtl¹ do-while).
c. nastêpnie wczytuje ci¹g k dowolnych liczb ca³kowitych (pêtl¹ for)
uaktualniaj¹c w razie potrzeby dotychczasow¹ najmniejsz¹ liczbê ci¹gu.
d. po zakoñczeniu wczytywania liczb ci¹gu (krok a i c) drukuje najmniejsz¹
wczytan¹ liczbê z obu ci¹gów ³¹cznie.
e. nastêpnie losuje jeszcze n (n – sta³a ca³kowita)
liczb ca³kowitych dwucyfrowych dodatnich, drukuje je podczas losowania i na koniec drukuje,
ile z nich by³o wiêkszych od œredniej tych n wylosowanych liczb (to wymaga zastosowania
tablicy jednowymiarowej do wpisywania wylosowanych liczb).

*******************************************************************************/
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    // czêœæ a - wczytywanie liczb
    int a;
    int min_a;
    bool status_ok;

    cout << "Podaj wartosci liczbowe: " << endl;
    cin >> a;

    if (a<10 && a > -10){
        status_ok = true;
         min_a = a;
    }
    else
        status_ok = false;

    while(a<10 && a > -10){
        cin >> a;
        if (a < min_a && (a<10 && a > -10))
        min_a = a;

    }
    if (status_ok == true)
    cout << "Wartosc minimalna jest rowna: " << min_a << endl;
    else
    cout << "Nie podano poprawnej wartosci." << endl;

    // czesc b - wprowadzenie wartosci dla k
    int k;
    do {
        cout << "Podaj wartosc dla k: " << endl;
        cin >> k;
    }
    while(k < 1 || k > 9);
    cout << "Wprowadziles: " << k << endl;

    //czêœæ c - ci¹g liczb k


    cout << "Podaj " << k << " wartosci: " << endl;
    int min_i = 0;
    int i = 0;
    int l = 0;
    cin >> i;
    min_i = i;
    for (l=1; l<k; l++){
        int i;
        cin >> i;

        if (i < min_i)
            min_i = i;
    }
    // czêœæ d - wypisanie wartoœci
   if(min_a < min_i && status_ok == true)
   cout  << "Najmniejsza dotychczas podana wartosc to: " << min_a<< endl;
   else if (min_a > min_i && status_ok ==true)
   cout  << "Najmniejsza dotychczas podana wartosc to: " << min_i<< endl;
   else
    cout << "Nie podano poprawnej pierwszej wartosci, druga wartosc minimalna to: " <<min_i << endl;

   //czêœæ e - tablica z losowymi liczbami
   const int n = 10;
   int L[n];
   int j;
   float wartosc = 0;
    int licznik = 0;
    int licznik_liczb = 0;
    int l_petli = 0;

   srand(time(0));

   for( j = 0; j < n; j++){
       L[j] = (rand() % 90) + 10;
       cout <<"Wartosc:" <<j <<": "<< L[j] << endl;
       wartosc += L[j];
       licznik++;
   }


 float srednia = (wartosc/licznik);

 for(j=0;j<n;j++){
    if(L[j]>srednia)
        licznik_liczb++;
 }


   cout << "W ciagu wystapilo " << licznik_liczb << " wiekszych od sredniej " << srednia;

    return 0;
}




