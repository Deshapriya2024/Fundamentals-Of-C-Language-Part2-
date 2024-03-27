//Steps to writing BST deletion code :
//BST Node creation 
#include<stdio.h>
#include<stdlib.h>
struct node{   
    int key;
    struct node *left;
    struct node *right;
};
    struct node *root = NULL;
//getNewNode function for creating new node and then return that new node address .
struct node *getNewNode(int val)
{
    struct node *newNode = malloc(sizeof(struct node));
    newNode->key   = val;
    newNode->left  = NULL;
    newNode->right = NULL;

    return newNode;
}
//insertion code for BST
struct node *insert(struct node *root, int val)
{
    if(root==NULL)
	{
		return getNewNode(val);
	}
    if(root->key<val)
	{
		root->right=insert(root->right,val);
	}
    else if(root->key>val)
	{
		root->left=insert(root->left,val);
	}   
return root;
}
//in-order function for printing purpose
void inorder(struct node *root)
{
    if(root == NULL)
        return;

    inorder(root->left);
    printf("%d ",root->key);
    inorder(root->right);
}

//code for find right min
int getrightmin(struct node *root)
{
	struct node *temp=root;
	while(temp->left!=NULL)
	{
		temp=temp->left;
	}
	return temp->key;
	
}
//code for deletion
struct node *removeNode(struct node *root,int val)
{
//Check the tree is empty
if (root==NULL)
	{return NULL;}
//Find the node to be deleted 
if(root->key < val)
        root->right = removeNode(root->right,val);

else if(root->key > val)
        root->left = removeNode(root->left,val);
else{
	//for leaf node
	if(root->left==NULL && root->right==NULL)
		{
		free(root);
		return NULL;
		}
		
	//for right child
    else if(root->left==NULL)
	{
		struct node *temp=root->right;
		free(root);
		return temp;
	}
	//for left child
    else if(root->right==NULL)
	{
		struct node *temp=root->left;
		free(root);
		return temp;
		}	
	else{
		int rightmin=getrightmin(root->right);
		root->key=rightmin;
		root->right=removeNode(root->right,rightmin);
	}	
}}
//main function code
int main()
{
    root = insert(root,100);
    root = insert(root,50);
    root = insert(root,30);
    root = insert(root,200);
    root = insert(root,150);
    root = insert(root,300);
    inorder(root);
    printf("\nAFTER LEAF NODE DELETION:\n");
	root=removeNode(root,150);
    inorder(root);
    printf("\nAFTER ONE CHILD LEFT NODE DELETION:\n");
	root=removeNode(root,50);
    inorder(root);
    printf("\nAFTER ONE CHILD RIGHT NODE DELETION:\n");
	root=removeNode(root,200);
    inorder(root);
    printf("\nAFTER TWO CHILD RIGHT NODE DELETION:\n");
	root=removeNode(root,100);
    inorder(root);
    return 0;
}






