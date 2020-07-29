#include<iostream>>
using namespace std;

/*
바둑판(19 * 19)에 흰 돌(1) 또는 검정 돌(0)이 모두 꽉 채워져 놓여있을 때,
n개의 좌표를 입력받아 십(+)자 뒤집기한 결과를 출력하는 프로그램을 작성해보자.
*/

int main() {
	
	int n, x, y;
	int a[20][20] = {};
	for (int i = 1; i <= 19; i++) {
		for (int j = 1; j <= 19; j++) {
			cin >> a[i][j];
		}
	}
	cin >> n; //좌표의 개수만큼 입력받기

	for (int i = 1; i <= n; i++) { //좌표의 개수만큼
		cin >> x >> y;
		for (int j = 1; j <= 19; j++) { //가로줄 흑,백 바꾸기
			if (a[x][j] == 0) {
				a[x][j] = 1;
			}
			else {
				a[x][j] = 0;
			}
		}
		for (int j = 1; j <= 19; j++) //세로줄 흑,백 바꾸기
		{
			if (a[j][y] == 0) {
				a[j][y] = 1;
			}
			else {
				a[j][y] = 0;
			}
		
		}
		
	}

	for (int i = 1; i <= 19; i++) { //십자 뒤집기 출력
		for (int j = 1; j <= 19; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

}
