#include <iostream>
#include <string>

using namespace std;

int tenNumber[10];

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int A, B, C, total;

	cin >> A >> B >> C;
	total = A * B * C;

	std::string strNum = std::to_string(total);

	for (char digit : strNum) {
		int num = digit - '0';
		tenNumber[num]++;
	}

	for(int i=0; i<10; i++) {
		cout << tenNumber[i] << '\n';
	}


	return 0;
}