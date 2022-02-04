#include<iostream>
using namespace std;
#include "Double Node.cpp"

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

int getlength(Node *head)
{
	int count=0;
	Node *temp=head;
	while(temp!=NULL){
		count++;
		temp=temp->next;
	}
	cout<<count;
}



void deleteNode(Node *head, int position)
{
    if (head == NULL)
        return;
    Node *temp = head;
    if (position == 0)
    {
        head = temp->next;
        delete temp;            
        return;
    }
    for(int i = 0; temp != NULL && i < position - 1; i++)
        temp = temp->next;
    if (temp == NULL || temp->next == NULL)
        return;
     Node *next = temp->next->next;
    delete temp->next; 
    temp->next = next;
}




Node* insertnode(Node *head,int i,int data)
{
	Node *newnode=new Node(data);
	Node *temp=head;
	int count=0;
	if(i==0){
		newnode->next=head;
		head=newnode;
	}
	while(temp!=NULL && count<i-1){
		temp=temp->next;
		count++;
	}
	if(temp!=NULL){
//	Node *a=temp->next;
//	temp->next=newnode;
//	newnode->next=a;
     newnode->next=temp->next;
     temp->next=newnode;
 }
 return head;
}


int findnode(Node *head,int data){
	Node *temp=head;
	int index=0;
	while(temp!=NULL){
		if(temp->data==data){
		    return index;
		 }
		temp=temp->next;
		index++;
	}
	return -1;
}

Node* appendNNodes(Node* head, int n){
	Node *temp = head, *t = head;
	int i = -n;                             
	while(temp->next!=NULL){
		if(i>=0){                          
			t = t->next;
		}
		temp = temp ->next;
		i++;
	}
	temp->next = head;
	head = t->next; 
	t->next = NULL;                         

	return head;
}


void print(Node *head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
}


int main()
{
	Node *head = takeInput();
	print(head);
	cout<<"\n";
	int n;
	cin>>n;
	head=inserthead(head,n);
	print(head);
//	cout<<"length of the ll:";
//	getlength(head);
//	cout<<"\n";
//	cout<<"after insert node in ll:";
//	int i,data;
//	cin>>i>>data;
//	head=insertnode(head,i,data);
//	print(head);
//	cout<<"\n";
//	cout<<"delete node from the ll:";
//	int del;
//	cin>>del;
//	deleteNode(head,del);
//	print(head);
//	cout<<"\n"<<"find the node:"<<"\n";
//	int k;
//	cin>>k;
//	int m=findnode(head,k);
//	cout<<m<<endl;
//	int W;
//	cin>>W;
//	head=appendNNodes(head,W);
//	print(head);
	
}
