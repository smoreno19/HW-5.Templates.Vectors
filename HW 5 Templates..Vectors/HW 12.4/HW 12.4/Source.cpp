////
//Silvia Moreno
// CS-172
// HW 12.4 "is Sorted?"
// 10/30/16
////

#include <iostream>
#include <string>
using namespace std;

template <typename T>
bool isSorted(const T list[], int size) {
	for (int i = 0; i < size - 1; i++)
	{
		if (list[i] > list[i + 1])
		{//if the number is greater than the number after it then it returns false
			return false;
		}
	}	
	//if it does not come out false then it returns true
	return true;
}

int main() {
	//int array list that will be applied to the function
	int arrayList[] = {2,5,3,10};
	//return 0 for false
	cout << isSorted(arrayList, 4);
	//double array list will be applied to the function
	double arrayList2[] = {-2,3.5,4.5,10.5};
	//will return 1 for true
	cout << isSorted(arrayList2,4);
	//string array that will be applied to the function
	string arrayList3[] = {"abc", "def", "ghi", "jklm" };
	//will return 1 for true
	cout << isSorted(arrayList3, 4);
	return 0;
}