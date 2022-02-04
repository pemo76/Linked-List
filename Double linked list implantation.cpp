#include<bits/stdc++.h>
using namespace std;
#include "Double Node.cpp"

Node* takeinput()
{
	int data;
	cin>>data;
	Node *head=NULL;
	while(data!=-1){
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
			newnode->prev=temp;
		}
		cin>>data;
	}
	return head;
}

Node* inserthead(Node *head,int data)
{
	Node *newhead =new Node(data);
	newhead->next=head;
	if(head!=NULL){
		head->prev=newhead;
	}
	head=newhead;
	return head;
}

void print(Node *head){
	Node *temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		head=temp->next;
	}
	cout<<endl;
}



int main()
{
	Node *head = takeinput();
	print(head);
	cout<<"\n";
	int n;
	cin>>n;
	head=inserthead(head,n);
	print(head);
}
