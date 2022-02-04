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


bool ispalindrome(Node *head)
{
	Node *temp=head;
	stack<int> s;
	
	while(temp!=NULL){
		s.push(temp->data);
		temp=temp->next;
	}

	while(head!=NULL){
			int i=s.top();
			if(i!=head->data){
			     return false;
			 }
	        s.pop();
	        head=head->next;
    }
	return true;
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
	int ans=ispalindrome(head);
	if(ans==1){
		cout<<"Palindrom LL"<<endl;
	}
	else{
		cout<<"Not Palindrome LL"<<endl;
	}
	
}
