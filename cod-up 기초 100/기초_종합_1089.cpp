#include<iostream>>
using namespace std;

int main() {
	int a,d,n; //a=시작값, d=등차값, n=몇번째인지를 나타내는 수
	cin >>a>>d>> n;
	for (int i = 1; i < n; i++) {
		a += d;
	}
	cout << a;
}
