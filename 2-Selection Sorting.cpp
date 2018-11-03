#include <iostream>
using namespace std;
//선택정렬(Selection Sorting)
//선택정렬 : 전체를 비교해서 가장 작은 것을 앞으로 보내 오름차순으로 정렬하는 방법!


int main()
{
	int arr[10] = { 1,10,5,8,7,6,4,3,2,9 };
	int min, tmp, index;					//min  = 최솟값을 찾기 위한 변수, tmp = swap 할 때 임시 저장 변수
											//index = min에 맞는 j값을 저장하기 위한 변수 
											//->왜 swap을 for(j)문에 사용하지 않았을까?
											//만약 j에 swap문을 넣었다면 for(i)로 10번, for(j)로 10-i번을 하게 된다.
											//허나 for(i)문에 쓰면 딱 10번만 하면 되기 때문이다.
	for (int i = 0; i < 10; i++)
	{
		min = 9999;							//처음에 큰 값을 넣어서 내가 입력한 배열이 처음에 무조건 들어갈 수 있도록 설정

		for (int j = i; j < 10; j++)
		{
			if (min > arr[j])				//min보다 작은 arr이 있으면
			{
				min = arr[j];				//min에 arr을 대입
				index = j;					//for(j)문 밖에서 j값을 사용하기 위해서이다.
			}
		}

		tmp = arr[i];
		arr[i] = arr[index];
		arr[index] = tmp;
	}

	for (int i = 0; i < 10; i++)
		cout << arr[i] << endl;


	return 0;
}