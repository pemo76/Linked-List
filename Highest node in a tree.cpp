#include<bits/stdc++.h>
using namespace std;

template<typename T>
class treenode{
	public:
		T data;
		vector<treenode<int>*>children;
		treenode(T data){
			this->data=data;
		}
};

 treenode<int>* takeinput()
 {
 	int rootdata;
 	cout<< "Enter root"<<endl;
 	cin>>rootdata;
 	treenode<int>* root=new treenode<int>(rootdata);
 	queue<treenode<int>*> pendingnode;
 	pendingnode.push(root);
 	while(pendingnode.size()!=0){
 		treenode<int>* front=pendingnode.front();
 		pendingnode.pop();
 		cout<<"Enter num of children of "<<front->data<<endl;
 		int n;
 	    cin>>n;
    	for(int i=0;i<n;i++){
    	int childdata;
    	cout<<"Enter "<<i<<"th child of "<<front->data<<endl; 
    	cin>>childdata;
 		treenode<int>* child= new treenode<int>(childdata);
 		front->children.push_back(child);
 		pendingnode.push(child);
 		}
	 }
	 return root;
 }

void print(treenode<int>* root)
{
	if(root==NULL){
		return;
	}
	cout<<root->data<<":";
    	for(int i=0;i<root->children.size();i++){
		cout<<root->children[i]->data<<",";
	}
	cout<<endl;
	for(int i=0;i<root-> children.size();i++){
		print(root->children[i]);
	}
}

int numberNodes(treenode<int>* root){
	int MAX=INT_MIN;
	for(int i=0;i<root->children.size();i++){
		int m=numberNodes(root->children[i]);
		MAX=max(m,MAX);
	}
	MAX=max(root->data,M);
	return MAX;
}

int main()
{
	treenode<int>* root=takeinput();
	print(root);
	cout<<"Number of total node"<<endl;
	cout<<numberNodes(root);
}
