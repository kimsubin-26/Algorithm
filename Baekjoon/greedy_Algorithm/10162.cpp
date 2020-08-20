#include<iostream>
using namespace std;

//전자레인지
/*
버튼 3개 A,B,C를 이용하여 T초를 최소한의 버튼을 이용하여 맞추는거
A=5분, B=1분 C=10초
T를 버튼으로 못맞추면 -1출력
핵심은 최소이기때문에 A를 이용하여 최대한 많은 T-A를 해줘야한다
*/


int T, A, B, C;
int main() {
	cin >> T;
	if (T % 10 == 0) {
		while (T >= 300) {//A버튼 이용 5분=300초
			A += T / 300;
			T %= 300;
		}
		while (T >= 60) {//B버튼 이용 1분=60초
			B += T / 60;
			T %= 60;
		}
		while (T >= 10) {//C버튼 이용
			C += T / 10;
			T %= 10;
		}
		cout << A << ' ' << B << ' ' << C;
	}
	else {
		cout << "-1";
	}
}
