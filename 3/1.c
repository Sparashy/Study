#include <stdio.h>
#include <string.h>
int main()
{
	//char arr[] = "hello";
	//字符串在结尾的位置隐藏了一个\0的字符
	//\0为字符串结束标志
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c' };
	//求字符串长度
	int len = strlen("abc");
	printf("%d\n", strlen(arr1));
	printf("%d\n", sizeof(arr1));
	printf("%d\n", strlen(arr2));

	//printf("%s\n", arr1);
	//printf("%s\n", arr2);

	return 0;
}