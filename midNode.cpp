#include<iostream>
#include<stack>
using namespace std;
#include "Node.cpp"

Node* takeInput()
{
	int data;
	cin>>data;
	Node *head=NULL;
	while(data!=-1)
	{
		Node *newnode=new Node(data);
		if(head==NULL){
			head=newnode;
		}
		else{
			Node *temp = head;
			while(temp->next !=NULL){
				temp=temp->next;
			}
			temp->next=newnode;
		}
		cin>>data;
	}
	return head;
}


int getlength(Node *head)
{
	int count=0;
	Node *temp=head;
	while(temp!=NULL){
		count++;
		temp=temp->next;
	}
//	cout<<count;
}


int midnode(Node *head)
{
	Node *slow=head;
	Node *first=head;
	int q=getlength(head);
	if(q%2==0){
		while(slow->next!=NULL && first->next->next!=NULL){
			slow=slow->next;
			first=first->next->next;
		}
	}
	else{
		while (first != NULL && first->next != NULL)
        {
            first = first->next->next;
            slow = slow->next;
        }
	}
	return slow->data;
	
}

void print(Node *head){
	Node *temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}


int main()
{
	Node *head= takeInput();
	print(head);
	cout<<"\n";
	int k=midnode(head);
	cout<<k;

	
}
