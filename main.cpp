/////////////////
//Przeliczanie jednostek odleglosci
/////////////////
/*
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float metry , wynik, cale,stopy,jardy,mile;

    cout << "Przeliczam odleglosc podana od 0 w metrach na: cale , stopy , jardy ,mile: " << endl;
    cout << "Podaj odleglosc w metrach: " << flush;
    cin >> metry;

    cale = metry*39.37007;
    stopy = metry*3.28083;
    jardy = metry*1.09361;
    mile = metry*0.00062;

if(metry<0)
{
    cout << "Podales liczbe ujemna , nie oblicze tego przykladu.";
}
else
{
    cout << "Metry  : " << metry << "\n";
    cout << "Cale   : " << setprecision(5) << cale << "\n";
    cout << "Stopy  : " << setprecision(5) <<stopy << "\n";
    cout << "Jardy  : " << setprecision(5) <<jardy << "\n";
    cout << "Mile   : " << setprecision(5) <<mile << "\n";

}

    cout << "Nacisnij enter aby zakonczyc..." << endl;
    cin.ignore();
    cin.get();


        return 0;
}
*/
///////////////////////////////////////////
// Tabela przelicznikowa odległośc
///////////////////////////////////////////

/*
#include <iostream>
using namespace std;
int metry=5;
float wynik[25],cale ,stopy,jardy,mile;
int main()
{
    cout << "Przeliczam odleglosc w metrach na: cale , stopy , jardy ,mile: " << endl;

    cout << "Metry: \t \t" << "Cale: \t \t" << "Stopy: \t \t"<< "Jardy: \t \t" << "Mile_Ladowe: \t \t" << endl;
    for(int i = 5; i < 25; i++)
    {
    wynik[i]=metry;
    cale = metry*39.37007;
    stopy = metry*3.28083;
    jardy = metry*1.09361;
    mile = metry*0.00062;


    cout << wynik[i] <<"\t \t"<< cale<<"\t \t"<< stopy <<"\t \t"<< jardy <<"\t \t"<< mile<<"\t \t" <<endl;
    metry=metry + 5;
    }

    return 0;
}
*/

///////////////////////////////////////////
//Kalkulator dwuargumentowy
///////////////////////////////////////////
/*
#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;
int dodawanie(int a, int b)
{
    return a+b;
}int odejmowanie(int a, int b)
{
    return a-b;
}int mnozenie(int a, int b)
{
    return a*b;
}int dzielenie(int a, int b)
{
    return a/b;
}

int main()
{
    char znak;
    int a, b ;

    cout << "Maly kalkulator... " << endl;
    cout << "Podaj pierwsza liczbe: " << flush;
    cin >> a;
    cout << "Co chcesz wykonac: \n '+' - Dodawanie \n '-' - Odejmowanie \n '*' - Mnozenie \n '/' - Dzielenie \n" << flush;
    cin >> znak;
    cout << "Podaj druga liczbe: " << flush;
    cin >> b;


    switch(znak)
    {
    case '+' :
        cout<<"Wynik dodawanie to : " << dodawanie(a, b)<<"\n";
        break;
    case '-' :
        cout<<"Wynik odejmowania to : " <<odejmowanie(a, b)<<"\n";
        break;
    case '*' :
        cout<<"Wynik mnozenia to : " <<mnozenie(a, b)<<"\n";
        break;
    case '/' :
        if(a == 0 || b == 0){
            cout << "Nie dziel przez zero \n";
        }
        else
            {
        cout<<"Wynik dzielenia to : " <<dzielenie(a,b )<<"\n";
            }
        break;
    default:
        cout << "nie poprawny znak \n";
    }

    cout <<"Nacisnij enter aby zakonczyc... " << endl;
    cin.ignore();
    cin.get();


        return 0;

}
*/
/////////////////////////////////////////////////////
// Gierka w „za dużo, za mało"
///////////////////////////////////////////////////
/*
#include <iostream>
#include <cstdlib>
#include <time.h>
#include <stdio.h>

using namespace std;
int liczba , strzal , ile_prob = 0;

int main()
{
    cout << "Witaj w grze \"Za duzo za malo\"" << endl;

    srand(time(NULL));
    liczba = rand()%100+1;

    while(strzal != liczba)
    {
        ile_prob++;
        cout << "Odgadnij wylosowana liczbe <od 1 do 100> \n";
        cin >> strzal;
        if(strzal == liczba)
        {
            cout << "Udalo sie wygrywasz \n";
            cout << "Wygrywasz w: " << ile_prob <<" probie"<<endl;
        }
        if(strzal < liczba)
        {
            cout << "Za malo \n";
        }
        if(strzal > liczba)
        {
            cout << "Za duzo \n";
        }
    }

    cout << "Nacisnij enter aby zakonczyc...";
    cin.ignore();
    cin.get();


    return EXIT_SUCCESS;
}
*/
////////////////////////////////////////////////
