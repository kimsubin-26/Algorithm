#include<iostream>>
#include<vector>
#include<algorithm>
using namespace std;


int main() {
	//접근방식
	//사람 수를 변수 n으로 입력받고 인출하는데 걸리는 시간 p[1001]에 입력
	//사람수는 n명이고 각각 p[i]={3,1,4,3,2}의 시간이 걸린다.
	//앞사람 시간이 누적됨으로 p[i]를 오름차순으로 정렬해주면 짧은시간이 나온다.

	int n;
	cin >> n;
	/*
	vector 는 자동으로 메모리가 할당되는 배열을 뜻한다.
	ex) vector<자료형> 함수이름{..};
	백터에서는 배열의 크기를 정하지않는다. 가변적으로 변하는 배열이다.

	sort 알고리즘
	ex) sort(초기값, 끝값, 정렬방법함수)
	
	*/
	vector<int> time(n);

	for (int i = 0; i < n; i++) {
		cin >> time[i];
	}
	//vector를 써서 .begin(), .end()형식 사용
	sort(time.begin(), time.end());

	int sum = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <=i; j++) {
			sum += time[j];

		}
	}

	cout << sum;

	return 0;


}
