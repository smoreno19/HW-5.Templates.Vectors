////
// SIlvia Moreno
// CS-172
// HW 12.2 " Linear Search"
// 10/30/16
////

#include <iostream>
#include <string> //allows the string to work
using namespace std;

//template named T
template <typename T> 
int linearSearch( T list[],  T key, int arraySize)
{
	for (int i = 0; i < arraySize; i++) 
	{ //i is less than the arraySize
		if (key == list[i])
			return i; //returns the number
	}
	return -1;
}

int main() {
	//array for the int list
	int list[] = { 1,4,4,2,5,-3,6,2 }; 
	//calls the function and implements what variables to use from the array
	//will return a 1
	cout << linearSearch(list, 4, 8) << endl;
	//return a -1
	cout <<  linearSearch(list, -4, 8)<< endl;

	//array for the double list
	double list2[] = { -1,.5,2.3,-5 };
	// calls the function to implement what variables to use for the array
	//returns a 2
	cout << linearSearch(list2, 2.3, 4) << endl;
	//array for the string list
	string list3[] = { "hi", "bye", "sigh", "chiao"};
	string a = "bye";
	cout << linearSearch(list3, a, 4) << endl;

	return 0;
}