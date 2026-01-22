void is_armstrong(int a) {
	int orig = a;
	int check = 0;
	while (a != 0) {
		int last = a % 10;
		check = check + last * last * last;
		a = a / 10;
	}
	if (check == orig) cout<<"Yes! Armstrong\n";
	else cout<<"Nope, not an armstrong number\n";
}

int sum_without_plus(int a, int b) {
	while (b != 0) {
		int carry = a & b;
		a = a ^ b;
		b = carry << 1;
	}
	return a;
}

int sum_to_n(int a) {
	int sum = (a*(a + 1)) / 2; // for(int i= 0; i<+n; i++) sum = sum +i;
	return sum;
}

int factorial(int a) {
	int res =1;
	for (int i = 1; i <= a; i++) {
		res = res * i;
	}
	return res;
}

int sum_to_n2(int a) {
	int sum = 0;
	for (int i = 0; i <= a; i++) {
		sum = sum + i * i;
	}
	return sum;
}

void HCF(int x, int y) {
	int i = 1;
	int gcd = 1;
	for (i = 1; i <= min(x, y); i++) {
		if (x % i == 0 && y % i == 0) gcd = i;
	}

	int lcm = (x * y) / gcd;
	cout << "LCM is: " << lcm << "\nHCF is: " << gcd<<endl;

}
