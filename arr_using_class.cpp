#include<iostream>

using namespace std;

class Array {
private:
	int* A;
	int size;
	int length;//privating prevents direct misuse, now now one can do -> a.length = 1000;

public:
	Array(int s = 10) {
		size = s;
		length = 0;
		A = new int[size]; //dynamic memory allocation for array
	}
	void show_data(Array a) {
	}

	~Array() {
		delete[] A;        // deletes allocated memory when the use is done
	};
};

int main() {
	Array a;
	Array b(5);
}
