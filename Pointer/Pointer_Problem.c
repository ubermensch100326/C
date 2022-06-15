#include <stdio.h>

int main(void)
{
	// 우선 문제를 풀고 결과를 예측한다
	// 각 문제 부분만 드래그하고 Ctrl + K + U 누른 뒤 코드 돌려서 정답을 확인해보면 된다
	// 다시 주석 표시할 때는 드래그하고 Ctrl + K + C 누르면 된다
	// 위 단축키는 Visual Studio 기준이므로 Visual Studio Code를 사용하고 있다면 Alt + Shift + A를 누르면 된다
	// int 크기는 가장 일반적인 4바이트라고 가정하고 풀면 된다
	// 문제편



	// 1번 문제
	/*int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	printf("arr의 값 : %d\n", arr);
	printf("&arr[0]의 값 : %d\n", &arr[0]);*/



	// 2번 문제
	/*int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (int i = 0; i < 10; i++)
	{
		printf("&arr[%d]의 값 : %d\n", i, &arr[i]);
		printf("arr + %d의 값 : %d\n", i, arr + i);
	}*/



	// 3번 문제
	/*int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (int* ptr = arr; ptr < arr + 10; ptr++)
	{
		printf("*ptr의 값 : %d\n", *ptr);
	}*/



	// 4번 문제
	/*int arr[3] = { 1, 2, 3 };
	int* ptr = arr;
	for (int i = 0; i < 3; i++)
	{
		printf("*(ptr + %d)의 값 : %d\n", i, *(ptr + i));
		printf("ptr[%d]의 값 : %d\n", i, ptr[i]);
		printf("%d[ptr]의 값 : %d\n", i, i[ptr]);
	}*/



	// 5번 문제
	/*int arr[3] = { 1, 2, 3 };
	printf("arr의 값 : %d\n", arr);
	printf("arr + 1의 값 : %d\n", arr + 1);
	printf("&arr의 값 : %d\n", &arr);
	printf("&arr + 1의 값 : %d\n", &arr + 1);*/



	// 6번 문제
	/*int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };
	printf("&arr의 값 : %d\n", &arr);
	printf("&arr + 1의 값 : %d\n", &arr + 1);*/



	// 7번 문제
	/*int arr[3] = { 1, 2, 3 };
	int* ptr = arr;
	int* ptr2 = &arr;
	printf("ptr의 값 : %d\n", ptr);
	printf("ptr + 1의 값 : %d\n", ptr + 1);
	printf("ptr2의 값 : %d\n", ptr2);
	printf("ptr2 + 1의 값 : %d\n", ptr2 + 1);*/



	// 8번 문제
	/*int arr[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
	int(*ptr)[3] = arr;
	printf("ptr의 값 : %d\n", ptr);
	printf("ptr + 1의 값 : %d\n", ptr + 1);
	printf("ptr[0] + 1의 값 : %d\n", ptr[0] + 1);
	printf("ptr[0][2]의 값 : %d\n", ptr[0][2]);*/



	// 9번 문제
	/*int arr[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
	int *ptr[3];
	for (int i = 0; i < 3; i++)
	{
		ptr[i] = arr[i];
		printf("ptr[%d]의 값 : %d\n", i, ptr[i]);
		printf("*ptr[%d]의 값 : %d\n", i, *ptr[i]);
	}*/



	// 10번 문제
	/*int arr[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
	int(*ptr)[3] = arr;
	for (int i = 0; i < 5; i++)
	{
		printf("ptr[%d]의 값 : %d\n", i, ptr[i]);
		printf("&arr[%d]의 값 : %d\n", i, &arr[i]);
		printf("*ptr[%d]의 값 : %d\n", i, *ptr[i]);
		printf("(*ptr)[%d]의 값 : %d\n", i, (*ptr)[i]);
	}*/



	// 11번 문제
	/*int arr[2][3] = { {2, 4, 6}, {5, 10, 15} };
	printf("sizeof(arr)의 값 : %d\n", sizeof(arr));
	printf("sizeof(arr[0])의 값 : %d\n", sizeof(arr[0]));
	printf("sizeof(arr[0][0])의 값 : %d\n", sizeof(arr[0][0]));*/



	// 12번 문제
	/*int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };
	int(*ptr)[3] = arr;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("ptr[%d][%d]의 값 : %d\n", i, j, ptr[i][j]);
		}
	}*/
	


	// 13번 문제
	/*int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };
	for (int(*row)[3] = arr; row < arr + 2; row++)
	{
		for (int* col = row; col < *row + 3; col++)
		{
			printf("%d ", *col);
		}
		printf("\n");
	}*/



	// 14번 문제
	/*int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };
	printf("arr의 값 : %d\n", arr);
	printf("arr + 1의 값 : %d\n", arr + 1);
	printf("*arr의 값 : %d\n", *arr);
	printf("*arr + 1의 값 : %d\n", *arr + 1);
	printf("arr[0] + 1의 값 : %d\n", arr[0] + 1);
	printf("**arr의 값 : %d\n", **arr);*/



	// 15번 문제
	/*int arr[2][3] = { {1, 2, 3}, {7, 8, 9} };
	printf("arr[1]의 값 : %d\n", arr[1]);
	printf("*(&arr[1])의 값 : %d\n", *(&arr[1]));
	printf("&arr[1][0]의 값 : %d\n", &arr[1][0]);
	printf("&arr[1][1]의 값 : %d\n", &arr[1][1]);
	printf("(&arr[1])[0]의 값 : %d\n", (&arr[1])[0]);
	printf("(&arr[1])[1]의 값 : %d\n", (&arr[1])[1]);
	printf("*(&arr[1]) + 1의 값 : %d\n", *(&arr[1]) + 1);
	printf("arr[1] + 1의 값 : %d\n", arr[1] + 1);
	printf("&arr[1] + 1의 값 : %d\n", &arr[1] + 1);
	printf("&(*(&arr[1])) + 1의 값 : %d\n", &(*(&arr[1])) + 1);*/



	// 16번 문제
	/*int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };
	int* ptr = arr;
	printf("sizeof(arr)의 값 : %d\n", sizeof(arr));
	printf("sizeof(ptr)의 값 : %d\n", sizeof(ptr));
	printf("sizeof(*arr)의 값 : %d\n", sizeof(*arr));
	printf("sizeof(*ptr)의 값 : %d\n", sizeof(*ptr));
	printf("sizeof(&arr)의 값 : %d\n", sizeof(&arr));
	printf("sizeof(&ptr)의 값 : %d\n", sizeof(&ptr));*/



	// 17번 문제
	/*int arr[3] = { 1, 2, 3 };
	int(*ptr)[3] = arr;
	printf("ptr의 값 : %d\n", ptr);
	printf("*ptr의 값 : %d\n", *ptr);
	printf("sizeof(ptr)의 값 : %d\n", sizeof(ptr));
	printf("sizeof(*ptr)의 값 : %d\n", sizeof(*ptr));
	printf("sizeof(**ptr)의 값 : %d\n", sizeof(**ptr));*/



	// 18번 문제
	/*int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };
	printf("arr[0][0] + 1의 값 : %d\n", arr[0][0] + 1);*/



	// 19번 문제
	/*int a = 20;
	int* ptr = &a;
	int* ptr_ptr1 = &ptr;
	int** ptr_ptr2 = &ptr;
	printf("ptr의 값 : %d\n", ptr);
	printf("ptr_ptr1의 값 : %d\n", ptr_ptr1);
	printf("ptr_ptr2의 값 : %d\n", ptr_ptr2);
	printf("**ptr_ptr1의 값 : %d\n", **ptr_ptr1);
	printf("**ptr_ptr2의 값 : %d\n", **ptr_ptr2);
	printf("sizeof(*ptr_ptr1)의 값 : %d\n", sizeof(*ptr_ptr1));
	printf("sizeof(*ptr_ptr2)의 값 : %d\n", sizeof(*ptr_ptr2));*/



	// 20번 문제
	/*int i = 0;
	int* ptr = &i;
	printf("&(&i)의 값 : %d\n", &(&i));
	printf("&ptr의 값 : %d\n", &ptr);*/



	return 0;
}