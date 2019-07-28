#include <stdio.h>
#include <stdlib.h>

int pow(int x, int y)
{
	if (y == 0)
		return 1;
	else
		return x*pow(x, y - 1);

}

int main()
{
	//int a[][3] = { 1, 2, 3, 4, 5, 6 };

	//int a[12] = { 1, 4, 7, 10, 2, 5, 8, 11, 3, 6, 9, 12 };
	//int i = 10;
	//printf("%d\n", a[a[i]]);//6

	//int arr[] = { 1, 2, 3, 4, 5 };
	//int *ptr = (int *)(&arr + 1);
	//printf("%d %d\n", *(arr + 1), *(ptr - 1));//2 5

	//unsigned short sht = 0;
	//sht--;
	//printf("%d", sht);//65535

	//char ch = 'B' + '8' - '3';
	//printf("%c\n", ch);//ASCIIֵ G

	int n = pow(2, 3);
	printf("%d\n", n);

	system("pause");
	return 0;
}