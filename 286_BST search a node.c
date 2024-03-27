//Steps to writing BST search a node code :
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
//searching a node
int search(struct node * root,int key)
{
	if(root==NULL)
		return 0;

	if(root->key==key)
		return 1;
	
	if(root->key<key)
		return search(root->right,key);
	
	else
		return search(root->left,key);	
}

//main function code
int main()
{
    root = insert(root,100);
    root = insert(root,50);
    root = insert(root,200);
    inorder(root);
    int s=search(root,200);
    if(s==1){
    	printf("\nsearch success 200 present inside the tree.");
	}
	else{
	printf("failure");
	}
 return 0;   
}
