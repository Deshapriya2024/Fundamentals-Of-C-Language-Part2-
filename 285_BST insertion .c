//Steps to writing BST insertion code :
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
	return getNewNode(val);
    if(root->key<val)
	root->right=insert(root->right,val);
    else if(root->key>val)
	root->left=insert(root->left,val);
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
//main function code
int main()
{
    struct node *root = NULL;
    root = insert(root,100);
    root = insert(root,50);
    root = insert(root,200);
    root = insert(root,150);
    root = insert(root,300);
    root = insert(root,400);
    root = insert(root,500);
    root = insert(root,600);
    root = insert(root,700);
    root = insert(root,800);
    inorder(root);
}






