#include <stdio.h>

int main(void)
{
	// �켱 ������ Ǯ�� ����� �����Ѵ�
	// �� ���� �κи� �巡���ϰ� Ctrl + K + U ���� �� �ڵ� ������ ������ Ȯ���غ��� �ȴ�
	// �ٽ� �ּ� ǥ���� ���� �巡���ϰ� Ctrl + K + C ������ �ȴ�
	// �� ����Ű�� Visual Studio �����̹Ƿ� Visual Studio Code�� ����ϰ� �ִٸ� Alt + Shift + A�� ������ �ȴ�
	// int ũ��� ���� �Ϲ����� 4����Ʈ��� �����ϰ� Ǯ�� �ȴ�
	// ������



	// 1�� ����
	/*int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	printf("arr�� �� : %d\n", arr);
	printf("&arr[0]�� �� : %d\n", &arr[0]);*/



	// 2�� ����
	/*int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (int i = 0; i < 10; i++)
	{
		printf("&arr[%d]�� �� : %d\n", i, &arr[i]);
		printf("arr + %d�� �� : %d\n", i, arr + i);
	}*/



	// 3�� ����
	/*int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (int* ptr = arr; ptr < arr + 10; ptr++)
	{
		printf("*ptr�� �� : %d\n", *ptr);
	}*/



	// 4�� ����
	/*int arr[3] = { 1, 2, 3 };
	int* ptr = arr;
	for (int i = 0; i < 3; i++)
	{
		printf("*(ptr + %d)�� �� : %d\n", i, *(ptr + i));
		printf("ptr[%d]�� �� : %d\n", i, ptr[i]);
		printf("%d[ptr]�� �� : %d\n", i, i[ptr]);
	}*/



	// 5�� ����
	/*int arr[3] = { 1, 2, 3 };
	printf("arr�� �� : %d\n", arr);
	printf("arr + 1�� �� : %d\n", arr + 1);
	printf("&arr�� �� : %d\n", &arr);
	printf("&arr + 1�� �� : %d\n", &arr + 1);*/



	// 6�� ����
	/*int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };
	printf("&arr�� �� : %d\n", &arr);
	printf("&arr + 1�� �� : %d\n", &arr + 1);*/



	// 7�� ����
	/*int arr[3] = { 1, 2, 3 };
	int* ptr = arr;
	int* ptr2 = &arr;
	printf("ptr�� �� : %d\n", ptr);
	printf("ptr + 1�� �� : %d\n", ptr + 1);
	printf("ptr2�� �� : %d\n", ptr2);
	printf("ptr2 + 1�� �� : %d\n", ptr2 + 1);*/



	// 8�� ����
	/*int arr[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
	int(*ptr)[3] = arr;
	printf("ptr�� �� : %d\n", ptr);
	printf("ptr + 1�� �� : %d\n", ptr + 1);
	printf("ptr[0] + 1�� �� : %d\n", ptr[0] + 1);
	printf("ptr[0][2]�� �� : %d\n", ptr[0][2]);*/



	// 9�� ����
	/*int arr[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
	int *ptr[3];
	for (int i = 0; i < 3; i++)
	{
		ptr[i] = arr[i];
		printf("ptr[%d]�� �� : %d\n", i, ptr[i]);
		printf("*ptr[%d]�� �� : %d\n", i, *ptr[i]);
	}*/



	// 10�� ����
	/*int arr[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
	int(*ptr)[3] = arr;
	for (int i = 0; i < 5; i++)
	{
		printf("ptr[%d]�� �� : %d\n", i, ptr[i]);
		printf("&arr[%d]�� �� : %d\n", i, &arr[i]);
		printf("*ptr[%d]�� �� : %d\n", i, *ptr[i]);
		printf("(*ptr)[%d]�� �� : %d\n", i, (*ptr)[i]);
	}*/



	// 11�� ����
	/*int arr[2][3] = { {2, 4, 6}, {5, 10, 15} };
	printf("sizeof(arr)�� �� : %d\n", sizeof(arr));
	printf("sizeof(arr[0])�� �� : %d\n", sizeof(arr[0]));
	printf("sizeof(arr[0][0])�� �� : %d\n", sizeof(arr[0][0]));*/



	// 12�� ����
	/*int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };
	int(*ptr)[3] = arr;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("ptr[%d][%d]�� �� : %d\n", i, j, ptr[i][j]);
		}
	}*/
	


	// 13�� ����
	/*int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };
	for (int(*row)[3] = arr; row < arr + 2; row++)
	{
		for (int* col = row; col < *row + 3; col++)
		{
			printf("%d ", *col);
		}
		printf("\n");
	}*/



	// 14�� ����
	/*int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };
	printf("arr�� �� : %d\n", arr);
	printf("arr + 1�� �� : %d\n", arr + 1);
	printf("*arr�� �� : %d\n", *arr);
	printf("*arr + 1�� �� : %d\n", *arr + 1);
	printf("arr[0] + 1�� �� : %d\n", arr[0] + 1);
	printf("**arr�� �� : %d\n", **arr);*/



	// 15�� ����
	/*int arr[2][3] = { {1, 2, 3}, {7, 8, 9} };
	printf("arr[1]�� �� : %d\n", arr[1]);
	printf("*(&arr[1])�� �� : %d\n", *(&arr[1]));
	printf("&arr[1][0]�� �� : %d\n", &arr[1][0]);
	printf("&arr[1][1]�� �� : %d\n", &arr[1][1]);
	printf("(&arr[1])[0]�� �� : %d\n", (&arr[1])[0]);
	printf("(&arr[1])[1]�� �� : %d\n", (&arr[1])[1]);
	printf("*(&arr[1]) + 1�� �� : %d\n", *(&arr[1]) + 1);
	printf("arr[1] + 1�� �� : %d\n", arr[1] + 1);
	printf("&arr[1] + 1�� �� : %d\n", &arr[1] + 1);
	printf("&(*(&arr[1])) + 1�� �� : %d\n", &(*(&arr[1])) + 1);*/



	// 16�� ����
	/*int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };
	int* ptr = arr;
	printf("sizeof(arr)�� �� : %d\n", sizeof(arr));
	printf("sizeof(ptr)�� �� : %d\n", sizeof(ptr));
	printf("sizeof(*arr)�� �� : %d\n", sizeof(*arr));
	printf("sizeof(*ptr)�� �� : %d\n", sizeof(*ptr));
	printf("sizeof(&arr)�� �� : %d\n", sizeof(&arr));
	printf("sizeof(&ptr)�� �� : %d\n", sizeof(&ptr));*/



	// 17�� ����
	/*int arr[3] = { 1, 2, 3 };
	int(*ptr)[3] = arr;
	printf("ptr�� �� : %d\n", ptr);
	printf("*ptr�� �� : %d\n", *ptr);
	printf("sizeof(ptr)�� �� : %d\n", sizeof(ptr));
	printf("sizeof(*ptr)�� �� : %d\n", sizeof(*ptr));
	printf("sizeof(**ptr)�� �� : %d\n", sizeof(**ptr));*/



	// 18�� ����
	/*int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };
	printf("arr[0][0] + 1�� �� : %d\n", arr[0][0] + 1);*/



	// 19�� ����
	/*int a = 20;
	int* ptr = &a;
	int* ptr_ptr1 = &ptr;
	int** ptr_ptr2 = &ptr;
	printf("ptr�� �� : %d\n", ptr);
	printf("ptr_ptr1�� �� : %d\n", ptr_ptr1);
	printf("ptr_ptr2�� �� : %d\n", ptr_ptr2);
	printf("**ptr_ptr1�� �� : %d\n", **ptr_ptr1);
	printf("**ptr_ptr2�� �� : %d\n", **ptr_ptr2);
	printf("sizeof(*ptr_ptr1)�� �� : %d\n", sizeof(*ptr_ptr1));
	printf("sizeof(*ptr_ptr2)�� �� : %d\n", sizeof(*ptr_ptr2));*/



	// 20�� ����
	/*int i = 0;
	int* ptr = &i;
	printf("&(&i)�� �� : %d\n", &(&i));
	printf("&ptr�� �� : %d\n", &ptr);*/



	return 0;
}