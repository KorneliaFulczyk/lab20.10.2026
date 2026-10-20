//nie mam pojecia kim jest mortuusorchis ani dlaczego uczelniany komputer przypisal czesc commitow jemu

#include <iostream>
#include <math.h>
using namespace std;
int main()
/*
{

        float i = 0.0;
        while (i != 5.0) {
            cout << "Wartosc i = " << i << endl;
            i = i + 0.05;

            //if (i > 10)
            //    break;
        }

}
*/

/*
//zadanie 1
{
    int a;
    int b;
    cout << "Podaj liczbe a: \n";
    cin >> a;
    cout << "Podaj liczbe b: \n";
    cin >> b;

    if (a == b)
        cout << "Te liczby sa rowne. \n";

   else if (a < b)
        cout << "Liczba a jest wieksza od liczby b. \n";

    else (a > b)
        cout << "Liczba a jest mniejsza od liczby b. \n";

        return 0;
}
*/

//zadanie 2
/*
{
    int a;
    int b;
    cout << "Podaj liczbe a: \n";
    cin >> a;
    cout << "Podaj liczbe b: \n";
    cin >> b;

    if (a == b) {
    cout << "Te liczby sa rowne. \n";
}
    else {
        if (a < b) {
            cout << "Liczba a jest wieksza od liczby b. \n";
        }
        else {
            if (a > b) {
                cout << "Liczba a jest mniejsza od liczby b. \n";
            }
        }
}
    return 0;
}
*/

//zadanie 3
/*

{
    double r = 0;
    cout << "Podaj wartosc wspolczynnika r: \n";
    cin >> r;

    if (r >= 0.7 && r <= 1.0) {
        cout << "Bardzo silna korelacja dodatnia. \n";
    }

    if (r >= 0.50 && r < 0.7) {
        cout << "Silna korelacja dodatnia. \n";

    }
    if (r >= 0.30 && r < 0.50) {
        cout << "Umiarkowana korelacja dodatnia. \n";

    }
    if (r >= 0.20 && r < 0.30) {
        cout << "Slaba korelacja dodatnia. \n";
    }
    if (r >= 0.0 && r < 0.20) {
        cout << "Brak korelacji. \n";
    }
}
*/

//zadanie 4
/*
{
    double a = 0;
    double b = 0;
    char znak;
	cout << "Podaj wartosc a: \n";
	cin >> a;
    cout << "Podaj wartosc b: \n";
    cin >> b;
    cout << " Jakie dzialanie chcesz wykonac? Podaj +, - ,*, /. \n";
    cin >> znak;

    if (znak == '+') {
        cout << "Wynik dodawania a + b = " << a + b << endl;
    }
    else if (znak == '-') {
        cout << "Wynik odejmowania a - b = " << a - b << endl;
    }
    else if (znak == '*') {
        cout << "Wynik mnozenia a * b = " << a * b << endl;
    }
    else if (znak == '/') {
        if (b != 0) {
            cout << "Wynik dzielenia a / b = " << a / b << endl;
        }
        else {
            cout << "Nie mozna dzielic przez zero! \n";
        }
    }
    else {
        cout << "Niepoprawny znak dzialania! \n";
	}

}

*/
//zadanie 5

