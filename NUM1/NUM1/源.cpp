#include<iostream>
using namespace std;
struct Student {
	string name;//����
	int age;//����
	int score;//����

};


int main() {
	
	Student s1;
	s1.name = "Tom";
	s1.age = 10;
	s1.score = 100;

	cout << s1.name << s1.age << s1.score;
	return 0;

}