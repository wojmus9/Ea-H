#include<iostream>
#include<cstdlib>
#include<ctime>
#include<iomanip> 
#include<cmath>
using namespace std;
double horner(double *tab, int st, double x)
{
    if (st == 0)
        return tab[0];
    return horner(tab, st - 1, x) * x + tab[st];
}

double standard(double tab[], int st, double x)
{
    double wynik = 0;
    double p = 1;

    for (int i = 0; i <= st; i++)
    {
        for (int k = 0; k < st - i; k++)
        {
            p = p * x;
        }
        wynik = wynik + tab[i] * p;
        p = 1;
    }
    return wynik;
}
int main()
{
    cout.precision(50);
    srand(time(NULL));
    int st=0;
    double arg=0;
    cout << "podaj stopien wielomianu: ";
    cin >> st;
    double* wspolczynniki = new double[st];
    cout << "podaj argument z przedzialu od 0 - 1:";
    cin >> arg;

    while (arg < 0 || arg > 1)
    {
        cout << "argument wykracza poza zakres, podaj jeszcze raz:";
        cin >> arg;
    }
    for (int i = 0; i < st; i++)
    {
        wspolczynniki[i] = (double)rand() / RAND_MAX;
    }
    
   
    cout << "horner   :" << horner(wspolczynniki, st, arg) << endl;
    cout << "standard :" << standard(wspolczynniki, st, arg) << endl;
    cout << "roznica:"<< horner(wspolczynniki, st, arg)- standard(wspolczynniki, st, arg);
    return 0;
}
