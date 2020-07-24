#include <iostream>
using namespace std;


int main()
{
	
	int a = 10;
	cin >> a;
	cout << (a << 1);
	
}

/*
<------비트단위시프트연산 설명------------>

진수 형태로 저장되어 있는 값들을 왼쪽(<<)이나 오른쪽(>>)으로
지정한 비트 수만큼 밀어주면 2배씩 늘어나거나 반으로 줄어드는데,

왼쪽 비트시프트(<<)가 될 때에는 오른쪽에 0이 주어진 개수만큼 추가되고,

오른쪽 비트시프트(>>)가 될 때에는
왼쪽에 0(0 또는 양의 정수인 경우)이나 1(음의 정수인 경우)이 개수만큼 추가된다.

범위(32비트)를 넘어서 이동되는 비트는 삭제된다.

예시
int a=10;
printf("%d", a<<1); //10을 2배 한 값인 20 이 출력된다.
printf("%d", a>>1); //10을 반으로 나눈 값인 5 가 출력된다.
*/
