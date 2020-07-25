#include <iostream>
using namespace std;


int main()
{
	
	
	int a,b;
	a = 0 || 1;
	b = 0 || 1;
	cin >> a>>b;
	if (a==1||b==1) {
		cout << 1;
	}
	else {
		cout << 0;
	}
	return 0;
}
