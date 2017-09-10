/* 这个程序在ubuntu gcc里编译的话，%d每次编译的输出不同，但都是一个非常大的负数，%.3f始终会输出0
 * 但是在windows codeclocks 里编译的话，%d每次编译始终输出4200608，%.3f始终会输出为0
 */
#include <stdio.h>
int main (void)
{
	int a;
	float b = 3.123456789;
	printf("int no. is %d and float no. is %.3f.\n");
	return 0;
}
