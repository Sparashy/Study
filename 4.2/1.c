//变量的作用域和生命周期
//哪里可以使用，哪里就是作用域
#include <stdio.h>
//int main()
//{
//	printf("hh\n");
//	int a = 10;
//	printf("a = %d\n", a);
//	return 0;
//}

//int add = 40;
//int main()
//{
//	printf("%d\n", add);
//	return 0;
//}

//生命周期
//变量的生命周期：变量创建和销毁的时间段
//局部变量：进入局部范围生命开始，出范围生命结束
//全局变量：程序的生命周期
//
//int main()
//{
//	{
//		int a = 10;
//		printf("%d\n", a);
//
//	}
//	printf("%d\n", a);
//	return 0;
//
//}


//常量
//字面常量
//#define MAX 10;
//int main()
//{

	//3.14;
	//10;
	//'a';
	//"abcdef";

	//const修饰的常变量

	//const int num = 10;//常变量num，具有常属性（不能改变的属性）
	//num = 20;
	//printf("num = %d\n", num);

	//int arr[10] = { 0 };

	//const int n = 10;//有常属性，但还是变量

	//int arr2[n] = { 0 };//n为变量，这里不行

	//#define定义的标识符常量
	//int n = MAX;
	//printf("n = %d\n", n);

	
//	return 0;
//}

//枚举常量

	//可以一一列举的常量
//enum Sex
//{
//	//这种枚举类型的变量未来可能取值
//	MALE = 3,//赋初值
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	enum Sex s = MALE;
//	//MALE = 3 //err 
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	return 0;
//}


//字符串

int main()
{
	//字符数组-数组是一组相同类型的元素
	char a[] = "hello";
	return 0;
}