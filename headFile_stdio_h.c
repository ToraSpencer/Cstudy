#include "stdafx.h"

#include <stdio.h>
#include <stdlib.h>




// C��׼�⡪��stdio.h��׼���������ͷ�ļ���
/*
** stdio.h�������ĺ�����
**			�ļ�����			fopen	freopen		fflush	fclose
			�ַ����������	getchar
							putchar
						
**			���������� / ���	fread	fwrite
**			�Ǹ�ʽ������ / ���	fgetc	getc	fputc	 putc	ungetc	fgets	fputs
**			��ʽ������ / ���	scanf	 f scanf		sscanf		printf   fprintf   sprintf	perror
**			�ļ���λ			ftell	fseek	fgetpos		fsetpos		rewind
**			������			feof	ferror
**			�ļ�����			remove	rename	tmpfile
**
**
*/


/*
**	int getchar(void);
**	�������ӱ�׼�����豸д��һ���ַ�
**	���룺
**	�����
*/


/*
**	int putchar(void)
**	���������׼����豸����һ���ַ�
**	���룺
**	�����
*/


/*
**	char* fgets(char *str, int n, FILE *stream);
**
**	������ 
**	���룺
**			char* str;
**			int n;
**			File *stream;
**	�����
*/


/*
**	int scanf(const char* restrict format,...);
**	���������׼����豸����һ���ַ�
**	���룺
**			char* str;
**			int n;
**			File *stream;
**	�����
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
void set_fun_headFile_stdio_h(void);
static void test0(void);
static void test1(void);



/***************************************************************************
***************************************************************************/
// extern����




/***************************************************************************
***************************************************************************/
// ��������
void set_fun_headFile_stdio_h(void)
{
	pfun[0] = test0;
	pfun[1] = test1;
}


// test0���������ַ�����getchar����ʵ�֣���ӡ��������ַ�����putchar����ʵ�֣�ֱ��Ctrl+z������
static void test0(void)
{
	int ch;


	printf("\n\n\n");
	printf("test0���������ַ�����getchar����ʵ�֣���ӡ��������ַ�����putchar����ʵ�֣�ֱ��Ctrl+z������\n\n");


	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
		
}




static void test1(void)
{
	

}
