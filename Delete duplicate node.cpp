#include<iostream>
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


void delduplicatenode(Node *head)
{
	Node *current=head;
	Node *nextTonext;
	if(current==NULL)
	     return;
	while(current->next!=NULL){
		if(current->data==current->next->data){
			nextTonext=current->next->next;
			delete  current->next;
			current->next=nextTonext;
		}
		else{
			current=current->next;
		}
	}
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
	cout<<"delete the same node:"<<endl;
	delduplicatenode(head);
	print(head);
	
}
