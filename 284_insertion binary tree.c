#include<stdio.h>
#include<stdlib.h>
typedef struct Binarytree{
	struct Binarytree *left;
	int data;
	struct Binarytree *right;	
} node;
node *root=NULL;
int check=0;
//for inseetion
node* insert(node *proot,int val)
{
	node *newnode=(node*)malloc(sizeof(node));
	newnode->data=val;
	if(proot==NULL)
	{
		newnode->left=newnode->right=NULL;
		proot=newnode;
		check++;
	}
	else
	{
		if(check%2!=0)
		{
			proot->left=insert(proot->left,val);
		}
		else
		{
			proot->right=insert(proot->right,val);
		}
	}
	return proot;
}
//for display
void display(node *root)
{ 
	if(root!=NULL)
	{
		display(root->left);
		printf("%d  ",root->data);
		display(root->right);
	}
}
int main()
{
	root=insert(root,10);
	root=insert(root,20);
	root=insert(root,30);
	root=insert(root,40);
	root=insert(root,50);
	root=insert(root,60);
	root=insert(root,70);
	display(root);
	return 0;
	
}
