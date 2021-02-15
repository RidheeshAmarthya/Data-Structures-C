#include<stdio.h>

struct node {
int data;
struct node *left;
struct node *right;
};
typedef struct node node;


node* createnode(int data){ //works

    node *cell = malloc(sizeof(node));
    cell->data = data;
    cell->left = NULL;
    cell->right = NULL;

    return cell;

}

void printtree (node *root){ //works

    if(root == NULL)
        return;

    printf(" %d ",root->data);
    printtree(root->left);
    printtree(root->right);

}

node* treeinput(int number){

}

int main () {

node *x1 = createnode(10);
node *x2 = createnode(12);
node *x3 = createnode(21);
node *x4 = createnode(98);
node *x5 = createnode(87);
node *x6 = createnode(76);

x1->left = x2;
x1->right = x3;
x1->left->left = x4;
x1->left->right = x5;
x1->right->left = x6;

node *temp;
//printtree(x1);
temp = treeinput(3);
printtree(temp);
//printtree(trav_tree(x1));


return 0;
}
