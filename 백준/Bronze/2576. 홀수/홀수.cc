#include <iostream>

using namespace std;

int total, input;
int minnum = 100;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	for (int i = 1; i <= 7; i++) {
		cin >> input;

		if (input % 2 == 1) {
			total += input;

			if (minnum > input) {
				minnum = input;
			}
		}
	}

	if (total == 0) {
		cout << -1;
	}
	else {
		cout << total << '\n' << minnum;
	}

	return 0;
}