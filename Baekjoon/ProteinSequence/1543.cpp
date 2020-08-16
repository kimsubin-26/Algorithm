#include<iostream>
#include<string>
using namespace std;

string a;
string b;

int main() {
	getline(cin, a);//cin입력시 엔터도 포함해서 getline으로 받는다
	getline(cin, b);

	//b가 더클경우
	if (a.size() < b.size()) {//검색하려는 단어가 문서보다 큰경우예외처리
		cout << 0 << endl;
	}
	else {
		int sum = 0;
		for (int i = 0; i < a.size() - b.size() + 1; i++) {
			bool check = true;
			for (int j = 0; j < b.size(); j++) {
				check = true;
				if (a[i + j] != b[j]) {
					check = false;
					break;
				}
			}
			if (check) {
				sum++;
				i += b.size() - 1;
				//b의 크기만큼 뛰어넘기
			}

		}
		cout << sum << endl;
	}
	return 0;
}
