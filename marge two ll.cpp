#include<bits/stdc++.h>
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

Node* margell(Node *h1,Node *h2)
{
	Node *result=NULL;
	if(h1==NULL)
	     return h2;
	else if(h2==NULL)
	     return h1;
	if(h1->data <= h2->data){
		result =h1;
		result->next=margell(h1->next,h2);
	}
	else{
		result =h2;
		result->next=margell(h1,h2->next);
	}
	
	return result;
}



void print(Node *head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
}


int main()
{
	Node *head1 = takeInput();
	print(head1);
	cout<<"\n";
	Node *head2 = takeInput();
	print(head2);
	cout<<"\n";
	Node *ans=margell(head1,head2);
	print(ans);
}
