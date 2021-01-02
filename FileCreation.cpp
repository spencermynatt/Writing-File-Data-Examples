#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	
char arr[100];
cout << "Enter your name, age, and gpa" << endl;

cin.getline(arr, 100); //so you can't write more than 1 character


ofstream info; //output stream, so we can write data to text
info.open("grades.txt");
info << arr;  //this will write the data stored
info.close();

cout << " your name, age and grades are...";
ifstream grades("grades.txt");
cout << arr << endl;
	
	
	
	
	
	
	
	
}