/* {  //kod 03_11
    for (int i = 0; ; i++) {
        cout << i;
    }
    return 0;
}

 {
     int i = 0;
     while (true)

    {

         cout << i;
     }
     return 0;
 }
 */

 //zadanie 6 
 /*
 {
     double a = 0;
     double b = 0;
     char znak;
     string odpowiedz;
     if (int i = 0);
     while (true) { //wpisany tutaj while(true)robi ta nieskonczonosc programu
         cout << "Podaj wartosc a: \n";
         cin >> a;
         cout << "Podaj wartosc b: \n";
         cin >> b;
         cout << "Jakie dzialanie chcesz wykonac? Podaj +, - ,*, /. \n";
         cin >> znak;

         cout << "Czy mam zakonczyc dzialanie tego programu? Podaj tak/nie. \n";
         cin >> odpowiedz;
         if (odpowiedz == "tak") {
             cout << "Zatrzymuje program. \n";
             return 0;
         }

         else if (odpowiedz == "nie") {
             cout << "Kontynuuje dzialanie programu. \n";


             if (znak == '+') {
                 cout << "Wynik dodawania a + b = " << a + b << endl;
             }
             else if (znak == '-') {
                 cout << "Wynik odejmowania a - b = " << a - b << endl;
             }
             else if (znak == '*') {
                 cout << "Wynik mnozenia a * b = " << a * b << endl;
             }
             else if (znak == '/') {
                 if (b != 0) {
                     cout << "Wynik dzielenia a / b = " << a / b << endl;
                 }
                 else {
                     cout << "Nie mozna dzielic przez zero! \n";
                 }
             }
             else {
                 cout << "Niepoprawny znak dzialania! \n";
             }
         }
     }
 }
 */

 //zadanie 7
 /*
 {
     int i = 0;
     while (true) {



         if (i == 200) {
             cout << "Koniec programu. \n";
             break;
         }

         if (i % 2 != 0) {
             cout << i << endl;
         }

         i++;
     }
 }
 */

 //zadanie 8 
/*
Zad 8. Napisz program, który sprawdzi czy wprowadzona przez użytkownika naturalna dodatnia liczba n,
posiada co najmniej jeden dzielnik z przedziału [2,
√n]. Oznacza to, że jeśli program znajdzie pierwszy dzielnik
z tego przedziału to wyświetla odpowiedni komunikat i przerywa działanie pętli. Aby wykonać pierwiastkowanie
wykorzystaj gotową funkcje sqrt(), z której można skorzystać po dołączeniu biblioteki math.h.

 {
     int n=2;
     cout << "Podaj liczbe naturalna dodatnia: \n";
     cin >> n;
     for (int i = 2; i <= sqrt(n); i++)
         if (n % i == 0) {
             cout << "Znalazlem! i = " << i;
             break;


         }




}
*/


//zadanie 9
/*
{
    double temp = 0.0;
    cout << "Podaj temperature w stopniach Celsjusza. \n";
    cin >> temp;

    if (temp < 0) {
        cout << "Mroz!!!\n";
    }

    else if (temp >= 0 && temp < 10) {
        cout << "Zimno.\n";
    }

    else if (temp >= 10 && temp < 20) {
        cout << "Umiarkowanie.\n";
    }
    else if (temp >= 20 && temp < 30) {
        cout << "Cieplo.\n";
    }
    else {
        cout << "Goraco. \n";
    }

} */


/*
//zadanie 10
{
int a, b, c;
cout << "Podaj 3 liczby. \n";
cin >> a >> b >> c;

if (a >= b && a >= c) {
    cout << a << " jest najwieksze\n";

}

else if (b >= c && b >= a) {
    cout << b << " jest najwieksze\n";
}
else {
    cout << c << " jest najwieksze\n";
}
}
*/

/*
//zadanie 11
    {
        int rok;
        cout << "Podaj rok\n";
        cin >> rok;
        if (rok % 4 == 0 && rok % 100 != 0 || rok % 400 == 0)
            cout << "przestepny\n";
        else
            cout << "nieprzestepny\n";
    }
    */

    //zadanie 12
    {
        int numer;
        cout << "Menu: \n- 1 - wyswietlenie komunikatu start,\n";
        cout << "- 2 - wyswietlenie komunikatu ustawienia,\n";
        cout << "- 3 - wyswietlenie komunikatu pomoc,\n";
        cout << "- 4 - wyswietlenie komunikatu koniec.\n";
        cin >> numer;

        switch (numer) {
        case 1:
            cout << "start\n";
            break;
        case 2:
            cout << "ustawienia\n";
            break;
        case 3:
            cout << "pomoc\n";
            break;
        case 4:
            cout << "koniec\n";
            break;

        default:
            cout << "blad. wybierz 1-4.\n";
            break;
        }
}