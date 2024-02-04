#include<stdio.h>
#include<stdlib.h>
typedef struct tree{
	int data;
	struct tree*left,*right;
}t;
t *root;
void insert(t*root,t*newnode){
	if(*root==NULL){
		*root=*newnode;
	}
	else if((*root)->data>(*newnode)->data){
		insert(&(*root)->left,&(*newnode));
	}
	else{
		insert(&(*root)->right,&(*newnode));
	}
}
void inorder(t*root){
	if(root!=NULL){
		inorder(root->left);
		printf("%d",root->data);
		inorder(root->right);
	}
}
void postorder(t*root){
	if(root!=NULL){
		inorder(root->left);
		inorder(root->right);
		printf("%d",root->data);	
	}
}
void preorder(t*root){
	if(root!=NULL){
		printf("%d",root->data);
		inorder(root->left);
		inorder(root->right);	
	}
}
t*find_min(struct tree*r){
	if(r==NULL)
	return NULL;
	else if(r->left!=NULL)
	return find_min(r->left);
	return r;
}
struct tree*deltree(struct tree*r,int d){
	if(r==NULL)
	return NULL;
	if(d>r->data)
	r->right=deltree(r->right,d);
	else if(d<r->data)
	r->left=deltree(r->left,d);
	else{
		if(r->left==NULL && r->right==NULL){
			free(r);
			return NULL;
		}
		else if(r->left==NULL||r->right==NULL){
			struct tree*temp1;
			if(temp1->left==NULL)
			temp1=r->right;
			else
			temp1=r->left;
			free(r);
			return temp1;
		}
		else{
			struct tree*temp=find_min(r->right);
			r->data=temp->data;
			r->right=deltree(r->right,temp->data);
		}
	}
	return r;
}
int main(){
	int choice;
	root=NULL;
	t*ptr;
	int data;
	while(1){
		printf("\n1.insert\n2.inorder\n3.postorder\n4.preorder\n5.delete\n6.exit\n");
		printf("enter your choice:");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				ptr=(t*)malloc(sizeof(t));
				printf("enter the data:");
				scanf("%d",&data);
				ptr->data=data;
				ptr->left=ptr->right=NULL;
				insert(&root,&ptr);
				break;
			case 2:
				inorder(root);
				break;
			case 3:
				postorder(root);
				break;
			case 4:
				preorder(root);
				break;
			case 5:
				printf("enter the data to be deleted:");
				scanf("%d",&data);
				deltree(root,data);
				break;
			case 6:
				exit(1);
				break;
		}
	}
	return 0;
}
