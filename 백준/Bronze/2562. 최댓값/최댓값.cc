#include <iostream>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int max = -1;
	int position = -1;
	int target;

	for (int i = 1; i <= 9; i++) {
		cin >> target;

		if (target > max) {
			max = target;
			position = i;
		}
	}

	cout << max << '\n' << position;

	return 0;
}