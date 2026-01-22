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

	Array(const Array& other) {   //Use of copy constructor for implementing deep copy (ALSO USED RULE OF 3 in this class)
		size = other.size;
		length = other.length;
		A = new int[size];
		for (int i = 0; i < length; i++) {
			A[i] = other.A[i];
		}
	}

	Array& operator=(const Array& other) {    //Use of Assignment operator
		if (this == &other)
			return *this;

		delete[] A;   // free existing memory

		size = other.size;
		length = other.length;
		A = new int[size];

		for (int i = 0; i < length; i++)
			A[i] = other.A[i];

		return *this;
	}

	void display() {
		for (int i = 0; i < size; i++) {    // when you use i<size -> it'll print garbage values and 
			cout << A[i]<<"\t";             // when you use i<length -> it will print only valid elements
		}
	}

	void append(int value) {
		if (length == size) {
			cout << "Array Full";
			return;
		}
		A[length] = value;
		length++;
	}

	void insert(int value, int index) {
		if (index < 0 || index>length) cout << "Invalid Index\n";
		for (int i = length; i > index; i--) 
			A[i] = A[i - 1];
			A[index] = value;
			length++;
		
	}

	int LSearch(int key) const {
		for (int i = 0; i < length; i++) {
			if (key == A[i]) return i;
		}
		return -1;
	}

	~Array() {
		delete[] A;        // deletes allocated memory when the use is done
	}
};

int main() {
	Array a;
	Array b(5);
	b.append(2);
	/*b.insert(3, 1);
	b.display();*/
	int index = b.LSearch(3);
	cout << index;

}
