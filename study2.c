//数据类型
//计算机语言 - 写程序 - 解决生活中的问题
//必须有能力来描述生活中的问题！
//购物商城 - 上架商品，价格 - 15.6元 - 小数 1.56*10^1
//年龄 - 50
//在C语言中，小数被称为：浮点数
//          整数被称为整型
//


//char         字符数据类型
//short        短整型
//int          整型
//long         长整型
//long long    更长的整型
//float        单精度浮点型
//double       双精度浮点型

//a
//"a" - 字符a

#include <stdio.h>
//int main()
//{    //字符类型
//	char ch = "a";
//	//整型
//	int age = 20;
//		//短整型
//		short num = 10;
//	//long
//	//long long
//
//    //单精度浮点型
//	float weight = 55.5;
//	//双精度浮点型
//	double d = 0.0;
//
//	return 0;
//}

int main()
{

	printf("比特\n");
	printf("hehe\n");
	printf("%d\n", 100); //打印一个整数 - &d
	//sizeof - 关键字 - 操作符 - 计算类型或者变量所占空间的大小
	printf("%d\n", sizeof(char));

	return 0;
}