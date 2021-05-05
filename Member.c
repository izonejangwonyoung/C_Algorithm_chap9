#include <stdio.h>
#include <string.h>
#include "Member.h"

#include "Member.h"

/*--- ȸ�� ��ȣ �� �Լ� ---*/
int MemberNoCmp(const Member *x, const Member *y)
{
    return x->no < y->no ? -1 : x->no > y->no ? 1 : 0;
}

/*--- ȸ�� �̸� �� �Լ� ---*/
int MemberNameCmp(const Member *x, const Member *y)
{
    return strcmp(x->name, y->name);
}

/*--- ȸ�� ������(��ȣ�� �̸�)�� ǥ��(�� �ٲ� ����) ---*/
void PrintMember(const Member *x)
{
    printf("%d %s", x->no, x->name);
}

/*--- ȸ�� ������(��ȣ�� �̸�)�� ǥ��(�� �ٲ� ����) ---*/
void PrintLnMember(const Member *x)
{
    printf("%d %s\n", x->no, x->name);
}

/*--- ȸ�� ������(��ȣ�� �̸�)�� �о� ���� ---*/
Member ScanMember(const char *message, int sw)
{
    Member temp;
    printf("%s하는 데이터를 입력하세요.\n", message);
    if (sw & MEMBER_NO) { printf("번호 : "); scanf("%d", &temp.no); }
    if (sw & MEMBER_NAME) { printf("이름 : "); scanf("%s", temp.name); }
    return temp;
}