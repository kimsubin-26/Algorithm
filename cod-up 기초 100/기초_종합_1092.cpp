#include<iostream>>
using namespace std;

int main() {
	int day = 1;
	int a, b, c;
	cin >> a >> b >> c;
	while (true) {
		if (day%a == 0 && day%b == 0 && day%c == 0) {
			cout << day;
			break;
		}
		else {
			day += 1;
		}
	}
}
