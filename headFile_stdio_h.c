#include "stdafx.h"

#include <stdio.h>
#include <stdlib.h>




// C标准库——stdio.h标准输入输出库头文件。
/*
** stdio.h所包含的函数：
**			文件访问			fopen	freopen		fflush	fclose
			字符输入输出：	getchar
							putchar
						
**			二进制输入 / 输出	fread	fwrite
**			非格式化输入 / 输出	fgetc	getc	fputc	 putc	ungetc	fgets	fputs
**			格式化输入 / 输出	scanf	 f scanf		sscanf		printf   fprintf   sprintf	perror
**			文件定位			ftell	fseek	fgetpos		fsetpos		rewind
**			错误处理			feof	ferror
**			文件操作			remove	rename	tmpfile
**
**
*/


/*
**	int getchar(void);
**	描述：从标准输入设备写入一个字符
**	输入：
**	输出：
*/


/*
**	int putchar(void)
**	描述：向标准输出设备读出一个字符
**	输入：
**	输出：
*/


/*
**	char* fgets(char *str, int n, FILE *stream);
**
**	描述： 
**	输入：
**			char* str;
**			int n;
**			File *stream;
**	输出：
*/


/*
**	int scanf(const char* restrict format,...);
**	描述：向标准输出设备读出一个字符
**	输入：
**			char* str;
**			int n;
**			File *stream;
**	输出：
*/










/***************************************************************************
***************************************************************************/
// 全局变量、类型定义



/***************************************************************************
***************************************************************************/
// extern变量
extern void(*pfun[100])(void);


/***************************************************************************
***************************************************************************/
// 函数声明
void set_fun_headFile_stdio_h(void);
static void test0(void);
static void test1(void);



/***************************************************************************
***************************************************************************/
// extern函数




/***************************************************************************
***************************************************************************/
// 函数定义
void set_fun_headFile_stdio_h(void)
{
	pfun[0] = test0;
	pfun[1] = test1;
}


// test0：输入半角字符——getchar函数实现，打印出输入的字符——putchar函数实现，直到Ctrl+z结束。
static void test0(void)
{
	int ch;


	printf("\n\n\n");
	printf("test0：输入半角字符——getchar函数实现，打印出输入的字符——putchar函数实现，直到Ctrl+z结束。\n\n");


	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
		
}




static void test1(void)
{
	

}
