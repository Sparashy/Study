#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//
//char arr[50001] = { 0 };
//char ret[50001] = { 0 };
//
//
//char* compressFile(char arr[])
//{
//	int sz = strlen(arr);
//	char p[50001] = { 0 };
//	for (int i = 0; i < sz; i++)
//	{
//		int cot = 1;
//		for (; i < sz; i++)
//		{
//			if (arr[i] == arr[i + 1])
//				cot++;
//			else
//				break;
//		}
//		sprintf(p,"%c%d",arr[i],cot);
//		strcat(ret, p);
//
//	}
//	return ret;
//}
//
//int main()
//{
//	scanf("%s", arr);
//	char* ret = compressFile(arr);
//	if (strlen(ret) < strlen(arr))
//		printf("%s", ret);
//	else
//		printf("%s", arr);
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//
//char s[10001] = { 0 };
//char t[10001] = { 0 };
//
//int Is_Sun(char s[], char t[])
//{
//	int a, b;
//	a = strlen(s);
//	b = strlen(t);
//	if (b > a)
//		return -1;
//	else
//	{
//		int n = a - b;
//		for (int i = 0; i <= n; i++)
//		{
//			int cot = 0;
//			if(s[i]==t[0])
//				for (int j = 0; j < b; j++)
//				{
//					if (s[i + j] == t[j])
//						cot++;
//				}
//			if (cot == b)
//				return i;
//			else if ((cot != b) && i == n)
//				return -1;
//
//		}
//	}
//}
//
//int main()
//{
//	scanf("%s", s);
//	scanf("%s", t);
//	int ret = Is_Sun(s, t);
//	printf("%d", ret);
//}

//#include<stdio.h>
//long long Cot_Square(int n, int m)
//{
//	int c = 0;
//	if (n < m)
//		c = n;
//	else
//		c = m;
//	long long ret = 0;
//	for (int i = 0; i < c; i++)
//	{
//		ret += (n - i) * (m - i);
//	}
//	return ret;
//}
//
//long long Cot_Rectangle(int n, int m)
//{
//	long long ret = 0;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			ret += (n - i) * (m - j);
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	int n, m;
//	scanf("%d %d", &n, &m);
//	long long  square = Cot_Square(n, m);
//	printf("%lld ", square);
//	long long rec = Cot_Rectangle(n, m) - square;
//	printf("%lld", rec);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int Is_Prime(int n)
//{
//	if (n == 1 || n == 2)
//		return n;
//	for (int i = 2; i * i <= n; i++)
//	{
//		if (n % i == 0)
//			return 0;
//	}
//	return n;
//}
//
//int Is_Pali(int n)
//{
	//int x = 0,y=0;
	//y = n;
	//do
	//{
	//	x += (n % 10);
	//	n = n / 10;
	//	if (n != 0)
	//		x *= 10;
	//} while (n != 0);
//	if (x == y)
//		return x ;
//	else
//		return 0;
//
//}
//
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	int found = 0;
//	for (int i = a; i < b; i++)
//	{
//		if (Is_Pali(i) && Is_Prime(i))
//		{
//			printf("%d\n", i);
//			found = 1;
//		}
//	}
//	if (found == 0)
//		printf("%d", -1);
//}

////q5
//#include <stdio.h>
//
//int arr[10] = { 6, 2, 5, 5, 4, 5, 6, 3, 7, 6 };
//
//int countSticks(int num) {
//	if (num == 0) {
//		return arr[0];
//	}
//
//	int count = 0;
//	while (num > 0) {
//		int digit = num % 10;
//		count += arr[digit];
//		num /= 10;
//	}
//	return count;
//}
//
//int main() {
//	int n, count = 0;
//	scanf("%d", &n);
//
//	for (int i = 0; i <= 100; i++) {
//		for (int j = 0; j <= 100; j++) {
//			int k = i + j;
//			if (countSticks(i) + countSticks(j) + countSticks(k) + 4 == n) {
//				count++;
//			}
//		}
//	}
//
//	printf("%d\n", count);
//
//	return 0;
//}


