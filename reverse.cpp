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


void reverse(Node *head)
{
	if(head==NULL)
	    return;
	reverse(head->next);
	cout<<head->data<<" ";
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
	cout<<"reverse node:"<<endl;
	reverse(head);
	
}
