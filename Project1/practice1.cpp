#include <iostream>
using namespace std;

int main() {
	string name;
	string age;
	cout << "이름을 입력하세요: ";
	cin >> name;
	cout << "안녕하세요, " << name << " 님!" << endl;
	cout << "나이를 입력하세요: ";
	cin >> age;
	cout << "당신의 나이는 " << age << "살이군요!" << endl;

	return 0;
}