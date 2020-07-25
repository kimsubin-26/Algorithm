#include <iostream>
using namespace std;


int main()
{
	
	/*
	조건
	두 정수 a, b가 공백을 두고 입력된다.
	- 2147483648 <= a, b <= +2147483647
	
	*/
	long long a, b;
	cin >> a >> b;
	if (a!=b) {
		cout << 1;
	}
	else {
		cout << 0;
	}
	return 0;
}
