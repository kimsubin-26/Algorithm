#include <iostream>
using namespace std;


int main()
{
	
	int a, b;
	float c;
	cin >> a>>b>>c;
	cout << a + b << endl;
	cout << a - b << endl;
	cout << a * b << endl;
	cout << a / b << endl;
	cout << a % b << endl;
	
	c = (float)a / (float)b;
	scanf("%f", &c);
	printf("%.2f", c);
	
}
