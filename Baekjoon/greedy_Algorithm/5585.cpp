#include<iostream>
using namespace std;



int n;
int coin[] = { 500,100,50,10,5,1 };
int cnt = 0;

int nCoin(void) {

	/*
	1000엔을 냈을때 물건값이 n이면 거스름돈은 1000-n값을 내야합니다.
	동전 배열을 내림차순으로 정렬하여 각 동전을 최대한 많이 사용


	*/

	int total = 1000 - n;

	for (int i = 0; i < 6; i++) {
		//동전 많이 사용
		while (total - coin[i] >= 0) {
			total -= coin[i];
			cnt++;//배열안에 있는 동전 사용되면 증가

			if (total == 0) {//거스를 돈 없으면 탈출
				break;
			}
		}
	}
	return cnt;
}

int main(void) {
	cin >> n;

	cout << nCoin() << endl;
	return 0;
}