////q6
//#include<stdio.h>
//
//int arr[1000] = { 0 };
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int total = 0;
//	for (int j = 0; j <= 100; j++)
//	{
//		int low = 1000;
//		int high = 0;
//		int ret = 0;
//		int cot = 0;
//
//		for (int i = 0; i < n; i++)
//		{
//			if (arr[i] != 0)
//			{
//				if (low > i)
//					low = i;
//				if (high < i)
//					high = i;
//				cot++;
//			}
//		}
//		if (cot != 0)
//		{
//			ret = n - (n - 1 - high) - low - cot;
//			total += ret;
//		}
//		for (int k = 0; k < n; k++)
//		{
//			if (arr[k] != 0)
//				arr[k]--;
//		}
//	}
//	printf("%d", total);
//	return 0;
//}


////q7
//#include<stdio.h>
//int arr[1000] = { 0 };
//
//int Find_Powernum(int arr[], int n)
//{
//	for (int i = 0; i <= 1000; i++)
//	{
//		int cot = 0;
//		for (int j = 0; j < n; j++)
//		{
//			if (arr[j] == i)
//				cot++;
//		}
//		if (cot > (n/2))
//			return i;
//	}
//	return -1;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int ret = Find_Powernum(arr, n);
//	printf("%d", ret);
//}


////q8
//#include<stdio.h>
//#include <stdlib.h>
//int compare(const void* a, const void* b) {
//	return (*(int*)b - *(int*)a);
//}
//int arr[1002] = { 0 };
//
//int main()
//{
//	for (int i = 0; i < 1002; i++)
//		arr[i] = -1;
//	int i = 0;
//	while (scanf("%d", &arr[i]) == 1)
//	{
//		i++;
//	}
//	qsort(arr,i,sizeof(int),compare);
//	for (int j = 0; j < i; j++)
//	{
//		if (arr[j] - 1 != arr[j + 1])
//			printf("%d", arr[j] - 1);
//	}
//}

////q9
//#include<stdio.h>
//#include<stdlib.h>
//
//int compare(const void* a, const void* b)
//{
//	return(*(int*)a - *(int*)b);
//}
//
//int arr[1002] = { 0 };
//
//void Find_two(int arr[], int n)
//{
//	qsort(arr, n, sizeof(int), compare);
//	int key[2] = { 0 };
//	if (arr[0] != 1)
//	{
//		key[0] = 1;
//		if (arr[0] != 2)
//		{
//			key[1] = 2;
//			printf("%d %d", key[0], key[1]);
//		}
//		else {
//			for (int i = 1; i < n; i++)
//				if (arr[i] + 1 != arr[i + 1])
//				{
//					key[1] = arr[i] + 1;
//					break;
//				}
//			printf("%d %d", key[0], key[1]);
//		}
//	}
//	else if (arr[0] == 1)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			if (arr[i] + 1 != arr[i + 1])
//			{
//				if (arr[i] + 2 != arr[i + 1])
//				{
//					key[0] = arr[i] + 1;
//					key[1] = arr[i] + 2;
//					printf("%d %d", key[0], key[1]);
//					break;
//				}
//				else {
//					if (key[0] == 0)
//						key[0] = arr[i] + 1;
//					else if (key[1] == 0)
//					{
//						key[1] = arr[i] + 1;
//						printf("%d %d", key[0], key[1]);
//						break;
//					}
//				}
//			}
//		}
//	}
//}
//
//int main()
//{
//	for (int i = 0; i < 1002; i++)
//	{
//		arr[i] = 10000;
//	}
//	int i = 0;
//	while (scanf("%d", &arr[i]) == 1)
//	{
//		i++;
//	}
//	Find_two(arr, i);
//}


////q10
//#include<stdio.h>
//#include<malloc.h>
//
//int gcd(int a, int b) 
//{
//	if (b == 0) {
//		return a;
//	}
//	return gcd(b, a % b);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int* arr = (int*)malloc(n * sizeof(int));
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	if (n == 1)
//		printf("false\n");
//	else {
//		int c = 0;
//		c = gcd(arr[0], arr[1]);
//		if (n == 2 && c == 1)
//			printf("true\n");
//		else
//		{
//			for (int i = 2; i < n; i++)
//			{
//				c = gcd(c, arr[i]);
//			}
//			if (c == 1)
//				printf("true\n");
//			else
//				printf("false\n");
//		}
//	}
//	free(arr);
//	
//}

