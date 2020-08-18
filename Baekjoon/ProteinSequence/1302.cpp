#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

//알파벳 오름차순으로 정렬한뒤 탐색을 통해 빈도가 제일 높은걸 출력!

int main(void) {
	int n;
	cin >> n;

	vector<string> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	int mNum = 0, num = 0;
	string temp = v[0];
	string r;

	sort(v.begin(), v.end());//정렬

	for (int i = 0; i < n; i++) {
		if (v[i] == temp) {
			num++;
		}
		else {
			if (mNum < num) {
				mNum = num;
				r = temp;
			}
			temp = v[i];
			num = 1;
		}
	}
	if (mNum < num) {
		r = temp;//첫번째가답 
	}
	cout << r << endl;
	return 0;
}
