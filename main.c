#include "stdafx.h"

#include <stdlib.h>
#include <stdio.h>



/*
**	general note:
**		1） testX()函数都应该声明为static函数，这样只在其所在文件内有效。若在全项目内都有效的话，
**			 不同源文件里都定义了相同的test0,test1...会出现duplicate symbold的错误。
**
**
**
*/


/***************************************************************************
***************************************************************************/
// 全局变量、类型定义
void(*pfun[100])(void) = { NULL };


/***************************************************************************
***************************************************************************/
// extern变量



/***************************************************************************
***************************************************************************/
// 函数声明



/***************************************************************************
***************************************************************************/
// extern函数
extern void reset_pfun(void);
extern void traverse_pfun(void);

extern void set_fun_dataType_functionPointer(void);
extern void set_fun_dataType_string(void);
extern void set_fun_headFile_stdio_h(void);




/***************************************************************************
***************************************************************************/
// 函数定义




int main()
{
	reset_pfun();


	// 开始测试函数
	//set_fun_dataType_functionPointer();
	set_fun_dataType_string();
	//set_fun_headFile_stdio_h();
	traverse_pfun();



	// 结束测试函数





	getchar();
	return 0;




}
