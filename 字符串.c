#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int main()
//{
//    int input = 0;
//	printf("加入比特\n");
//	printf("你要好好学习吗？");
//	scanf("%d", &input);//1/2/
//	if (input == 1)
//		printf("好offer\n");
//	else if (input == 2)
//		printf("卖红薯\n");
//	else
//		printf("渣渣\n");
//
//	
//	return 0;
//}


//while 循环
/*int main()
{
	int line = 0;

	while (line < 20000)
	{
		printf("我RNM%d", line);
		printf("次\n");
		line++;
	}
	if (line>=20000);
	printf("成为NTR");
	return 0;
}*/

//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//
//
//
//int main()
//{
//	int A = 10;
//	int B = 20;
//	int C = 30;
//	int D = -5;
//	int sum = 0;
//	sum = Add(A, B);
//	printf("%d\n", sum);
//	sum = Add(C, D);
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int A = 0;
//	int B = 0;
//	int SUM = 0;
//	printf("输入两个操作数>:");
//	SUM = A + B;
//	scanf("%d%d", &A, &B);
//	printf("SUM = %d\n", SUM);
//
//
//	return 0;
//}

//int main()
//{
//	//计算两个数的和
//	int num1 = 0;
//	int num2 = 0;
//    int num3 = 0;
//	int sum = 0;
//    //输入函数-使用输入函数（scanf）
//	scanf("%d%d%d",&num1, &num2, &num3);//取地址符号&
//	//C语言语法规定，变量要定义在当前代码块的最前面
//	sum = num1 + num2 * num3;
//	printf("傻逼 = %d\n", sum);//(傻逼 =)会原模原样的在调试器里显示出来，别无他用
//	return 0;
//}

/*int main()
{
	int arr[11] = {1,2,3,4,5,6,7,8,9,10,11};
	int i = 0;
	while (i <= 11)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	return 0;


}*/

//int main()
//{
//	int arr1[10] = { 0 };
//	int ch = 0;
//	printf("%d\n", sizeof (arr[10]));
//	ch = sizeof arr / sizeof arr[10];
//	printf("%d\n", ch);
//	return 0;
//}