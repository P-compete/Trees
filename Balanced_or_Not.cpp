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

int height(node *current)
{
  queue<node *>q;
  q.push(current);
  int ans=0;
  q.push(NULL);
  while(!q.empty())
  {
	  node *temp=q.front();
	  q.pop();
	  if(temp==NULL){ans+=1;}
	  if(temp!=NULL)
	  {
		  if(temp->left!=NULL){q.push(temp->left);}
		  if(temp->right!=NULL){q.push(temp->right);}
	  }
	  else if(!q.empty()){q.push(NULL);}
	  
  }
	
return ans;

}

int main()
{
  node *root=new node(1);
  root->left=new node(3);
  root->right=new node(2);
  root->left->left=new node(5);
  root->right->left=new node(4);
  
  int lheight=height(root->left);
  int rheight=height(root->right);

if(abs(lheight-rheight)==1 || abs(lheight-rheight)==0)
  {
	cout<<"Balanced";
  }
 else
  {
	  cout<<"Not Balanced";
  } 

return 0;
}

