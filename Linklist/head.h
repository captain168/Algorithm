#ifndef __HEAD_H__
#define __HEAD_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int Datatype;
typedef struct node
{
	Datatype nodeData;	//保存节点数据
	struct node * nodeNest; //保存下一个节点到首地址
}LinkNode;

extern LinkNode *create_empty_linklist(void);
extern int inset_tail_linklist(LinkNode *head, Datatype data);
extern int print_linklist(LinkNode *head);


#endif
