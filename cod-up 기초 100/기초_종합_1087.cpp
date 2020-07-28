#include<iostream>>
using namespace std;

int main() {
	int n, s=0;
	cin >> n;
	for (int i = 1; ; i++) {
		s += i;
		if (s >= n) {
			break;
		}
	}
	cout << s << endl;
}
