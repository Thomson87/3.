#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

///����
//1.const���εĳ�����
//2.���泣��
//3.#define����ı�ʶ������
//4.ö�ٳ���

///1.const���εĳ�����
//int main()
//{
	/*const - �����ԣ�����ֵ�ı����̶����޷��ٴθ�ֵ������Ϊ�����ԣ�
	const int n = 10;// n�Ǳ������������г����ԣ���������˵n�ǳ�����
	int arr[n] = { 0 };//Error

	//const���εĳ�����
	/*const int num = 4;
	printf("%d\n", num);
	num = 8;
	printf("%d\n", num);
	return 0;*/
	//}

		///2.���泣��
		//3;
		//100;
		//3.14;



	///3. #define ����ı�ʶ������
	//#define MAX 10
	//int main()
	//{
	//	int arr[MAX] = { 0 };
	//	printf("%d\n", MAX);
	//	return 0;
	//}

	///4.ö�ٳ���
	//ö��--һһ�о�
	//�Ա��У�Ů������
	//
	//ö�ٹؼ��� -- ��enum��

	//	enum Sex
	//	{
	//		Male,
	//		Female,
	//		Secret
	//	};
	//// Male,Female,Secret - ö�ٳ���
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
