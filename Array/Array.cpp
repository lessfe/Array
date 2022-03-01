#include <iostream>
#include <array>
using namespace std;

void functionfor_arr(int arr[5])
{
	cout << sizeof(arr);
}

void functionforarr(array <int, 5> &arr)
{
	cout << sizeof(arr);

}

int main()
{

	array<int, 5> arr;
	cout << arr.empty();
	//int _arr[5] = { 1,2,3,4,5 };
	//array <int, 5> arr = { 1, 2,3, 4, 5 };
	///*functionfor_arr(_arr);*/
	//functionforarr(arr);

}

