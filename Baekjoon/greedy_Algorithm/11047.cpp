#include<iostream>>
#include<vector>
#include<algorithm>
using namespace std;


//문제 풀이의 핵심 큰동전을 많이 사용하면 최적의 답이나온다

int cmp(int a, int b) {
	return a > b;
}

int main() {
	int n, k, ans = 0;
	//n은 동전의 종류, k는 가격
	cin >> n >> k;
	vector<int> v(n); // 백터 이용하여 배열에 오름차순으로 동전의 수 저장

	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	//내림차순 정렬
	sort(v.begin(), v.end(), cmp);

	
	for (int i = 0; i < n; i++) {
		while (k - v[i] >= 0) { //배열의 뒷부분부터 빼서(큰수부터빼기)
			ans++;
			k -= v[i];
		}
	}
	cout << ans << endl;
}
