#include<iostream>
using namespace std;
int main5() 
{
	int a = 10;
	int &b = a;
	int c = 20;
	b = c;
	cout << b << endl;
	system("pause");
	return 0;


}