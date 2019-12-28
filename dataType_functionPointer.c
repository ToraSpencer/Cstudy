#include "stdafx.h"

#include <stdlib.h>
#include <stdio.h>


/*
*	c���Ե��������͡�����������ָ��
*
*
*
*/

/***************************************************************************
***************************************************************************/
// ȫ�ֱ��������Ͷ���



/***************************************************************************
***************************************************************************/
// extern����
extern void(*pfun[100])(void);


/***************************************************************************
***************************************************************************/
// ��������
void set_fun_dataType_functionPointer(void);
static void foo(void);
static void goo(void);
static int add_intNum(int x, int y);
static void test0(void);
static void test1(void);



/***************************************************************************
***************************************************************************/
// extern����




/***************************************************************************
***************************************************************************/
// ��������
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



// test0: ʹ�ú���ָ�������ú�����
static void test0(void)
{
	// 1. ������ͬ���͵ĺ���ָ�������
	void(*pfv)(void) = NULL;
	int(*pfi)(int x, int y) = NULL;
	int temp = 0;


	printf("\n\n\n");
	printf("test0: \n\tʹ�ú���ָ�������ú�����\n");


	// 2. ����ָ��ָ������ƥ��ľ��庯����
	pfv = foo;
	pfi = add_intNum;


	// 3. ͨ������ָ�������ú���
	printf("now test the void function:\n");
	(*pfv)();
	printf("\n\n");

	printf("now test the int function:\n");
	temp = (*pfi)(3, 4);
	printf("(*pfi)(3,4) == %d\n", temp);

}



// test1: ����ָ����ɵ����� & ����ָ���ָ��
static void test1(void)
{
	// 1. ��������ָ�����顢����ָ���ָ�롣
	void(*pfv[10])(void) = { NULL };

	// 2. ��������ָ���ָ��
	void(**ppfv)(void) = NULL;

	printf("\n\n\n");
	printf("test1: \n\t����ָ����ɵ����� & ����ָ���ָ��:\n");


	// 3. ʹ�ú���ָ���ָ������������ָ�������е�Ԫ�ء�
	ppfv = &pfv[0];
	*ppfv = foo;
	ppfv++;
	*ppfv = goo;


	// 4. ���ú����Լ��飺
	ppfv = &pfv[0];
	(**ppfv)();
	ppfv++;
	(**ppfv)();
}



