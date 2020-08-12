#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*
서류심사 성적을 오름차순으로 정렬한다. 
면접성적까지 앞의 지원자보다 낮다면 불합격
면접성적이 앞지원자보다 좋으면 합격, 아니면 불합격 이걸반복

ex)
1 2 <- 1은 서류점수 성적 순위, 2는 면접 성적 순위
..
.
이런식?
*/

int main() {
	int n;
	cin >> n;
	while (n--) {
		int t;
		cin >> t;
		vector<pair<int, int>> vp;
		for (int i = 0; i < t; i++) {
			int a, b;
			cin >> a >> b;
			//pair 클래스란.
			//두객체를 하나의 객체로 취급 할 수 있게 묶어주는 클래스
			//stl에서 데이터 쌍표시할때 사용
			/*
			pair<[type1],[type2]>p 사용할 데이터타입 1,2를 넣고 그 타입의 pair클래스를 만들어준다
			p.first -> p의 첫번째 인자를 반환해 준다.
			p.second-> p의 두번째 인자를 반환해준다.
			make_pair(변수1,변수2) -> 변수1,변수2가 들어간 pair를 만들어줌
			*/
			vp.push_back(make_pair(a, b));
		}

		sort(vp.begin(), vp.end());

		int cnt = 1;
		int s = vp[0].second;
		for (int i = 1; i < t; i++) {
			if (s>vp[i].second) {
				cnt++;
				s = vp[i].second;

			}
	
		}
		cout << cnt << endl;
	}

	return 0;
}
