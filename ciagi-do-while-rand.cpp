/******************************************************************************
a. wczytuje ci�g liczb ca�kowitych jednocyfrowych (niekoniecznie dodatnich) a�
do wczytania liczby innej ni� jednocyfrowa (p�tl� while) i drukuje najmniejsz�
wczytan� liczb� ci�gu (o ile w tym ci�gu by�y jakie� liczby), nie licz�c tej ostatniej
liczby ko�cz�cej ci�g.
b. potem wczytuje liczb� ca�kowit� k, wymuszaj�c, by k by�o dodatnie i mniejsze od 10
(p�tl� do-while).
c. nast�pnie wczytuje ci�g k dowolnych liczb ca�kowitych (p�tl� for)
uaktualniaj�c w razie potrzeby dotychczasow� najmniejsz� liczb� ci�gu.
d. po zako�czeniu wczytywania liczb ci�gu (krok a i c) drukuje najmniejsz�
wczytan� liczb� z obu ci�g�w ��cznie.
e. nast�pnie losuje jeszcze n (n � sta�a ca�kowita)
liczb ca�kowitych dwucyfrowych dodatnich, drukuje je podczas losowania i na koniec drukuje,
ile z nich by�o wi�kszych od �redniej tych n wylosowanych liczb (to wymaga zastosowania
tablicy jednowymiarowej do wpisywania wylosowanych liczb).

*******************************************************************************/
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    // cz�� a - wczytywanie liczb
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

    //cz�� c - ci�g liczb k


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
    // cz�� d - wypisanie warto�ci
   if(min_a < min_i && status_ok == true)
   cout  << "Najmniejsza dotychczas podana wartosc to: " << min_a<< endl;
   else if (min_a > min_i && status_ok ==true)
   cout  << "Najmniejsza dotychczas podana wartosc to: " << min_i<< endl;
   else
    cout << "Nie podano poprawnej pierwszej wartosci, druga wartosc minimalna to: " <<min_i << endl;

   //cz�� e - tablica z losowymi liczbami
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




