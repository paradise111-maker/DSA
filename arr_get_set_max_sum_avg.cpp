int Get(int index) {
	if (index > 0 && index < length)
		return A[index];
}

void Set(int index, int value) {
	if (index > 0 && index < length)
		A[index] = value;
}

int max() {
	int max = INT_MIN;
	for (int i = 0; i < length; i++) {
		if (A[i] > max)
			max = A[i];
	}
	return max;
}

int sum() {
	int sum = 0;
	for (int i = 0; i < length; i++) {
		sum = sum + A[i];
	}
	return sum;
}

int average() {
	int sum = 0;
	for (int i = 0; i < length; i++) {
		sum = sum + A[i];
	}
	int average = sum / length;
	return average;
}
