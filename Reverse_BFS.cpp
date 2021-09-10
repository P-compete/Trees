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

void Reverse_bfs(node *root)
{
	queue<node *>q;
	stack<int>s;
	q.push(root);
	while(!q.empty())
	{
		node *t=q.front();
		//cout<<t->data<<" ";
		s.push(t->data);
		q.pop();
		
		if(t->right!=NULL)
		 {q.push(t->right);}
		if(t->left!=NULL)
		 {q.push(t->left);}
		 
		
	}
 while(!s.empty())
 {
	 cout<<s.top()<<" ";
	 s.pop();
 }	
	
}

int main()
{
  node *root=new node(1);
  root->left=new node(3);
  root->right=new node(2);
  root->left->left=new node(5);
  root->right->left=new node(4);
  
  Reverse_bfs(root);

return 0;
}
