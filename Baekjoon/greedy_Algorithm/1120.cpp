#include<iostream>
#include<string>
#include<algorithm>
using namespace std;



int main() {

	string A, B;//첫번쨰 문자열 A, 두번째 문자열 B
	cin >> A >> B;

	int ans = 50; //A와 B의 문자가 모두 다른 경우

	for (int K = 0; K <= B.length() - A.length(); K++) {
		int cnt = 0;
		for (int i = 0; i<A.length(); i++) {
			if (A[i] != B[i + K])
				cnt++;
		}
		ans = min(ans, cnt);
	}
	cout << ans << endl;
	return 0;
}
