#include<iostream>

using namespace std;

using PF = int(*)(int*, int);

using F = int(int*, int);

//int (*f1(int))(int*, int);
int sum(int* arr, int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += arr[i];
    }
    return total;
}
PF F5;//F5Ô­±¾ÊÇ
int (*f1(int n))(int*, int) {
    if (n == 1) {
        return &sum;
    }
    else {
        return nullptr;
    }
}

PF f1(int n) {
    if (n == 1) {
        return &sum;
    }
    else {
        return nullptr;
    }
}
int main()
{
    int arr[] = { 1, 2, 3, 4, 5 };
    int n = 5;
    int (*func)(int*, int) = f1(1);
    if (func != nullptr) {
        int result = (*func)(arr, n);
        cout << "The sum of the array is: " << result << endl;
    }
    else {
        cout << "No function returned." << endl;
    }
    return 0;
	
}