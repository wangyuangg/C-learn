#include<iostream>
#include<string>

using namespace std;

struct Student {
	string name;//����
	int age;//����
	int score;//����

};

int main3() {
	Student s1 = { "����",45,80 };
	 
	Student* p = &s1;
	cout << "����" << p->name << "����" << p->age << "����" << p->score << endl;
	return 0;

}