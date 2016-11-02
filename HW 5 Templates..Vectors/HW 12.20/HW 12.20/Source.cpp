////
// Silvia Moreno
// CS-172
// HW 12.20 "Shuffle Vector"
// 10/31/16
////

#include <iostream>
#include <vector> //allows the vector to work
#include <ctime>//allows the generator to work
#include <cstdlib>
using  namespace std;
//template of T 
template <typename T>
void shuffle(vector <T>& v) {

	for (int i = 0; i < v.size(); i++) {
		srand(time(0));
		//shuffles it randomly
		int index = rand() % v.size();
		//index is initialiezed to be random
		//same as reversing process 
		T temp = v[index];
		v[index] = v[i];
		v[i] = temp;
	}
}

int main() {
	
	vector<int> v; 
	//the numbers that will be pushed back and be outputed in the program
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	//calls the function to main 
	shuffle(v);
	//for every i that is before the size of v, it will output the vector number
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}
}