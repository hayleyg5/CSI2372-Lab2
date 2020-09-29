// Lab2.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
using namespace std;

void main(void)
{
    int tab[80];
    int* p;
    int i;
    for (i = 0; i < 80; i++) tab[i] = i * i;
    cout << tab[2] << endl;
    tab[2] = tab[1];
    cout << tab[2] << endl;
    tab[2] = *(tab + 1); 
    cout << tab[2] << endl;
    *(tab + 2) = tab[1];
    cout << *(tab + 2) << endl;
    *(tab + 2) = *(tab + 1);
    cout << *(tab + 2) << endl;
    p = &tab[0];
    p = tab + 1;
    tab[4] = *p;
    cout << tab[4] << endl;

}

