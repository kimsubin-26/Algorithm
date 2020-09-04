#include <iostream> 
using namespace std;

int cnt = 0; // 이동 횟수에 이용.

void Hanoi(int n, char from, char temp, char to)
// n : 원반개수, from : 원래 위치, temp : 임시 장소, to :목적지
//solve 부분
{
	if (n == 1)//원반개수가 1개일때
	{
		printf("디스크 1개를 %c 에서 %c으로 옮긴다.\n", from, to);
		cnt++;//이동횟수 증가
	}
	else//원반개수가 두개이상일때
	{
		Hanoi(n - 1, from, to, temp);
		printf("디스크 %d를 %c으로 옮긴다.\n", n, from, to);
		Hanoi(n - 1, temp, from, to);
		cnt++;
	}


}


void main()
{
	int n; //원반의 수

	cout << "원반의 갯수를 입력하세요 : ";
	cin >> n;

	Hanoi(n, 'A', 'B', 'C');    // n개의 원반을 'A'에서 'C'로 이동

	cout << "전체 원반 이동 수(원반수 : " << n << ") = " << cnt << endl;
}
