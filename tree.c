
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
struct Node *insert(struct Node * 
