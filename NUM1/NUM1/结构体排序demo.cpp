#include<iostream>
using namespace  std;
#include<string>

struct hero 
{
	string name;//����
	int age;//����
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
		cout << heroArray[i].name << "����" << heroArray[i].age << endl;
	}
}

int main() {
	hero heroArray[5] = 
	{
		{"����",23,"��"},
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"�ڲ�",19,"Ů"},



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