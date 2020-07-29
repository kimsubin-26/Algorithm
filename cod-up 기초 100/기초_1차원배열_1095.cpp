#include<iostream>>
#include<algorithm>
using namespace std;


//출석 번호를 n번 무작위로 불렀을 때, 가장 빠른 번호를 출력해 보자.

int main() {
	
	int n;
	cin >> n;
	int array[10000];
	for (int i = 0; i < n; i++) {
		cin >> array[i];
	}
	cout << *min_element(array, array + n) << endl;
}
