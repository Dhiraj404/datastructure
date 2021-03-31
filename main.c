#include<stdio.h>
#include <stdlib.h>


struct node
{

        int data;
        struct node *next;

};

struct node *head1 = NULL;
struct node *head2 = NULL;
void merge()
{

        struct node *temp1 = head1;
        struct node *temp2 = head2;


        struct node *holder1 = NULL;
        struct node *holder2 = NULL;


        while(temp1!=NULL && temp2!=NULL)
        {

                holder1=temp1->next;


                temp1->next=temp2;


                if(holder1!=NULL)
                {

                        holder2=temp2->next;
                        temp2->next=holder1;
                }
                temp1=holder1;
                temp2=holder2;

        }
}

void print(struct node *temp)
{

        while(temp!=NULL)
        {
                printf("%d ",temp->data);
                temp=temp->next;
        }
}

int main()
{
        struct node *one = (struct node*)malloc(sizeof(struct node));
        struct node *two = (struct node*)malloc(sizeof(struct node));
        struct node *three = (struct node*)malloc(sizeof(struct node));
        struct node *four = (struct node*)malloc(sizeof(struct node));
        struct node *five = (struct node*)malloc(sizeof(struct node));
        struct node *six = (struct node*)malloc(sizeof(struct node));
        struct node *seven = (struct node*)malloc(sizeof(struct node));


        head1=one;
        head2=two;
        //head1 points to first node of first linked list
        //head2 points to first node of second linked list

        one->data=1;
        one->next=three;

        two->data=2;
        two->next=four;

        three->data=3;
        three->next=five;

        four->data=4;
        four->next=six;

        five->data=5;
        five->next=NULL;

        six->data=6;
        six->next=NULL;
        //Last node of second input linked list

        seven->data=7;
        seven->next=NULL;


        printf("\nBefore Merging\n");
        printf("\nInput: Linked List A: ");
        print(head1);

        printf("\nInput: Linked List B: ");
        print(head2);

        merge();


        printf("\n\nAfter Merging\n");
        printf("\nOutput\n: Linked List in ascending order: ");
        print(head1);

        return 0;
}

