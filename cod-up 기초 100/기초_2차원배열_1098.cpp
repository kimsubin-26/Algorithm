#include<iostream>>
using namespace std;


//격자판을 채운 막대의 모양을 출력하는 프로그램을 만들어보자.

int main() {
	//h(세로), w(가로), n(막대의 개수, 두번째줄 부터), l(막대의 길이, 세번째줄부터)
	//d(방향, 세번째줄부터 가로=0, 세로=1), x,y(좌표, 세번째줄)
	int h, w, n, l, d, x, y;
	cin >> h >> w;
	cin >> n;
	int array[100][100] = { 0, };

	for (int i = 0; i < n; i++) {
		cin >> l >> d >> x >> y;
		for (int k = 0; k < l; k++) {
			if (d == 0) {//가로일때
				array[x - 1][y - 1 + k] = 1;//y축변환
			}
			else {//세로일때
				array[x - 1 + k][y - 1] = 1;//x축 변환
			}
		}
	}
	for (int q = 0; q < h; q++) {//세로 확인
		for (int z = 0; z < w; z++) {//가로 확인
			cout << array[q][z] << " ";
		}
		cout << endl;
	}
}
