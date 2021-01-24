#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

///常量
//1.const修饰的常变量
//2.字面常量
//3.#define定义的标识符常量
//4.枚举常量

///1.const修饰的常变量
//int main()
//{
	/*const - 常属性（将赋值的变量固定，无法再次赋值本质仍为常属性）
	const int n = 10;// n是变量，但是又有常属性，所以我们说n是常变量
	int arr[n] = { 0 };//Error

	//const修饰的常变量
	/*const int num = 4;
	printf("%d\n", num);
	num = 8;
	printf("%d\n", num);
	return 0;*/
	//}

		///2.字面常量
		//3;
		//100;
		//3.14;



	///3. #define 定义的标识符常量
	//#define MAX 10
	//int main()
	//{
	//	int arr[MAX] = { 0 };
	//	printf("%d\n", MAX);
	//	return 0;
	//}

	///4.枚举常量
	//枚举--一一列举
	//性别：男，女，保密
	//
	//枚举关键字 -- （enum）

	//	enum Sex
	//	{
	//		Male,
	//		Female,
	//		Secret
	//	};
	//// Male,Female,Secret - 枚举常量
	//	int main()
	// {
	//	enum Sex s = Female;
	//	printf("%d\n", Male);
	//	printf("%d\n", Female);
	//	printf("%d\n", Secret);
	//	return 0;
	//}	

	//enum ASS
	//{
	//Red = 1,
	//Yellow,
	//Blue,
	//};
	//
	//int main()
	//{
	//	enum ASS bigass= Blue;
	//	bigass = Yellow;
	//	return 0;
	//	printf("%s", bigass);
	//	return 0;
	//}
