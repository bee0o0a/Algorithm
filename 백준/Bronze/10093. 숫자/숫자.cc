#include <iostream>

using namespace std;

int main() {
	long long a, b;
	cin >> a >> b;

	if (a > b) {
		long long temp = a;
		a = b;
		b = temp;
	}

	b = b - 1;

	long size = b - a > 0 ? b - a : 0;

	cout << size << endl;

	for (long i = a + 1; i <= b; i++) {
		cout << i;
		if (i < b) cout << " ";
	}

	return 0;
}