#include<iostream>
using namespace  std;
#include<string>

struct hero {
	string name;//����
	int age;//����
	string sex;

};


int main() {
	hero heroArray[5] = {
		{"����",23,"��"},
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"�ڲ�",19,"Ů"},
	};
	int len = sizeof(heroArray) / sizeof(heroArray[0]);
	for (int i = 0; i < len; i++) {
		cout << heroArray[i].name << endl;
	}
	system("pause");
	return 0;
}