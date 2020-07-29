#include<iostream>>
using namespace std;



//출석 번호를 n번 무작위로 불렀을 때, 각 번호(1 ~ 23)가 불린 횟수를 각각 출력해보자.

int main() {
	int n,t;
	int a[23] = {};
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> t;
		a[t] = a[t] + 1;
	}
	for (int j = 1; j <= 23; j++) {
		cout << a[j] << " ";
	}
}
