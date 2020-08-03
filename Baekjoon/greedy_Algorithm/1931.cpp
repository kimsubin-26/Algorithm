#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int N;
int cB[100000], cE[100000]; //회의 시작시간, 끝나는 시간

int sc(void) {
	

	//먼저 시작하는 회의 선택후 겹치는 회의 제외
	//그다음 순서 골라서 또 겹치는 회의 제외 반복

	//일찍 끝나는 순서대로 정렬
	vector<pair<int, int> > order;

	//pair는 first, second 두개 변수 저장 가능한 struct
	//용도 이차원 배열의 인덱스등

	for (int i = 0; i < N; i++) {
		order.push_back(make_pair(cE[i], cB[i]));
		//v.push_back(ex) v의 끝에 ex를 추가
	}

	sort(order.begin(), order.end());

	//fast -> 다음 회의가 열리는 가장 빠른시간, select 여태까지 선택된 회의수
	int fast = 0, select = 0;
	for (int i = 0; i < (int)order.size(); i++) {
		int meetingBegin = order[i].second, meetingEnd = order[i].first;
		if (fast <= meetingBegin) {
			//fast를 마지막으로 회의가 끝난 시간 이후 갱신
			fast = meetingEnd;
			select++;

		}
	}
	return select;
}

int main(void) {
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> cB[i] >> cE[i];

	}

	cout << sc() << endl;
	return 0;
}
