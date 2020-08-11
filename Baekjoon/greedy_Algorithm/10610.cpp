#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

//30배수 위해서는 끝자리가 0이여하고 각수의 합이 3의 배수여야한다

//그리고 문제 예제를 보니 두 조건 충족못하면 -1출력하고
//충족한다면 내림차순으로 정렬한다는것을 알수있다.

//내림차순
bool nap(char a, char b) {
	if (a > b) {
		return true;
	}
	return false;
}

int main(void) {
	string n;
	cin >> n;

	long long sum = 0;
	bool z = false;
	for (int i = 0; i < n.size(); i++) {
		sum += (n[i] - '0');
		if (!(n[i] - '0')) {
			z = true;
		}
	}

	//합이 3배수
	if (sum % 3 || !z) {
		cout << -1 << endl;
	}
	else {
		sort(n.begin(), n.end(), nap);
		cout << n << endl;
	}
	return 0;
}