////q11
//#include<stdio.h>
//
//double fbs = 1e-9;
//
//double POW(double a, long long b)
//{
//	if (b == 0)
//		return 1.0;
//	else
//	{
//		if (b % 2 == 0)
//		{
//			double temp = POW(a, b / 2);
//			return temp * temp;
//		}
//		else
//		{
//			double temp = POW(a, (b - 1) / 2);
//			return temp * temp * a;
//		}
//	}
//}
//
//int main()
//{
//	double a = 0;
//	long long b = 0;
//	scanf("%lf,%lld", &a, &b);
//	if (a<fbs && a>-fbs)
//		printf("%.6lf", 0.0);
//	else
//	{
//		if (b < 0)
//		{
//			b = -b;
//			a = 1.0 / a;
//		}
//		printf("%.6lf", POW(a, b));
//	}
//	return 0;
//}

////q12
//#include<stdio.h>
//#include<stdlib.h>
//
//typedef struct Node {
//	int Num;
//	struct Node* Next;
//	struct Node* Pre;
//}Node;
//typedef  Node* Position;
//
//
//Position NewNode(int x)
//{
//	Position p = (Position)malloc(sizeof(struct Node));
//	p->Num = x;
//	p->Next = NULL;
//	p->Pre = NULL;
//	return p;
//}
//
//void PrintReverseList(Position List,int L,int n)
//{
//	Position p,tmp;
//	 tmp = List;
//	for (int i = 0; i < L / n; i++)
//	{
//		p = tmp;
//		for (int j = 0; j < n - 1; j++)
//		{
//			p = p->Next;
//		}
//		tmp = p->Next;
//		for (int k = 0; k < n ; k++)
//		{
//			printf("%d ", p->Num);
//			p = p->Pre;
//		}
//
//	}
//	while (tmp != NULL)
//	{
//		printf("%d ", tmp->Num);
//		tmp = tmp->Next;
//	}
//}
//
//int main()
//{
//	int L = 0;
//	scanf("%d", &L);
//	Position tmp = NULL;
//	Position List = NULL;
//	for (int i = 0; i < L; i++)
//	{
//		int x = 0;
//		scanf("%d", &x);
//		if (tmp == NULL)
//		{
//			tmp = NewNode(x);
//			List = tmp;
//		}
//		else {
//			tmp->Next=NewNode(x);
//			tmp->Next->Pre = tmp;
//			tmp = tmp->Next;
//		}
//	}
//	int n = 0;
//	scanf("%d", &n);
//	PrintReverseList(List, L, n);
//
//
//}

////q13
//#include<stdio.h>
//#include<stdlib.h>
//
//typedef struct Node {
//	int Num;
//	struct Node* Next;
//	struct Node* Pre;
//}Node;
//typedef  Node* Position;
//
//
//Position NewNode(int x)
//{
//	Position p = (Position)malloc(sizeof(struct Node));
//	p->Num = x;
//	p->Next = NULL;
//	p->Pre = NULL;
//	return p;
//}
//
//void PrintReverseList(Position List, Position Last, int L)
//{
//	if (L % 2 == 0)
//	{
//		for (int i = 0; i < L / 2; i++)
//		{
//			printf("%d %d ", List->Num, Last->Num);
//			List = List->Next;
//			Last = Last->Pre;
//		}
//	}
//	else {
//		for (int i = 0; i < L / 2; i++)
//		{
//			printf("%d %d ", List->Num, Last->Num);
//			List = List->Next;
//			Last = Last->Pre;
//		}
//		printf("%d ", List->Num);
//	}
//}
//
//int main()
//{
//	int L = 0;
//	scanf("%d", &L);
//	Position tmp = NULL;
//	Position List = NULL;
//	Position Last = NULL;
//	for (int i = 0; i < L; i++)
//	{
//		int x = 0;
//		scanf("%d", &x);
//		if (tmp == NULL)
//		{
//			tmp = NewNode(x);
//			List = tmp;
//		}
//		else {
//			tmp->Next = NewNode(x);
//			tmp->Next->Pre = tmp;
//			tmp = tmp->Next;
//		}
//	}
//	Last = tmp;
//	PrintReverseList(List, Last,L);
//	return 0;
//
//}

