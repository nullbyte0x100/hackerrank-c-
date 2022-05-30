#include<stdio.h>
struct Node{
	int data;
	struct Node *left;
	struct Node *right;
};
struct Node *new(int data){
	struct Node *temp=(struct Node *)malloc(sizeof(struct Node));
	temp->data=data;
	temp->left=temp->right=NULL;
	return temp;
}
void display(struct Node *root){
	if (root!=NULL){
		display(root->left);
		printf("%d\n",root->data);
	}
}
struct Node *insert(struct Node *root,int data){
	if (root==NULL){
		root=new(data);
	}
	else if (data<=root->data){
		root->left=insert(root->left,data);
	}
	else{
		root->right=insert(root->right,data);
	}
	return root;
}
struct Node *search(struct Node *root,int data){
	if (root==NULL){
		return NULL;
	}
	else if (data<=root->data){
		return search(root->left,data);
	}
	else if (data>root->data){
		return search(root->right,data);
	}
	else{
		return root;
	}
}

