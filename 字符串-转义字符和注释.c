//�ַ�������


#include<stdio.h>
#include<string.h>

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };
//	printf("%d\n", strlen(arr1));//strlen - string lengh - �����ַ������ȵ�
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

///ת���ַ�--ת��ԭ������˼

//int main()
//{
//	printf("%d\n", strlen("c:\test\382\test.c"));
//	//32 -- 32������8��������
//	//32��Ϊ8���ƴ���� �Ǹ�10�������֣���ΪASXII��ֵ����Ӧ���ַ�     3       2
//	//32 >--8����ת��10����--> 26 -->��ΪASCII��ֵ��Ӧ���ַ�      3*8^1=24  2*8^0=2
//     return 0;  
//}




//int main()
//{
//	printf("c:\test\32\test.c");
//	//\t-- ˮƽ�Ʊ��
//		return 0;
//}


//int main()
//{
//	 char arr1[] = "abc";//����
//	 //"abc" -- 'a' 'b' 'c' '\0' -- '\0'�ַ����Ľ�����־
//	 //char arr2[] = { 'a', 'b', 'c', 'd' };//Error
//	 char arr2[] = { 'a', 'b', 'c', '\0'};
//	 printf( "%s", arr2 );
//	return 0;
//}


///whileѭ�����
//int main()
//{
//	int line = 0;
//	while (line <= 2000)
//	{
//		printf("��һ�д���");
//		printf("%d\n", line);
//			line++;
//}
//	if (line >= 2000)
//	{
//		printf("���");
//	}
//	return 0;
//}

///����f(x)
//Add(int x, int y) //�Զ��庯�����������Ĳ���
//{
//	int z = x * y;//���������� �������壩
//	return z;//(������)
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