////q14
//#include<stdio.h>
//#include<stdlib.h>
//
//typedef struct Node {
//	int Num;
//	struct Node* Next;
//	struct Node* Pre;
//}Node;
//typedef  Node* Position;
//
//
//Position NewNode(int x)
//{
//	Position p = (Position)malloc(sizeof(struct Node));
//	p->Num = x;
//	p->Next = NULL;
//	p->Pre = NULL;
//	return p;
//}
//
//void SpecialKill(Position List, int n)
//{
//	while (List != NULL)
//	{
//		if (List->Num != n)
//			printf("%d ", List->Num);
//		List = List->Next;
//	}
//}
//
//int main()
//{
//	int L = 0;
//	scanf("%d", &L);
//	Position tmp = NULL;
//	Position List = NULL;
//	Position Last = NULL;
//	for (int i = 0; i < L; i++)
//	{
//		int x = 0;
//		scanf("%d", &x);
//		if (tmp == NULL)
//		{
//			tmp = NewNode(x);
//			List = tmp;
//		}
//		else {
//			tmp->Next = NewNode(x);
//			tmp->Next->Pre = tmp;
//			tmp = tmp->Next;
//		}
//	}
//	Last = tmp;
//	int n = 0;
//	scanf("%d", &n);
//	SpecialKill(List,n);
//	return 0;
//
//}

////q15
//#include<stdio.h>
//#include<stdlib.h>
//
//typedef struct Node {
//	int Num;
//	struct Node* Next;
//	struct Node* Pre;
//}Node;
//typedef  Node* Position;
//
//
//Position NewNode(int x)
//{
//	Position p = (Position)malloc(sizeof(struct Node));
//	p->Num = x;
//	p->Next = NULL;
//	p->Pre = NULL;
//	return p;
//}
//
//int Is_Sym(Position List, Position Last, int L)
//{
//	for (int i = 0; i < L / 2; i++)
//	{
//		if (List->Num == Last->Num)
//		{
//			List = List->Next;
//			Last = Last->Pre;
//		}
//		else
//			return 0;
//	}
//	return 1;
//	
//}
//
//int main()
//{
//	int L = 0;
//	scanf("%d", &L);
//	Position tmp = NULL;
//	Position List = NULL;
//	Position Last = NULL;
//	for (int i = 0; i < L; i++)
//	{
//		int x = 0;
//		scanf("%d", &x);
//		if (tmp == NULL)
//		{
//			tmp = NewNode(x);
//			List = tmp;
//		}
//		else {
//			tmp->Next = NewNode(x);
//			tmp->Next->Pre = tmp;
//			tmp = tmp->Next;
//		}
//	}
//	Last = tmp;
//	if (Is_Sym(List, Last, L))
//		printf("true");
//	else
//		printf("false");
//	return 0;
//
//}


////q16
//#include<stdio.h>
//#include<malloc.h>
//#include<stdlib.h>
//
//int main()
//{
//	int m,n;
//	scanf("%d %d", &m, &n);
//	int** map = (int **)malloc(sizeof(int*) * m);
//	for (int i = 0; i < m; i++)
//	{
//		map[i] = (int *)malloc(sizeof(int) * n);
//	}
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			scanf("%d", &map[i][j]);
//		}
//	}
//	int target = 0;
//	scanf("%d", &target);
//	int j = 0,i=0;
//	for ( i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (map[i][j] == target)
//			{
//				printf("true\n");
//
//				break;
//			}
//		}
//		if (j == n)
//			j--;
//		if (map[i][j] == target)
//			break;
//	}
//	if (i == m)
//		i--;
//	if (map[i][j] != target)
//		printf("false\n");
//	for (int i = 0; i < m; i++) {
//		free(map[i]);
//	}
//	free(map);
//	return 0;
//
//}


////q17£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡
//#include <stdio.h>
//#include<malloc.h>
//
//long long maxSubArraySum(int arr[], int n) {
//    int maxSum = arr[0];
//    int currentSum = arr[0];
//
//    for (int i = 1; i < n; i++) {
//        currentSum = (currentSum > 0) ? currentSum + arr[i] : arr[i];
//        if (currentSum > maxSum) {
//            maxSum = currentSum;
//        }
//    }
//
//    return maxSum;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int* price = (int*)malloc(sizeof(int) * n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &price[i]);
//	}
//	long long max = maxSubArraySum(price, n);
//	printf("%lld", max);
//  free(price);
//	return 0;
//}


