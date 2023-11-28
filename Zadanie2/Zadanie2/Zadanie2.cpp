#include <iostream>
#include <string>
#include <time.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    srand(time(NULL));
    clock_t start, stop;
    start = clock();

    int los;
    int ilosc;

    cout << "Podaj ile elementow losujemy = "; cin >> ilosc;
    int* tablica;
    tablica = new int[ilosc];


    for (int i = 0; i < ilosc; i++)
    {
        los = rand() % 100 + 1;
        tablica[i] = los;
    }

    for (int i = 0; i < ilosc; i++)
    {
        cout << "Index nr " << i << " = " << tablica[i] << " Adres komorki: " << (int)&tablica[i] << endl;
    }

    stop = clock();

    double czaswyswietlaniaaplikacji = (double)(stop - start) / ilosc / CLOCKS_PER_SEC;

    cout << endl << czaswyswietlaniaaplikacji << endl;

    delete[] tablica;

    return EXIT_SUCCESS;
}