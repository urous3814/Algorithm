#include <iostream>
using namespace std;
//버블정렬(Bubble Sorting)
//버블정렬 : 옆에 있는 값과 비교하여 더 작은 값을 반복적으로 앞으로 보내는 정렬 방법
int main()
{
	int arr[10] = { 1,10,5,8,7,6,4,3,2,9 };
	int tmp;


	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 9 - i;j++)
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}

	for (int i = 0; i < 10; i++)
		cout << arr[i] << endl;


	return 0;
}