#include<iostream>
using namespace  std;
#include<string>

struct hero {
	string name;//姓名
	int age;//年龄
	string sex;

};


int main() {
	hero heroArray[5] = {
		{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"镖产",19,"女"},
	};
	int len = sizeof(heroArray) / sizeof(heroArray[0]);
	for (int i = 0; i < len; i++) {
		cout << heroArray[i].name << endl;
	}
	system("pause");
	return 0;
}