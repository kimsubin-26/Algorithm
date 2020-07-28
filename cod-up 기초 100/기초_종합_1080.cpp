#include<iostream>>
using namespace std;

int main() {
	int a;
	int sum = 0;
	int i = 1;
	cin >> a;
	while (true) {
		sum = sum + i;
		if (sum >= a) {
			cout << i << endl;
			break;
		}
		else {
			i = i + 1;
		}
	}
	
}
