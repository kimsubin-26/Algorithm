#include<iostream>>
using namespace std;

/*
미로 상자의 구조가 0(갈 수 있는 곳), 1(벽 또는 장애물)로 주어지고,
먹이가 2로 주어질 때, 성실한 개미의 이동 경로를 예상해보자.
*/

int main() {
	int arr[11][11];
	//미로 만들어줌
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			cin >> arr[i][j];
		}
	}

	int x = 2, y = 2; //출발점(2,2) 표시

	while (arr[x][y] != 2) { //현재 위치가 2가 아닐때도 길찾는 함수
		if (arr[x][y + 1] == 0) {
			arr[x][y + 1] = 9;
			y += 1;
		}
		else if (arr[x][y + 1] == 2) {//오른쪽 이동해서 나온칸 2일경우 그곳에 먹이가 있으면 이동 멈춰야해서 9로 바꾸고 브레이크
			arr[x][y + 1] = 9;
			y += 1;
			break;
		}
		else if (arr[x + 1][y] == 0) {//오른쪽 이동 못하면 밑으로 이동하여 길있으면 아래로 이동해주기
			arr[x + 1][y] = 9;
			x += 1;
		}
		else if (arr[x + 1][y] == 2) {//오른쪽 이동못하는데 아래 길이있고 먹이도 있으면 먹고 멈추기
			arr[x + 1][y] = 9;
			x += 1;
			break;
		}
		else {
			break;
		}


	}
	arr[2][2] = 9; //처음출발지점도 지나왔기에 9로바꿔줌

	//지나왔던 미로 출력
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}



}
