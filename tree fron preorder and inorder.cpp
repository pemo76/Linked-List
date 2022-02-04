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

binarytreenode<int>* binarytreehelper(int* in,int* pre,int inS,int inE,int preS,int preE)
{
	if(inS>inE){
		return NULL;
	}
	int rootdata=pre[preS];
	int rootindex=-1;
	for(int i=inS;i<=inE;i++){
		if(in[i]=rootindex){
			rootindex=i;
			break;
		}
	}
	int linS=inS;
	int linE=rootindex-1;
	int lpreS=preS+1;
	int lpreE=linE-linS+lpreS;
	int RpreS=lpreE+1;
	int RpreE=preE;
	int RinS=rootindex+1;
	int RinE=inE;
	
	
	
	binarytreenode<int>* root=new binarytreenode<int>(rootdata);
	root->left=binarytreehelper(in,pre,linS,linE,lpreS,lpreE);
	root->right=binarytreehelper(in,pre,RinS,RinE,RpreS,RpreE);
	return root;
}

binarytreenode<int>* buildtree(int* in,int* pre,int size)
{
	return binarytreehelper(in,pre,0,size-1,0,size-1);
}



int main()
{
    int in[]={4,2,5,1,8,6,9,3,7};
    int pre[]={1,2,4,5,3,6,8,9,7};
    binarytreenode<int>* root=buildtree(in,pre,9);
    print(root);
}
