#include <stdio.h>
#include <string.h>
int main()
{
	//char arr[] = "hello";
	//�ַ����ڽ�β��λ��������һ��\0���ַ�
	//\0Ϊ�ַ���������־
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c' };
	//���ַ�������
	int len = strlen("abc");
	printf("%d\n", strlen(arr1));
	printf("%d\n", sizeof(arr1));
	printf("%d\n", strlen(arr2));

	//printf("%s\n", arr1);
	//printf("%s\n", arr2);

	return 0;
}