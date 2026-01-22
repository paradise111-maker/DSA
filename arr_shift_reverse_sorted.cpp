void reverse_array() {
	int i = 0; int j = length - 1;
	while (i < j) {
		int temp = A[i];
		A[i] = A[j];
		A[j] = temp;
		i++; j--;
	}
}

void Left_shift() {
	for (int i = 0; i < length - 1; i++) {
		A[i] = A[i + 1];
	}
}

void circular_shift() {
	int temp = A[0];
	for (int i = 0; i < length - 1; i++) {
		A[i] = A[i + 1];
	}
	A[length-1] = temp;
}

int is_sorted() {
	for (int i = 0; i < length - 1; i++) {
		if (A[i + 1] < A[i]) { return -1; }
	}
	return 0;
}
