#include<iostream>>
using namespace std;

int main() {
	int n,t;
	cin >> n;
	int array[10000];
	for (int i = 0; i < n; i++) {
		cin >> t;
		array[i] = t;
	}
	for (int j = n-1; j >= 0; j--) {
		cout << array[j] << " ";
	}
}
