#include <iostream>
using namespace std;

int main() {
	float x, y;
	cout << "키를 입력하세요: ";
	cin >> x;
	cout << "몸무게를 입력하세요: ";
	cin >> y;
	cout << "키(cm): " << x << endl;
	cout << "몸무게(kg): " << y << endl;
	x = x / 100;
	cout << "BMI: " << y / (x*x) << endl;
}