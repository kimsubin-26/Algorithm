#include<iostream>
#include<algorithm>
//functional은 함수 개체를 컨테이너의 정렬 기준 및 알고리즘에 사용
#include<functional>
#include<vector>
using namespace std;

int main() {

	/*
	A의 수만 재배치한다고 주어졌다, 
	곱이 작은값이 나올려면 작은값*작은값이지만 B의 값은 움직일수없음으로
	최선은 작은값 * 큰값이다. 결국 A는 오름차순, B는 내림차순으로 정렬하여 각열을 곱하는것을
	sum에 더해주는 걸로 답을 구할 수 있다.
	*/
	int n, tmp, sum = 0;
	vector<int> A, B;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		A.push_back(tmp);
	}
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		B.push_back(tmp);
	}

	sort(A.begin(), A.end()); //오름차순 정렬

	//sort(v.begin(), v.end(), greater<자료형>());은 내림차순 함수이다.

	sort(B.begin(), B.end(), greater<int>()); //내림차순 정렬

	for (int i = 0; i < n; i++) {
		sum += A[i] * B[i];
	}

	cout << sum << endl;

	return 0;
}
