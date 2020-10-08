// Exercise2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "myFile1.h"

int main() 
{
    int i; 
    int myTab[size_tab] = { 2, 4, 88, 2, 3, 55, 87, 134, 2, 5 }; 


    //printing the original list
    cout << "Display of unsorted array: " << endl;  
    for (i = 0; i < size_tab; i++)
        cout << myTab[i] << endl; 
    
    //making the call to the sorting method
    sort(myTab, size_tab); 

    //printing the sorted list
    cout << "Display of sorted array: " << endl; 
    for (i = 0; i < size_tab; i++)
        cout << myTab[i] << endl; 

} //closes main method


void sort(int *myTab, int size) {

    cout << "entering sort\n"; 

    for (int i = 1; i < size; i++) {
        int key = *(myTab+i);
        int j = i - 1; 

        while (j >= 0 && *(myTab + j) > key) {
            *(myTab + j + 1) = *(myTab + j); 
            j = j - 1; 
        }//closes while loop

        *(myTab + j + 1) = key; 
        
    } //closes for loop

    

} //closes sort method


