#include<iostream>
using namespace  std;
#include<string>

struct hero 
{
	string name;//姓名
	int age;//年龄
	string sex;

};
void bubbleSort(struct hero heroArray[], int len) 
{
	for (int i = 0; i < len - 1; i++) 
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (heroArray[j].age > heroArray[j + 1].age)
			{
				struct hero temp = heroArray[j];
				heroArray[j] = heroArray[j + 1];
				heroArray[j + 1] = temp;
			}
		}


	}
}
void printArray(struct hero heroArray[], int len)
{
	for (int i = 0; i < len; i++) {
		cout << heroArray[i].name << "年龄" << heroArray[i].age << endl;
	}
}

int main() {
	hero heroArray[5] = 
	{
		{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"镖产",19,"女"},



	};
	int len = sizeof(heroArray) / sizeof(heroArray[0]);
	//for (int i = 0; i < len; i++) {
	//	cout << heroArray[i].name << endl;
	//}
	bubbleSort(heroArray, len);
	printArray(heroArray, len);
	system("pause");
	return 0;
}