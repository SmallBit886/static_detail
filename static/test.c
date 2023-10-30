#include <stdio.h>
//void test()
//{
//	int i = 0;
//	i++;
//	printf("%d ", i);//1 1 1 1 1 1 1 1 1 1
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		test();
//	}
//	return 0;
//}
//代码2

//#include <stdio.h>
//void test()
//{
//	//static修饰局部变量
//	static int i = 0;
//	i++;
//	printf("%d ", i);
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		test();//1 2 3 4 5 6 7 8 9 10
//	}
//	return 0;
//}


////代码1
////add.c
//int Add(int x, int y)
//{
//	return x + y;
//}
////test.c
//int main()
//{
//	printf("%d\n", Add(2, 3));//5
//	return 0;
//}
//代码2
//add.c

static int Add(int x, int y)
{
	return x + y;
}
//test.c
int main()
{
	printf("%d\n", Add(2, 3));
	return 0;
}