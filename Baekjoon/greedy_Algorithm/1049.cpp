#include<iostream>
#include<algorithm>
using namespace std;

/*브랜드마다 6개 세트의 가격, 낱개의 가격이 주어지고 최소가격으로
구매할 방법을 찾는 문제
중요한건 세트로 사는것보다 낱개의 가격이 저렴할 수 있다는 점을 고려해야한다.
*/

int line_set[100];
int line_single[100];

int main() {
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < m; ++i) {
		cin >> line_set[i] >> line_single[i];
	}

	sort(line_set, line_set + m);
	sort(line_single, line_single + m);

	int cnt = 0;

	if (line_set[0] < line_single[0] * 6) {
		//세트가 저렴할때
		if (n % 6 == 0) {
			int num = n / 6;
			cnt = num * line_set[0];
		}
		else {
			//최대한 세트로사고 남은걸 낱개로구매
			int snum = n % 6; //낱개로 사야하는 기타줄 수

			if (snum*line_single[0] > line_set[0]) {
				//사야할 수 는 초과되지만 세트가 저렴할때
				int num = n / 6 + 1;
				cnt = num * line_set[0];
			}
			else {
				//세트로 사고 나머지 낱개구매
				int num = n / 6;
				cnt = num * line_set[0];
				cnt += snum * line_single[0];
			}
		}
	}
	else {
		//전부 낱개로 사는게 이득
		cnt = line_single[0] * n;
	}
	cout << cnt << endl;
	return 0;
}
