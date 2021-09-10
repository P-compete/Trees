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

void bfs(node *root)
{
	queue<node *>q;
	q.push(root);
	while(!q.empty())
	{
		node *t=q.front();
		cout<<t->data<<" ";
		q.pop();
		if(t->left!=NULL)
		 {q.push(t->left);}
		 if(t->right!=NULL)
		 {q.push(t->right);}
		
	}
}

int main()
{
  node *root=new node(1);
  root->left=new node(3);
  root->right=new node(2);
  root->left->left=new node(5);
  root->right->left=new node(4);
  
  bfs(root);

return 0;
}

