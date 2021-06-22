
//5/21/2019
//This program is intended to gather the first, middle, and last name of a user and arrange them in the order of last, first, and middle. 

#include <iomanip>
#include <cstring>
#include <iostream>
using namespace std;

int main()
{



	cout << "Hello, welcome to the Name Arranger." << endl;					//Intro message
	cout << "Please enter a first, middle, and last name below. " << endl;

	const int Name_length = 32;	//Array Size																		
	char first_name[Name_length], middle_name[Name_length], last_name[Name_length]; //Variables: Gathers the First name of the user (first_name), Middle name(middle_name), and Last name(last_name). 

	cout << "Please enter the first name: ";
	cin.getline(first_name, Name_length - 1); //Gathers the first name of the user

	cout << "Please enter a middle name: ";
	cin.getline(middle_name, Name_length - 1);

	cout << "Please enter a last name: ";
	cin.getline(last_name, Name_length - 1);

	cout << "Okay, now the names will be arranged beggining with Last, First, and finally Middle." << endl;

	char Full_name[100]; //compiles the names together, 100 used to combine all three names and  to give it ample room

	strcpy_s(Full_name, last_name);
	strcat_s(Full_name, ", ");      //Used strcat_s(Full_name, ", ") as a way to add a space to a program. Since with strcat you are tacking on information,
	strcat_s(Full_name, first_name);//you can tack on a space with a comma to seperate the names.
	strcat_s(Full_name, " ");
	strcat_s(Full_name, middle_name);
	cout << Full_name << endl;						//Final product. User is left with Last, First and Middle name. 


	system("pause");												//Pauses the program for the user to look at the data
	return 0;

}