#include<iostream>
using namespace std;

//수열문제
//수열의 길이 L, 수열의 합 N

/*
n=(x+1)+....(x+L) 정의
이는 n=Lx+L*(L+1)/2로 정의 가능하다
즉 n-(L*(L+1)/2)식과

수열의 길이가 홀수일때
EX_ L=3 N=15 수열 4 5 6
중간수 N/L=15/3=5

짝수일때
EX_ L=4 N=38 8 9 10 11
중간수*L+L(/2) =N

*/

int main() {

	int N, L;
	int sum = 0;
	cin >> N >> L;


	for (int i = L; i <= 100; i++) {//i는 수열의 길이
		int K, C;
		K = N / i;

		if (i % 2 == 0) {// 수열의 길이가 짝수일 때
			if (N % i != (i / 2)) 
				continue;
			C = K - ((i - 1) / 2);

		}
		else {// 수열의 길이가 홀수일 때

			if (N%i != 0)
				continue;
			C = K - (i / 2);

		}

		if (C >= 0) {

			for (int j = 0; j < i; j++){
				cout << C + j << " ";

			}
			cout << endl;
			return 0;

		}
		else 
			break;

	}

	cout << -1 << endl;
	return 0;

}
