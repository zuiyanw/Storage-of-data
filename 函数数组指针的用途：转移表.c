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
	int(*p[5])(int, int) = { 0, Add, Sub, Mul, Div };//创建数组指针  因为下标是从0开始的 第一个元素随意设置占个空间
	do
	{
		menu();
		printf("请选择\n");
		scanf("%d", &input);
		if (input>=1 && input<=4)
		{
			printf("请输入2个数字 ：\n");
			scanf("%d%d", &x, &y);
			int ret = p[input](x, y);//传参
			printf("%d\n", ret);
		}
		else if (input == 0)
		{
			printf("退出\n");
		}
		else
		{
			printf("请重新输入：\n");
		}
	} while (input);
	return 0;
}
//switch (input)
//{
//case 1:
//	printf("请输入2个数字\n");
//	scanf("%d %d", &x, &y);
//	printf("%d\n", Add(x, y));
//	break;
//case 2:
//	printf("请输入2个数字\n");
//	scanf("%d %d", &x, &y);
//	printf("%d\n", Sub(x, y));
//	break;
//case 3:
//	printf("请输入2个数字\n");
//	scanf("%d %d", &x, &y);
//	printf("%d\n", Mul(x, y));
//	break;
//case 4:
//	printf("请输入2个数字\n");
//	scanf("%d %d", &x, &y);
//	printf("%d\n", Div(x, y));
//	break;
//case 0:
//	printf("退出计算\n");
//	break;
//default:
//	printf("输入错误，请重新输入：\n");
//
//}
//	}while (input);