#include <iostream.h>
#include <conio.h>

 int _tmain(int argc, _TCHAR* argv[]) 
{
	int a[10]={1,10,5,8,7,6,4,3,2,9},b;
	for(int f=8;f>=0;f--)
	{
		for(int s=0;s<=f;s++)
		{
			if(a[s+1]<a[s])
			{
				b=a[s+1];
				a[s+1]=a[s];
				a[s]=b;

			}
		}
	}
	for(int g=0;g<=9;g++){
		cout<<a[g];
	}
	getch();
}
