#include<bits/stdc++.h>
#include<queue>
using namespace std;

template<typename T>
class treenode
{
	public:
		T data;
		vector<treenode<T>*>children;
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
 
void printnode(treenode<int>* root)
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
		printnode(root->children[i]);
	}
}

int main()
{
//	treenode<int>* root=new treenode<int>(1);
//	treenode<int>* node1=new treenode<int>(2);
//	treenode<int>* node2=new treenode<int>(3);
//	
//	root->children.push_back(node1);
//	root->children.push_back(node2);
    treenode<int>* root=takeinput();
	printnode(root);
}
