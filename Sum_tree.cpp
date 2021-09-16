#include<bits/stdc++.h>
using namespace std;

struct node
{ int data;
	node *left,*right;

 node(int item)
 {
	 data=item;
	 left=NULL;
	 right=NULL;
 }
 
};

int sum(node *t)
{
	if(t==NULL){return 0;}
	
	int old=t->data;
	
	t->data=sum(t->left)+sum(t->right);
	
	return t->data+old;
	
 
 }

int main()
{
  node *root=new node(1);
  root->left=new node(3);
  root->right=new node(2);
  root->left->left=new node(5);
  root->right->left=new node(4);
  sum(root);


return 0;
}