////q18!!!!!!!!!!!!!!!!!!!!!!
//#include <stdio.h>
//#include <stdlib.h>
//
//int merge(int arr[], int temp[], int left, int mid, int right) {
//    int inv_count = 0;
//    int i = left; 
//    int j = mid + 1; 
//    int k = left; 
//
//    while (i <= mid && j <= right) {
//        if (arr[i] <= arr[j]) {
//            temp[k++] = arr[i++];
//        }
//        else {
//            temp[k++] = arr[j++];
//            inv_count += (mid - i + 1);
//        }
//    }
//
//    while (i <= mid) {
//        temp[k++] = arr[i++];
//    }
//
//    while (j <= right) {
//        temp[k++] = arr[j++];
//    }
//
//    for (i = left; i <= right; i++) {
//        arr[i] = temp[i];
//    }
//
//    return inv_count;
//}
//
//int mergeSort(int arr[], int temp[], int left, int right) {
//    int inv_count = 0;
//    if (left < right) {
//        int mid = (left + right) / 2;
//
//        inv_count += mergeSort(arr, temp, left, mid);
//        inv_count += mergeSort(arr, temp, mid + 1, right);
//        inv_count += merge(arr, temp, left, mid, right);
//    }
//    return inv_count;
//}
//
//int main() {
//    int n;
//    scanf("%d", &n);
//
//    int* arr = (int*)malloc(n * sizeof(int));
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &arr[i]);
//    }
//
//    int* temp = (int*)malloc(n * sizeof(int)); 
//
//    int inversions = mergeSort(arr, temp, 0, n - 1);
//
//    printf("%d", inversions);
//    free(arr);
//    free(temp);
//
//    return 0;
//}
//
//#include<stdio.h>
//#include<math.h>
//
//int main()
//{
//	char arr[33] = { 0 };
//	scanf("%s", arr);
//	for (int i = 0, j = 31; i <= 15 && j >= 16; i++, j--)
//	{
//		char temp = ' ';
//		temp = arr[i];
//		arr[i] = arr[j];
//		arr[j] = temp;
//	}
//	int bin[32] = { 0 };
//	for (int i = 0; i<32; i++)
//	{
//		if (arr[i] == '1')
//			bin[i] = 1;
//	}
//	unsigned int  cot = 0;
//	for (int i =0;i<32;i++)
//	{
//		cot += bin[31-i] * pow(2, i);
//	}
//	printf("%u", cot);
//}

//q19q20

////q21
//
//#include<stdio.h>
//
//char num[20][10] = { "Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen" };
//char tens[10][10] = { "0","0","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety" };
//char ele[4][10] = { "Hundred","Thousand","Million","Billion" };
//
//void Print_Hundred(int n)
//{
//	int hundred = 0;
//	hundred = n / 100;
//	if (hundred)
//	{
//		printf("%s %s ", num[hundred], ele[0]);
//	}
//	int ten = n % 100;
//	if (ten >= 20)
//	{
//		if (ten % 10 == 0)
//			printf("%s ", tens[ten / 10]);
//		else
//			printf("%s %s ", tens[ten / 10], num[ten % 10]);
//	}
//	else if (ten < 20 && ten>0)
//		printf("%s ", num[ten]);
//}
//
//int main()
//{
//	long long n = 0;
//	scanf("%lld", &n);
//	int cot = 0;
//	int arr[5] = { 0 };
//	arr[0] = n / 1000000000;
//	arr[1] = (n % 1000000000) / 1000000;
//	arr[2] = (n % 1000000) / 1000;
//	arr[3] = (n % 1000) / 100;
//	arr[4] = n % 100;
//	if (n == 0)
//	{
//		printf("%s", num[n]);
//		return 0;
//	}
//	if (arr[0] > 0)
//	{
//		printf("%s %s ", num[arr[0]], ele[3]);
//	}
//	if (arr[1] > 0)
//	{
//		Print_Hundred(arr[1]);
//		printf("%s ", ele[2]);
//	}
//	if (arr[2] > 0)
//	{
//		Print_Hundred(arr[2]);
//		printf("%s ", ele[1]);
//	}
//	if (arr[3] > 0)
//	{
//		printf("%s %s ", num[arr[3]], ele[0]);
//	}
//	if (arr[4] >0)
//	{
//		if (arr[4] >= 20)
//		{
//			if (arr[4] % 10 == 0)
//				printf("%s", tens[arr[4] / 10]);
//			else
//				printf("%s %s", tens[arr[4] / 10], num[arr[4] % 10]);
//		}
//		else if (arr[4] < 20 && arr[4]>0)
//			printf("%s", num[arr[4]]);
//	}
//	return 0;
//}

