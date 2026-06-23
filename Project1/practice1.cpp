#include <iostream>
using namespace std;

int main() {
	int num;
	cout << "정수를 입력하시오: ";
	cin >> num;

	for (int i = 1; i <= 9; i++) {
		cout << num << " x " << i << " = " << num * i << endl;
	}
	return 0;
}