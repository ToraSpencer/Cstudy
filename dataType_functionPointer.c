#include "stdafx.h"

#include <stdlib.h>
#include <stdio.h>


/*
*	c语言的数据类型————函数指针
*
*
*
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
void set_fun_dataType_functionPointer(void);
static void foo(void);
static void goo(void);
static int add_intNum(int x, int y);
static void test0(void);
static void test1(void);



/***************************************************************************
***************************************************************************/
// extern函数




/***************************************************************************
***************************************************************************/
// 函数定义
void set_fun_dataType_functionPointer(void)
{
	pfun[0] = test0;
	pfun[1] = test1;

}




static void foo(void)
{
	printf("this is a string printed by the void function foo.\n");

}




static void goo(void)
{
	printf("this is a string printed by the void function goo.\n");


}



static int add_intNum(int x, int y)
{
	return (x + y);

}



// test0: 使用函数指针来调用函数：
static void test0(void)
{
	// 1. 声明不同类型的函数指针变量。
	void(*pfv)(void) = NULL;
	int(*pfi)(int x, int y) = NULL;
	int temp = 0;


	printf("\n\n\n");
	printf("test0: \n\t使用函数指针来调用函数：\n");


	// 2. 函数指针指向类型匹配的具体函数。
	pfv = foo;
	pfi = add_intNum;


	// 3. 通过函数指针来调用函数
	printf("now test the void function:\n");
	(*pfv)();
	printf("\n\n");

	printf("now test the int function:\n");
	temp = (*pfi)(3, 4);
	printf("(*pfi)(3,4) == %d\n", temp);

}



// test1: 函数指针组成的数组 & 函数指针的指针
static void test1(void)
{
	// 1. 声明函数指针数组、函数指针的指针。
	void(*pfv[10])(void) = { NULL };

	// 2. 声明函数指针的指针
	void(**ppfv)(void) = NULL;

	printf("\n\n\n");
	printf("test1: \n\t函数指针组成的数组 & 函数指针的指针:\n");


	// 3. 使用函数指针的指针来操作函数指针数组中的元素。
	ppfv = &pfv[0];
	*ppfv = foo;
	ppfv++;
	*ppfv = goo;


	// 4. 调用函数以检验：
	ppfv = &pfv[0];
	(**ppfv)();
	ppfv++;
	(**ppfv)();
}



