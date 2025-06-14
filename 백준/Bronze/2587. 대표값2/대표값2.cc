#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int data[5];
	int total = 0;
	
	for (int i = 0; i < 5; i++) {
		cin >> data[i];
		total += data[i];
	}

	sort(data, data + 5);

	cout << total / 5 << '\n' << data[2];

	return 0;
}