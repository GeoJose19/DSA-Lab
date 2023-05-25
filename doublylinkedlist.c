 #include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *llink,*rlink;
}*first=NULL,*last=NULL,*temp=NULL,*trav=NULL;

void create()
{
temp=(struct node*)malloc(sizeof(struct node));
printf("Enter data:");
scanf("%d",&temp->data);
temp->llink=NULL;
temp->rlink=NULL;
if(first==NULL)
{
first=temp;
last=temp;
}
else
{
last->rlink=temp;
temp->llink=last;
last=temp;
}
}
void display()
{
temp=first;
printf("NULL");
while(temp!=NULL)
{
printf(" %d<---->",temp->data);
temp=temp->rlink;
}
printf(" NULL\n");
}
void insert_begin()
{
temp=(struct node*)malloc(sizeof(struct node));
printf("Enter data");
scanf("%d",&temp->data);
temp->llink=NULL;
temp->rlink=NULL;
if(first==NULL)
{
first=temp;
last=temp;
}
else
{
temp->rlink=first;
first->llink=temp;
first=temp;
}
}
void insert_at_end()
{
temp=(struct node*)malloc(sizeof(struct node));
printf("Enter data\n");
scanf("%d",&temp->data);
temp->llink=NULL;
temp->rlink=NULL;
if(first==NULL)
{
first=temp;
last=temp;
}
else
{
last->rlink=temp;
temp->llink=last;
last=temp;
}
}
void insert_at_pos()
{
int pos,i;
printf("Enter the position\n");
scanf("%d",&pos);
if(pos==1)
{
insert_begin();
}
else
{
trav=first;
for(i=1;i<pos;i++)
{
trav=trav->rlink;
}
if(trav==NULL)
{
insert_at_end();
}
else
{
temp=(struct node*)malloc(sizeof(struct node));
printf("Enter data\n");
scanf("%d",&temp->data);
temp->llink=NULL;
temp->rlink=NULL;
trav->llink->rlink=temp;
temp->llink=trav->llink;
temp->rlink=trav;
trav->llink=temp;
}
}
}

void del_from_begin()
{
if(first==NULL)
{
printf("List is empty\n");
}
else
{
trav=first;
first=first->rlink;
first->llink=NULL;
trav->rlink=NULL;
free(trav);
}
}

void del_from_end()
{
if(first==NULL)
{
printf("List is empty\n");
}
else
{
trav=first;
while(trav->rlink!=NULL)
{
trav=trav->rlink;
}
trav->llink->rlink=NULL;
last=trav->llink;
trav->llink=NULL;
free(trav);
}
}
void del_from_pos()
{
int pos,i;
printf("Enter the position\n");
scanf("%d",&pos);
if(pos==1)
{
del_from_begin();
}
else
{
trav=first;
for(i=1;i<pos;i++)
{
trav=trav->rlink;
}
if(trav==NULL)
{
printf("position beyond list\n");
}
else if(trav->rlink==NULL)
{
del_from_end();
}
else
{
if(first==NULL)
{
printf("List is empty\n");
}
else
{
trav->llink->rlink=trav->rlink;
trav->rlink->llink=trav->llink;
trav->llink=NULL;
trav->rlink=NULL;
free(trav);
}
}
}
}
void main()
{
int ch;
do
{
printf("\nMenu\n----\n1. Create\n2. Display\n3. Insert At Beginning\n4. Insert At End\n5. Insert At a Specified Position\n6. Delete From Beginning\n7. Delete From End\n8. Delete From a Specified Position\n9. Exit");
printf("\nEnter the choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
    create();
    display();
    break;
case 2:
    display();
    break;
case 3:
    insert_begin();
    display();
    break;
case 4:
    insert_at_end();
    display();
    break;
case 5:
    insert_at_pos();
    display();
    break;
case 6:
    del_from_begin();
    display();
    break;
case 7:
    del_from_end();
    display();
    break;
case 8:
    del_from_pos();
    display();
    break;
case 9:
    exit(0);
default:
    printf("There is no such operation:\n");
}
}
while(1);
}

