#include "myFile2.h"
/********************************************************************************/
/* Function menu which returns a character corresponding to the user's choice */
/********************************************************************************/
char menu(void)
{
	char choice;
	cout << endl << endl << "\t\tMenu" << endl << endl;
	cout << "1) Strings display." << endl;
	cout << "2) Replacement of a string by an other one" << endl;
	cout << "3) Sorting strings" << endl;
	cout << "4) Exit of the program" << endl << endl;
	cout << "Your choice :";
	cin >> choice;
	return(choice);
}
/********************************************************************************/
/*The replace function that replaces one string by another. It takes as arguments an array of pointers
on the strings "tab", the number of elements of this array of pointers "nbre" and the maximum size of
the strings "size" */
/********************************************************************************/
void replace(char* tab[], int const& nbre, int const& size)
{
	int numero; //the string to modify
	cout << endl << "Enter the string number to modify: ";
	cin.ignore(INT_MAX, '\n');
	cin >> numero;
	if (numero >= 0 && numero <= nbre) //check if the number is valid
	{
		cout << "Enter the new string: ";
		cin.ignore(INT_MAX, '\n');
		cin.getline(tab[numero], size, ' ');
	}
	else
	{
		cout << "There is no string with this number" << endl;
	}
}

/********************************************************************************/
/*The display function that displays the inputted strings. It takes as arguments an array of pointers
on the strings "tab", and the number of elements of this array of pointers "nbre" */
/********************************************************************************/
void display(char* tab[], int const& nbre) 
{
	cout << "Strings Display:" << endl;
	for (int i = 0; i < nbre; i++) {
		cout << tab[i] << endl;
	}
}

/********************************************************************************/
/*The sort function that sorts the inputted strings. It takes as arguments an array of pointers
on the strings "tab", and the number of elements of this array of pointers "nbre" */
/********************************************************************************/
void sort(char* tab[], int const& nbre) 
{
	cout << "Sorted Strings:" << endl;

	for (int i = 0; i < nbre; i++) {
		if (strcmp(tab[0], tab[1]) > 0) {
			swap(tab[0], tab[1]);
		}
		if (strcmp(tab[1], tab[2]) > 0) {
			swap(tab[1], tab[2]);
		}
		if (strcmp(tab[2], tab[3]) > 0) {
			swap(tab[2], tab[3]);
		}
		if (strcmp(tab[3], tab[4]) > 0) {
			swap(tab[3], tab[4]);
		}
	}

	for (int i = 0; i < nbre; i++) {
		cout << tab[i] << endl;
	}
}