// 210923.cpp: определ€ет точку входа дл€ консольного приложени€.
//

#include "stdafx.h"
#include "stdlib.h"

void randomGen(int ao, int arr[])
{
	for (int i = 0; i < ao; i++)
	{
		arr[i] = rand();
	}
}

struct threeArray
{
	int a;
	int b;
	int c;
};
typedef struct threeArray A;

//—оздать csv записать csv решить уравнение записать в json
int _tmain(int argc, _TCHAR* argv[])
{
	int n;
	printf("Enter your number");
	scanf_s("%d", &n);
	A *arr = new A[n];
	for (int i = 0; i < n; i++)
	{
		arr[i].a = rand() - 100 / 100;
		arr[i].b = rand() - 100 / 100;
		arr[i].c = rand() - 100 / 100;
		printf("a = %d\nb = %d\nc = %d\n\n", arr[i].a, arr[i].b, arr[i].c);

	}
	

	return 0;
}