////q22
//#include<stdio.h>
//#include<math.h>
//
//long long countDigitOne(int n) {
//	long long e = 0;    
//	int r = 0;    
//	for (int i = 0; n != 0; i++) {
//		int m = n / 10;       
//		if (m * 10 + 1 < n) {
//			m++;    
//		}
//		else if (m * 10 + 1 == n) {
//			e += r + 1;     
//		}
//		e += (m * pow(10, i));   
//		r += (n % 10 * pow(10, i));    
//		n /= 10;      
//	}
//	return e;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	long long ret = countDigitOne(n);
//	printf("%lld", ret);
//}

////q23
//
//#include<stdio.h>
//
//int Ssum(int n, int* total)
//{
//	*total += n;
//	return n && Ssum(n-1,total);
//}
//int main()
//{
//	int n = 0;
//	int total = 0;
//	scanf("%d", &n);
//	Ssum(n,&total);
//	printf("%d", total);
//}


////q24
//#include<stdio.h>
//#include<malloc.h>
//int main()
//{
//	int num = 0,n=0;
//	scanf("%d %d", &num,&n);
//	int* arr = (int*)malloc(sizeof(int) * num);
//	for (int i = 0; i < num; i++)
//	{
//		arr[i] = 1;
//	}
//	int cot = 0;
//	int times = 1;
//	int i = 0;
//	while(1)
//	{
//		if (arr[i] != 0&&times!=n)
//		{
//			i++;
//			times++;
//		}
//		else if (arr[i] == 0)
//		{
//			i++;
//		}
//		else if(arr[i]!=0&&times ==n)
//		{
//			arr[i] = 0;
//			i++;
//			times = 1;
//			cot++;
//		}
//		if (cot == num - 1)
//			break;
//		if (i == num)
//			i = 0;
//	}
//	for (int j = 0; j < num; j++)
//	{
//		if (arr[j] != 0)
//		{
//			printf("%d", j);
//			break;
//		}
//	}
//}TLE!!!!!
//
////q24//Ô¼Éª·òÎÊÌâ
//#include<stdio.h>
//int Find_Last(int num, int n)
//{
//	if (num == 1)
//		return 0;
//	return (Find_Last(num - 1, n) + n) % num;
//}
//
//int main()
//{
//	int num, n;
//	scanf("%d %d", &num, &n);
//	int Lastmem = Find_Last(num, n);
//	printf("%d", Lastmem);
//	return 0;
//}

////q25
//#include<stdio.h>
//
//int main()
//{
//	int num, n;
//	scanf("%d %d", &num, &n);
//	if (num - n == 0)
//		printf("%d", 0);
//	else if (num - n < 0)
//		printf("%d", -1);
//	else
//	{
//		int z = 0,y=0;
//		z = (num - n) / 7;
//		y = (num - n) % 7;
//		if (z == n - 1 && y == 3)
//			printf("%d", z - 1);
//		else if ((z == n && y == 0) || (z == n - 1 && y != 3))
//			printf("%d", z);
//		else if (z < n - 1)
//			printf("%d", z);
//		else if (z > n)
//			printf("%d", n - 1);
//		
//	}
//}

//q26
#include<stdio.h>
#include<string>

char arr[100] = { 0 };
char Cap[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int Capn[26]={0};
char sml[27] = "abcdefghijklmnopqrstuvwxyz";
int smln[26]={0};
void Find_Max_Fam(char* arr)
{
	for (int  i = 0; i < strlen(arr); i++)
	{
		for (int  j = 0; i < 26; i++)
		{
			if(Cap[j]==arr[i])
				Capn[j]++;
			if(sml[j]==arr[i])
				smln[j]++;
		}
	}
	
}
int main()
{
	scanf("%s", arr);
	Find_Max_Fam(arr);
	printf("%s",arr);
	return 0;
}
