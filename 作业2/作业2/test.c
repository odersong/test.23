#include<stdio.h>
#include<string.h>
//#include<math.h>
//int main()
//{
//	unsigned long pu[] = { 6,7,8,9,10 };
//	unsigned long* p = pu;
//	*(p + 3) += 3;
//	printf("%d %d\n", *p, *(p + 3));//6 12
//	return 0;
//}


//дһ���������ַ�������
//void revers(char* p)
//{
//	char* left = p;
//	char* right = p + strlen(p) - 1;
//	while (left < right)
//	{
//		char tmp = 0;
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char a[25]={0};
//	gets(a,sizeof(a));
//	//scanf_s("%s", a,sizeof(a));
//	revers(a);
//	printf("%s\n", a);
//	return 0;
//}


//����2��22��222��2222��22222�ĺ�
//int main()
//{
//	int a = 0;
//	int n = 0;
//	int ret = 0;
//	int num = 0;
//	scanf_s("%d%d", &a, &n);
//	for (int i = 0; i < n; i++)
//	{
//		ret = ret * 10 + 2;
//		num += ret;
//	}
//	printf("%d\n", num);
//	return 0;
//}


//��10000������������ˮ�ɻ���
//int main()
//{
//	int i = 0;
//	for(i=0;i<=10000;i++)
//	{
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		int tmp1 = i;
//		while (tmp1)
//		{
//			sum += (int)pow(tmp1 % 10, n);//�о�������Ϊpow���ص���double���Ϳ���ǿ��ת����int
//			tmp1 /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}


//��ӡһ��ͼ��
//int main()
//{
//	int h = 0;
//	scanf_s("%d", &h);//7
//	int i = 0;
//	for (i = 0; i< h; i++)
//	{
//		int a = 0;
//		for (a = 0; a < h-1-i; a++)
//		{
//			printf(" ");
//		}
//		for (a = 0; a < 1 + 2 * i; a++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < h - 1; i++)
//	{
//		int e = 0;
//		for (e = 0; e <= i; e++)
//		{
//			printf(" ");
//		}
//		for (e = 0; e < 2*(h-1-i)-1; e++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}



//����ˮ��һƿ��ˮһ��Ǯ��������ƿ���Ի�һƿˮ����20Ԫ�����Ժȶ�����ˮ��
//int main()
//{
//	int money = 0;
//	scanf_s("%d", &money);
//	int total = 0;//ˮ
//	int	empty = 0;//��ƿ
//	total = money;
//	empty = total;
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n", total);
//	return 0;
//}


//����һ���������飬дһ������ʵ������������ǰ��ż���ں�
//void move(int* a, int sz)
//{
//	int tmp = 0;
//	int* left = a;
//	int* right = a + sz - 1;
//	//int a[] = { 2,1,3,5,7,9,11 };
//	while (left < right )
//	{
//		while (left < right && *left % 2 == 1)
//		{
//			left++;
//		}
//		while (left < right && *right % 2 == 0)
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			tmp = *right;
//			*right = *left;
//			*left = tmp;
//		}
//	}
//}
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", p[i]);
//	}
//}
//int main()
//{
//	int a[] = { 2,1,3,5,7,9,11 };
//	int sz = sizeof(a) / sizeof(a[0]);
//	move(a, sz);
//	print(a, sz);
//	return 0;
//}


//int main()
//{
//	unsigned char a = 200;//ֱ���������������ַ��ͣ�����0
//	unsigned char b = 100;//ֱ���������������ַ��ͣ�����0
//	unsigned char c = 0;
//	c = a + b;//a+b��ȡ8λ
//	printf("%d %d", a + b, c);//a+b����ȡ��λ��ֱ�Ӽ��㣬cҪȡ���λ���ڼ���
//	return 0;//300,44
//}


//int main()
//{
//	char a = 'a';
//	char* p = &a;
//	char** pp = p;
//	printf("%p\n", p);
//	printf("%p\n", p+1);
//	printf("%p\n", pp);
//	printf("%p\n", pp+1);
//	return 0;
//}


//int main()
//{
//	unsigned int a = 0x1234;
//	unsigned char b = *(unsigned char*)&a;
//	printf("%d\n", b);
//	return 0;
//}


//�������
//int main()
//{
//	int a[5][5] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			if (j == 0)
//			{
//				a[i][j] = 1;
//			}
//			if (i == j)
//			{
//				a[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1)
//			{
//				a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
//			}
//		}
//	}
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ",a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//��������
//int main()
//{
//	int killer = 0;
//	for (killer = 'a'; killer < 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("����=%c", killer);
//		}
//	}
//	return 0;
//}


//�������⣺��36ƥ��6���ܵ���û�м�ʱ����������ȷ����36ƥ���ǰ����



//int main()
//{
//	char str1[] = "hello bit";
//	char str2[] = "hello bit";
//	char* str3 = "hello bit";
//	char* str4 = "hello bit";
//	if (str1 == str2)
//	{
//		printf("��ͬ\n");
//	}
//	else
//	{
//		printf("��ͬ\n");
//	}
//	if (str3 == str4)
//	{
//		printf("��ͬ");
//	}
//	else
//	{
//		printf("��ͬ");
//	}
//	return 0;
//}

