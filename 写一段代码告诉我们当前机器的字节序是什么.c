#define _CRT_SECURE_NO_WARNINGS
//写一段代码告诉我们当前机器的字节序是什么
//返回1 为小端
//返回0 为大端


//int chick(int a)
//{
//	char *p = (char*)&a;
//	if (*p == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int a = 1;
//	int ret = chick(a);
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//		printf("大端\n");
//	return 0;
//}
//优化1：
//int chick(int a)
//{
//	char *p = (char*)&a;
//	return *p;
//}
//int main()
//{
//	int a = 1;
//	int ret = chick(a);
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//		printf("大端\n");
//	return 0;
//}
//优化3：
int chick(int a)
{
	 return *(char*)&a;
}
int main()
{
	int a = 1;
	int ret = chick(a);
	if (ret == 1)
	{
		printf("小端\n");
	}
	else
		printf("大端\n");
	return 0;
}