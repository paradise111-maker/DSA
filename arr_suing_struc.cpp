#include <iostream>
#include <string>

using namespace std;

struct arr {
	int* A;
	int size; //Overall space of array
	int length;  //No. of elements in Array
};

int main() {
	arr a;
	a.size = 5;
	a.length = 0;

	a.A = new int[a.size];
	a.A[0] = 1;
	a.A[1] = 2;
	a.A[2] = 3;
	a.A[3] = 4;
	a.A[4] = 5;

	for (int i = 0; i < a.size; i++) {
		cout << a.A[i]<<endl;
	}
	return 0;
}
