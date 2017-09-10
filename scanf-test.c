/*连续两个scanf函数，如何输入两个数值？ubuntu gcc 的输出始终为0
 *此程序在windows codeblocks 里编译，无论怎么输入，最终的输出都是496
 */
#include <stdio.h>
int main (void)
{
	int a, b, c, d;
	scanf("please input a:%d", &a);
	scanf("please input b:%d", &b); 
         	c = a *b;
	printf("Result of c is :%d.\n", c);
	return 0;
}
