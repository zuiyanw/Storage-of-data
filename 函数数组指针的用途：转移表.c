#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void menu()
{	
	printf("#########################\n");
	printf("#  1.Add       2.Sub    #\n");
	printf("#  3.Mul       4.Div    #\n");
	printf("#######  0.exit  ########\n");
}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
int main()
{
	int x = 0;
	int y = 0;
	int input = 0;
	int(*p[5])(int, int) = { 0, Add, Sub, Mul, Div };//��������ָ��  ��Ϊ�±��Ǵ�0��ʼ�� ��һ��Ԫ����������ռ���ռ�
	do
	{
		menu();
		printf("��ѡ��\n");
		scanf("%d", &input);
		if (input>=1 && input<=4)
		{
			printf("������2������ ��\n");
			scanf("%d%d", &x, &y);
			int ret = p[input](x, y);//����
			printf("%d\n", ret);
		}
		else if (input == 0)
		{
			printf("�˳�\n");
		}
		else
		{
			printf("���������룺\n");
		}
	} while (input);
	return 0;
}
//switch (input)
//{
//case 1:
//	printf("������2������\n");
//	scanf("%d %d", &x, &y);
//	printf("%d\n", Add(x, y));
//	break;
//case 2:
//	printf("������2������\n");
//	scanf("%d %d", &x, &y);
//	printf("%d\n", Sub(x, y));
//	break;
//case 3:
//	printf("������2������\n");
//	scanf("%d %d", &x, &y);
//	printf("%d\n", Mul(x, y));
//	break;
//case 4:
//	printf("������2������\n");
//	scanf("%d %d", &x, &y);
//	printf("%d\n", Div(x, y));
//	break;
//case 0:
//	printf("�˳�����\n");
//	break;
//default:
//	printf("����������������룺\n");
//
//}
//	}while (input);