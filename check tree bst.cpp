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

bool isbst(binarytreenode<int>*root,int min=INT_MIN,int max=INT_MAX)
{
	if(root==NULL){
		return true;
	}
	if(root->data < min || root->data > max){
		return false;
	}
	bool isleftok=isbst(root->left,min,root->data-1);
	bool isrightok=isbst(root->right,root->data,max);
	return isleftok && isrightok;
}

int main()
{
    binarytreenode<int>* root= takeinput();
	print(root);
    cout<<isbst(root);
}
