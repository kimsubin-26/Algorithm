#include<iostream>
#include<string>
using namespace std;


//백트래킹
// 하나의 숫자를 구하기위해서는 주어진 길이(n+1) 만큼 재귀함수 호출해야함
//컴파일 에러가 발생하는데....이유가 ambiguous인데 보니까 namespace std 안에 max가 있어서 그런다고한다..
//해결법은 max를 maxx로 써주는것

int n;
char arr[9];
bool c[10];

string mn, mx;

//확인
bool check(int i, int j, char k) {
	if (k == '<') {
		return i < j;

	}

	if (k == '>') {
		return i > j;
	}
	return true;
}

//해결
void solve(int cnt, string s) {
	if (cnt == n + 1) {//함수 종료 조건 => 숫자개수(길이)==n+1
		if (!mn.size()) {
			mn = s;
		}
		else {
			mx = s;
		}
		return;
	}
	for (int i = 0; i < 10; i++) {
		if (c[i]) {
			continue;
		}
		if (cnt == 0 || check(s[cnt - 1], i + '0', arr[cnt - 1])) {
			c[i] = true;
			solve(cnt + 1, s + to_string(i));
			c[i] = false;
		}
	}
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	solve(0, "");
	cout << mx << endl;
	cout << mn << endl;
	return 0;
}
