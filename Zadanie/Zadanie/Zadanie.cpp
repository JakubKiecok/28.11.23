#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    int* tablica;
    int ile = 5;
    tablica = new int[ile];
    
    cout << "Dynamiczne adresy do przydzielania 5 ele = " << (int)tablica << endl;
    cout << "Adres wlasny wskaznika tablica = " << (int)&tablica << endl;
    cout << (int)&tablica[0] << endl;
    cout << (int)&tablica[1] << endl;
    cout << (int)&tablica[2] << endl;
    cout << (int)&tablica[3] << endl;
    cout << (int)&tablica[4] << endl;

    cout << endl << endl;

    for (int i = 0; i < ile; i++)
    {
        cout << (int)tablica << endl;
        tablica++;
    }

    return 0;
}