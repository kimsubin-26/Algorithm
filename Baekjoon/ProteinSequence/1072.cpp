#include<iostream>
using namespace std;

//이분탐색 이용

/*
99%승률에서 몇번을 이겨도 100%는 될수없다.
승률 z가 99이상이면 -1출력
확률 공식(y/x)*100
승률 z+1이 되기위한 추가판수를 k라고하면
z+1 = (y+k/x+k)*100
k=((z+1)*x-100*y)/(99-z)라는 식으로 수학공식으로 풀수있다.
*/

#define MAX 1000000000;

int main(void) {
	long long x, y;
	cin >> x >> y;

	//승률
	int z = (y*100)/x;

	//99이상 못감
	if (z >= 99) {
		cout << -1 << endl;
		return 0;
	}

	int low = 0, high = MAX;
	int result = -1;

	while (low <= high) {
		int m = (low + high) / 2;
		//이분탐색
		int temp = ((y + m)*100) / (x + m);
		if (z >= temp) {
			result = m + 1; //=이 포함되어있기에 +1결과를 해줘야한다
			low = m + 1;
		}
		else {
			high = m- 1;
		}
	}
	cout << result << endl;
	return 0;
}
