#include<bits/stdc++.h>
using namespace std;

template<typename T>
class binarytreenode{
	public:
		T data;
		binarytreenode* right;
		binarytreenode* left;
		binarytreenode(T data){
			this->data=data;
			left=NULL;
			right=NULL;
		}
};

void print(binarytreenode<int>* root)
{
	if(root==NULL){
		return;
	}
	cout<<root->data<<":";
	if(root->left!=NULL){
		cout<<"L"<<root->left->data;
	}
	if(root->right!=NULL){
		cout<<"R"<<root->right->data;
	}
	cout<<endl;
	print(root->left);
	print(root->right);
}

//binarytreenode<int>* takeinput()
//{
//	int rootdata;
//	cout<<"Enter the root:"<<endl;
//	cin>>rootdata;
//	if(rootdata==-1){
//		return NULL;
//	}
//	binarytreenode<int>* root=new binarytreenode<int>(rootdata);
//	binarytreenode<int>* leftchild=takeinput();
//	binarytreenode<int>* rightchild=takeinput();
//	root->left=leftchild;
//	root->right=rightchild;
//	
//	return root;
//}

binarytreenode<int>* takeinput()
{
	int rootdata;
	cout<<"Enter thr root:"<<endl;
	cin>>rootdata;
	binarytreenode<int>* root=new binarytreenode<int>(rootdata);
	queue<binarytreenode<int>*> pendingnode;
	pendingnode.push(root);
	while(pendingnode.size()!=0){
		binarytreenode<int>* font= pendingnode.front();
		pendingnode.pop();
		cout<<"Enter left child of "<<font->data<<endl;
		int leftchild;
		cin>>leftchild;
		if(leftchild!=-1){
			binarytreenode<int>* child=new binarytreenode<int>(leftchild);
			font->left=child;
			pendingnode.push(child);
		}
		cout<<"Enter right child of "<<font->data<<endl;
		int rightchild;
		cin>>rightchild;
		if(rightchild!=-1){
			binarytreenode<int>* child=new binarytreenode<int>(rightchild);
			font->right=child;
			pendingnode.push(child);
		}
	}
	return root;
}

int main()
{
//	binarytreenode<int>* root =new binarytreenode<int>(1);
//	binarytreenode<int>* node1=new binarytreenode<int>(2);
//	binarytreenode<int>* node2=new binarytreenode<int>(3);
//	root->left=node1;
//	root->right=node2;

    binarytreenode<int>* root= takeinput();
	print(root);
	
}