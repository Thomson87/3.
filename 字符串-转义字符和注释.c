//字符串类型


#include<stdio.h>
#include<string.h>

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };
//	printf("%d\n", strlen(arr1));//strlen - string lengh - 计算字符串长度的
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

///转义字符--转变原来的意思

//int main()
//{
//	printf("%d\n", strlen("c:\test\382\test.c"));
//	//32 -- 32是两个8进制数字
//	//32作为8进制代表的 那个10进制数字，作为ASXII码值，对应的字符     3       2
//	//32 >--8进制转化10进制--> 26 -->作为ASCII码值对应的字符      3*8^1=24  2*8^0=2
//     return 0;  
//}




//int main()
//{
//	printf("c:\test\32\test.c");
//	//\t-- 水平制表符
//		return 0;
//}


//int main()
//{
//	 char arr1[] = "abc";//数组
//	 //"abc" -- 'a' 'b' 'c' '\0' -- '\0'字符串的结束标志
//	 //char arr2[] = { 'a', 'b', 'c', 'd' };//Error
//	 char arr2[] = { 'a', 'b', 'c', '\0'};
//	 printf( "%s", arr2 );
//	return 0;
//}


///while循环语句
//int main()
//{
//	int line = 0;
//	while (line <= 2000)
//	{
//		printf("敲一行代码");
//		printf("%d\n", line);
//			line++;
//}
//	if (line >= 2000)
//	{
//		printf("完成");
//	}
//	return 0;
//}

///函数f(x)
//Add(int x, int y) //自定义函数（）函数的参数
//{
//	int z = x * y;//（存起来） （函数体）
//	return z;//(带回来)
//}
//int main()
//{
//	/*int num1 = 10;
//	int num2 = 20;
//	int a = 100;
//	int b = 200;*/
//	int sum = 0;
//	//sum = num1 + num2;
//	//sum = Add(num1, num2);
//	////sum = a + b;
//	//sum = Add(a, b);
//	sum = Add(2, 3);
//	printf("sum = %d\n", sum);
//	return 0;
//}