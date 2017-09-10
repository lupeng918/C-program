#include <stdio.h>
int main (void)
{
	int a, b, c, d;
	scanf("please input a:%d", &a);
	scanf("please input b:%d", &b); /**连续两个scanf函数，如何输入两个数值？此程序得输出始终为0*****/
         	c = a *b;
	printf("Result of c is :%d.\n", c);
	return 0;
}
