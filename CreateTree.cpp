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


int main()
{
  node *root=new node(1);
  root->left=new node(2);
  root->right=new node(3);
  root->left->left=new node(5);
  root->right->left=new node(4);

  cout<<"Done with Insertion:";

return 0;
}

