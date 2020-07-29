#include<iostream>>
using namespace std;

int main() {
	long long a,m,d,n; //a=시작값,m = 곱할값, d= +값, n=몇번째인지를 나타내는 수
	cin >>a>>m>>d>> n;
	for (int i = 1; i < n; i++) {
		a = a * m + d;
	}
	cout << a;
}
