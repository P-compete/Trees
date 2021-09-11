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

void inorder(node *t)
{
	
	stack<node *>st;
	node *current=t;
	
	while(!st.empty() || current!=NULL)
     {
		 if(current!=NULL)
		 {
		 st.push(current);
		 current=current->left;
	     }
	     else
	      {
			  current=st.top();
			  st.pop();
			  cout<<current->data<<" ";
			  current=current->right;
		  }
	     
	 }	
	
}

int main()
{
  node *root=new node(1);
  root->left=new node(2);
  root->right=new node(3);
  root->left->left = new node(4);
    root->right->left = new node(5);
    root->right->right = new node(6);
    root->right->left->left = new node(7);
    root->right->left->right = new node(8);
 
 inorder(root);

return 0;
}
	
