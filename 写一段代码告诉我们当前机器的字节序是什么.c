#define _CRT_SECURE_NO_WARNINGS
//дһ�δ���������ǵ�ǰ�������ֽ�����ʲô
//����1 ΪС��
//����0 Ϊ���


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
//		printf("С��\n");
//	}
//	else
//		printf("���\n");
//	return 0;
//}
//�Ż�1��
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
//		printf("С��\n");
//	}
//	else
//		printf("���\n");
//	return 0;
//}
//�Ż�3��
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
		printf("С��\n");
	}
	else
		printf("���\n");
	return 0;
}