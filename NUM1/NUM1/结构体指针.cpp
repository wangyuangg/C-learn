#include<iostream>
#include<string>

using namespace std;

struct Student {
	string name;//姓名
	int age;//年龄
	int score;//分数

};

int main3() {
	Student s1 = { "张三",45,80 };
	 
	Student* p = &s1;
	cout << "姓名" << p->name << "年龄" << p->age << "分数" << p->score << endl;
	return 0;

}