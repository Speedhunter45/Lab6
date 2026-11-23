#include <iostream>
#include <string>
using namespace std;
int main()
{
    //zad 1
    /*
    int a = 0;
    int b = 0;
    cin >> a;
    cin >> b;
    cout << a / b << endl;
    cout << static_cast<double>(a) / b << endl;
    cout << static_cast<double>(a / b) << endl;
    */
    //zad2
    /*
    double db = -3.99;
    int dbi = db;
    cout << dbi << "  " << static_cast<int>(db);
    */
    //zad3
    /*
    char a = 'A';
    int b = 66;
    cout << static_cast<int>(a) << '  ' << static_cast<char>(b);
    */
    //zad4 
    /*
    int suma = 0;
    int liczba = 0;
    cin >> suma;
    cin >> liczba;
    double srednia = static_cast<double>(suma) / liczba;
    cout << suma / liczba << "  " << srednia;
    */
    //zad5
    /*
    int suma = 0;
    int liczba = 0;
    cin >> suma;
    cin >> liczba;
    double procent = 0;
    if (liczba != 0) {
        procent = (static_cast<double>(suma) / liczba)*100;
        cout << procent << "%";
    }
    else
    {
        cout << "error";
    }
    */
    //zad 6
    /*
    string tekst;
    getline(cin, tekst);
    cout << tekst.length();
    */
    //zad7
    /*
    string tekst;
    getline(cin, tekst);
    int beg = 0;
    int end = 0;
    cin >> beg;
    cin >> end;
    string fin = tekst.substr(beg - 1, end - beg);
    cout << fin;
    */
    //zad 8
}

