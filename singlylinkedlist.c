#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *link;
}*first=NULL,*last=NULL,*temp=NULL,*trav=NULL,*prev=NULL;
void create()
{
 temp=(struct node*)malloc(sizeof(struct node));
 printf("Enter data:");
 scanf("%d",&temp->data);
 temp->link=NULL;
 if(first==NULL)
 {
  first=temp;
  last=temp;
 }
 else
 {
  last->link=temp;
  last=temp;
 }
}

void display()
{
 temp=first;
 while(temp!=NULL)
 {
  printf(" %d---->",temp->data);
  temp=temp->link;
 }
 printf(" NULL");
} 
void insert_begin() 
{ 
    temp=(struct node*)malloc(sizeof(struct node)); 
    printf("Enter data"); 
    scanf("%d",&temp->data); 
    temp->link=NULL; 
    if(first==NULL) 
    {
        first=temp; 
        last=temp; 
    } 
    else 
    { 
        temp->link=first; 
        first=temp; 
    }
    } 
    void insert_at_end() 
{ 
    temp=(struct node*)malloc(sizeof(struct node)); 
    printf("Enter data"); 
    scanf("%d",&temp->data); 
    temp->link=NULL; 
    if(first==NULL) 
    {
        first=temp; 
        last=temp; 
    } 
    else 
    {  
        last->link=temp;
        last=temp; 
    }
    } 
    void insert_at_pos() 
{  
    int pos,i=0;
    
    printf("Enter the position"); 
    scanf("%d",&pos); 
    if(pos==0) 
    {
     insert_begin();
    }
    else 
    {   prev=NULL;
        trav=first;
        for(i=0;i<pos;i++) 
        { 
            prev=trav;
            trav=trav->link; 
        } 
        if(trav==NULL) 
        { 
            insert_at_end(); 
        } 
        else 
        { 
            temp=(struct node*)malloc(sizeof(struct node)); 
            printf("Enter data"); 
           scanf("%d",&temp->data); 
          temp->link=NULL; 
        prev->link=temp; 
        temp->link=trav;
        }
    }
    } 
    void del_from_begin() 
    {  
        if(first==NULL)
        { 
            printf("List is empty"); 
        }
        else 
        {
        trav=first;
        first=first->link;
        trav->link=NULL; 
        free(trav); 
        }
    } 
    void del_from_end()
    { 
        if(first==NULL)
        { 
            printf("List is empty"); 
        }
        else 
        { 
            prev=NULL;
            trav=first; 
            while(trav->link!=NULL) 
            { 
                prev=trav;
                trav=trav->link; 
            } 
            prev->link=NULL; 
            last=prev; 
            free(trav); 
        }
    } 
    void del_from_pos()
    { 
        int pos,i=0;
    
    printf("Enter the position"); 
    scanf("%d",&pos); 
    if(pos==0) 
    {
     del_from_begin();
    }
    else 
    {   prev=NULL;
        trav=first;
        for(i=0;i<pos;i++) 
        { 
            prev=trav;
            trav=trav->link; 
        } 
        if(trav==NULL) 
        { 
            printf("position beyond list");
        } 
        else if(trav->link==NULL)
        { 
            
        del_from_end();
        } 
        else 
        { 
            if(first==NULL) 
            { 
                printf("List is empty"); 
            }
            else
            {
            prev->link=trav->link; 
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
    break;
   case 2:
    display();
    break;
   case 3: 
   insert_begin(); 
   break; 
   case 4: 
   insert_at_end(); 
   break;
   case 5: 
   insert_at_pos(); 
   break; 
   case 6: 
   del_from_begin(); 
   break; 
   case 7: 
   del_from_end();
   break;
   case 8:
   del_from_pos();
   break;
   case 9:
   exit(0); 
      default:
    printf("There is no such operation:");
  }
 }
 while(1);
}
