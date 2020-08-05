#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*
최소로 들수 있는 중량에 맞춰 로프의 수를 나누는 값이 최대값이 된다
결국 몇개를 사용하건 로프개수* 선택 로프의 최소값이 된다.

*/
int main(void) {
	int N;
	cin >> N;
	
	vector<int> vec(N, 0);
	for (int i = 0; i < N; i++) {
		cin>>vec[i];
	}

	sort(vec.begin(), vec.end()); //밧줄 정렬
	
	int count = N;
	int max_sum = 0;

	for (int i = 0; i < N; i++) {
		if (count*vec[i] > max_sum) {
			max_sum = count * vec[i];
		}
		count--;
	}
	cout << max_sum << endl;

	return 0;
}
