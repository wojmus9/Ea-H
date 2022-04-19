#include <iostream>
#include <cmath>
using namespace std;
// najwiêkszy wspolny dzielnik

int LICZ(int n) {
   int dana = 2;
 for (int i = 0; i <= n; i++)
   for (int j = 1; j <= i; j++)
        for (int k = 1; k <= 3; k++)
                          dana += 1;
   return dana;
}


int main ()
{ system("chcp 1250");
int n;
cout << " podaj n; ";
cin >> n;
LICZ(n);
cout<< dana;
return 0;
}


