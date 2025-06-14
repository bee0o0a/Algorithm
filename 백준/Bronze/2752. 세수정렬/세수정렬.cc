#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int data[3];

	for (int i = 0; i < 3; i++) {
		cin >> data[i];
	}

	sort(data, data + 3);

	for (int i = 0; i < 3; i++) {
		cout << data[i] << ' ';
	}

	return 0;
}