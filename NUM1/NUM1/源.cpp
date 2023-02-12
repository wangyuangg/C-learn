#include<iostream>
using namespace std;
#include<string>


struct Student {
	string name;//姓名
	int age;//年龄
	int score;//分数

};


int main1() {
	
	Student s1;
	s1.name = "Tom";
	s1.age = 10;
	s1.score = 100;

	cout <<"姓名" << s1.name << s1.age << s1.score;
	return 0;

}