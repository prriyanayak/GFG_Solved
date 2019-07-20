{
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
/* Linked list Node */
struct Node
{
    int data;
    struct Node* next;
};
 void reorderList(struct Node* head) ;
/* Function to create a new Node with given data */
struct Node *newNode(int data)
{
    struct Node *new_Node = (struct Node *) malloc(sizeof(struct Node));
    new_Node->data = data;
    new_Node->next = NULL;
    return new_Node;
}
void printList(struct Node *Node)
{
    while(Node != NULL)
    {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("
");
}
void freeList(struct Node *head)
{
	struct Node* temp;
    while(head != NULL)
    {
        
        temp=head;
        head = head->next;
        free(temp);
    }
  
}
int main(void)
{
   int t,n,m,i,x;
   cin>>t;
   while(t--)
   {
	   struct Node* temp,*head;
	    cin>>n;
	    cin>>x;
	    head=newNode(x);
	    temp=head;
	    for(i=0;i<n-1;i++)
	    {
			cin>>x;
			temp->next=newNode(x);
			temp=temp->next;
			}
	   
		reorderList(head);
	    printList(head);
freeList(head);
   }
   return 0;
}

}
/*This is a function problem.You only need to complete the function given below*/
/* Following is the Linked list node structure */
/*struct Node
{
    int data;
    Node* next;
};*/

void reverseList(Node** list)
{
    Node* prev = NULL;
    Node* curr = *list;
    Node* next;
    
    while(curr != NULL)
    {
        next       = curr->next;
        curr->next = prev;
        prev       = curr;
        curr       = next;
    }
    *list = prev;
}
void reorderList(Node* head) 
{
    Node* slow = head;
    Node *fast = slow->next;
    
    while(fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    
    Node* firstHalf  = head;
    Node* secondHalf = slow->next;
    slow->next = NULL;
    
    reverseList(&secondHalf);
    
    head = newNode(0);
    
    Node* curr = head;
    while(firstHalf || secondHalf)
    {
        if (firstHalf)
        {
            curr->next = firstHalf;
            curr       = curr->next;
            firstHalf  = firstHalf->next;
        }
        if (secondHalf)
        {
            curr->next  = secondHalf;
            curr        = curr->next;
            secondHalf  = secondHalf->next;
        }
    }
    head = head->next;
}
