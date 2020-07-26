#include <iostream>
using namespace std;

//정수 1개가 입력되었을 때, 음(minus)/양(plus)과 짝(even)/홀(odd)을 출력해보자.
int main()
{
	int a;
	cin >> a;
	if (a > 0) {
		cout << "plus" << endl;
		if (a % 2 == 0) {
			cout << "even" << endl;
		}
		else {
			cout << "odd" << endl;
		}
	}
	else {
		cout << "minus" << endl;
		if (a % 2 == 0) {
			cout << "even" << endl;
		}
		else {
			cout << "odd" << endl;
		}
	}
	
	
}
