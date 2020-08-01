#include<iostream>>
#include<algorithm>
using namespace std;

/*
어떤 양의 정수 X의 각 자리가 등차수열을 이룬다면, 그 수를 한수라고 한다. 
등차수열은 연속된 두 개의 수의 차이가 일정한 수열을 말한다. 
N이 주어졌을 때, 1보다 크거나 같고, N보다 작거나 같은 한수의 개수를 출력하는 프로그램을 작성하시오. 
*/

//한 수의 개수를 구하는 함수
int d(int n) {
	int a = 0, b = 0, c = 0;
	int score = 0;

	for (int i = 0; i < n; i++) {

		//a=1의 자리수 b=10의 자리수, c=100의 자리수
		a = (i + 1) % 10;
		b = ((i + 1) / 10 )% 10;
		c = (i + 1) / 100;

		if ((c == 0) || (c - b) == (b - a)) {
			score++;
		}
	}
	return score;
}

int main() {
	int N;

	cin >> N;
	cout << d(N);

	return 0;
}
