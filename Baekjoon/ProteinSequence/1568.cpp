#include<iostream>
using namespace std;

int n;//새

int main() {

	cin >> n;
	int song = 1;
	int time = 0;
	while (n != 0) {
		if (n < song) {//남은수가 song보다 작으면 1로만들고 다시시작
			song = 1;
		}
		//song할때마다 새 날라감
		n -= song;
		song++;
		//횟수(시간)
		time++;
	}
	cout << time << endl;
	return 0;
}
