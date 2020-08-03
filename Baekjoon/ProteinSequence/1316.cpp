#include<iostream>
#include<string>
using namespace std;

bool wCheck(string str) {
	//알파벳 개수만큼 배열 만들기
	bool alp[26] = { false };

	for (int i = 0; i < str.length(); i++) {
		if (alp[str[i] - 'a']) {
			return false; //트루면 이미 있는것임으로 false 바꿔줌
		}
		else {//처음오는 알파벳이면 체크
			char tmp = str[i];
			alp[str[i] - 'a'] = true;

			while (1) {
				if (tmp != str[++i]) { //현재 알파벳(tmp)와 다른 알파벳이 올때까지 돌립니다.

					i--;
					break;
				}
			}
		}
	}
	return true;
}

int main(void) {

	int n;
	cin >> n; //단어 입력

	int cnt = 0;

	for (int i = 0; i < n; i++) {
		string str;

		cin >> str;

		if (wCheck(str)) {
			cnt++;
		}
	}
	cout << cnt << endl;

	return 0;
}
