#include<bits/stdc++.h>
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
 
void printnode(treenode<int>* root)
{
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
	treenode<int>* root=new treenode<int>(1);
	treenode<int>* node1=new treenode<int>(2);
	treenode<int>* node2=new treenode<int>(3);
	
	root->children.push_back(node1);
	root->children.push_back(node2);
	printnode(root);
}
