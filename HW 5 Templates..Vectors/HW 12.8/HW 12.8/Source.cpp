////
//Silvia Moreno
// CS-172
// HW 12.8 "Implement Vector Class"
// 10/31/16
////

#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class MyVector  {
private:
	int vectorSize;
	T elements[1000]; //there are 1000 elements
public:
	MyVector() {
		//default vector size
		vectorSize = 0;
	}
	void pushback(T value) {
		//appends the elements in the vector
		elements[vectorSize++] = value;
	}
	void popBack() {
		//returns the elements that are before the vector size
		return elements[-- vectorSize];
	}
	unsigned int size() {
		//returns the vectorsize
		return vectorSize;
	}
	T const at(int index) {
		//returns the elements in a specific spot of the vector
		return elements[index];
	}
	bool const empty() {
		//returns the vector size of 0
		return (vectorSize == 0);
	}
	void clear() {
		//the vector size is 0 if it is clear
		vectorSize = 0;
	}
	void swap(MyVector v2) {
		//swaps the contents of the vector 
		T temp[1000];
		int tempSize = v2.size();
		for (int i = 0; i < v2.size(); i++)
		{
			temp[i] = v2.at(i);
		}
		v2.clear();
			for (int i = 0; i < size(); i++)
			{
				v2.pushback(at(i));
			}
		clear();
		for (int i = 0; i < tempSize; i++)
		{ //goes back until the tempsize goes empty
			pushback(temp[i]);
		}
	}
};
int main() {
	//calls the class for an int
	MyVector<int> v1;
	//pushes v1 back 1
	v1.pushback(1);

	MyVector<int> v2;
	v2.pushback(5);
	//calls swap function to swap v1 with v2
	v1.swap(v2);

	for (int i = 0; i < v1.size(); i++)
		cout << v1.at(i) << " ";
	//locates what position v1 is 
	return 0;
 }

