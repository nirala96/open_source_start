#include<bits/stdc++.h>
using namespace std;

struct Node
{
int data;
struct Node* left;
struct Node* right;
int height;
};

struct Node* root = NULL;

int node_inserted = 0;
int node_deleted = 0;
int create_called = 0;

struct Node* new_node(int key)
{
struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
temp->data = key;
temp->left = NULL;
temp->right = NULL;
temp->height = 1;
return temp;
}


void preorder(struct Node* node)
{
if(root != NULL)
{
if(node != NULL)
{




}
}
else
{

cout<<node->data<<" ";
preorder(node->left);
preorder(node->right);

cout<<"The tree is empty!";
}
}

int height(struct Node* a)
{
if(a == NULL)
{
 return 0;

}
else
{
return a->height;
}
}

struct Node* leftrotate(struct Node* a)
{
struct Node* b = a->right;
struct Node* temp = b->left;

a->right = temp;
b->left = a;

int leftheight = height(a->left);
int rightheight = height(a->right);
if(leftheight > rightheight)
{
a->height = leftheight + 1;

}
else
{
a->height = rightheight + 1;
}

leftheight = height(b->left);
rightheight = height(b->right);
if(leftheight > rightheight)
{
 b->height = leftheight + 1;

}
else
{

b->height = rightheight + 1;
}




return b;
}

struct Node* rightrotate(struct Node* a)
{
struct Node* b = a->left;
struct Node* temp = b->right;

a->left = temp;
b->right = a;

int leftheight = height(a->left);
int rightheight = height(a->right);

if(leftheight > rightheight)
{
a->height = leftheight + 1;

}
else
{

a->height = rightheight + 1;
}


leftheight = height(b->left);
rightheight = height(b->right);

if(leftheight > rightheight)

{

b->height = leftheight + 1;
}
else
{
b->height = rightheight + 1;

}

return b;
}

struct Node* insertnode(struct Node* node, int key)
{
node_inserted = 0;
if(node == NULL)
{
if(create_called != 1)
{
node_inserted = 1;
}
return new_node(key);
}
else if(key < node->data)
{
node->left = insertnode(node->left, key);
}
else
{
node->right = insertnode(node->right, key);
}


if(node_inserted == 1)
{
cout<<"Tree before height balancing\n";
preorder(root);
cout<<"\n";
node_inserted = 0;
}

int leftheight = height(node->left);
int rightheight = height(node->right);

if(leftheight > rightheight)
{
node->height = leftheight + 1;
}
else
{
node->height = rightheight + 1;
}

int balance = height(node->left) - height(node->right);

if(balance > 1 && key < node->left->data)
{
return rightrotate(node);
}
else if(balance > 1 && key > node->left->data)
{
node->left = leftrotate(node->left);
return rightrotate(node);
}
else if(balance < -1 && key > node->right->data)
{
return leftrotate(node);
}
else if(balance < -1 && key < node->right->data)
{


node->right = rightrotate(node->right); return leftrotate(node);

}
else
{
return node;
}
}


struct Node* deletenode(struct Node* node, int key)
{
if(root == NULL)
{
cout<<"The tree is empty, nothing to delete!\n"; return NULL;
}
if(node == NULL)
{
cout<<"The given data element dosen't exist in the tree\n";

node_deleted = -1; return node;
}
else if(key < node->data)
{
node->left = deletenode(node->left, key);
}
else if(key > node->data)
{
 node->right = deletenode(node->right, key);
}
else
{


if(node->right != NULL && node->left != NULL)
{

struct Node* temp = node->right; while(temp && temp->left != NULL)
{
temp = temp->left;
}

node->data = temp->data;
node->right = deletenode(node->right, temp->data);

}
else
{

if(node->left == NULL && node->right == NULL)
{

struct Node* temp = node;
node = NULL;
free(temp);
}
else if(node->left != NULL)
{
struct Node* temp = node;
node = node->left;
free(temp);
}
else
{
struct Node* temp = node;
node = node->right;
free(temp);
}

}
}

if(node_deleted == 1)
{
cout<<"Tree before height balancing\n";
preorder(root);
cout<<"\n";
node_deleted = -1;
}

if(node == NULL)
{
node_deleted = 1;
return node;
}

int leftheight = height(node->left);
int rightheight = height(node->right);

if(leftheight > rightheight)
{

node->height = leftheight + 1;

}
else
{

node->height = rightheight + 1;
}



int balance = height(node->left) - height(node->right);

if(balance > 1 && (height(node->left->left) - height(node->left->right)) >= 0)
{
return rightrotate(node);
}
else if(balance > 1 && (height(node->left->left) - height(node->left->right)) < 0)
{
node->left = leftrotate(node->left);
return rightrotate(node);
}
else if(balance < -1 && (height(node->right->left) - height(node->right->right)) <= 0)
{
return leftrotate(node);

}
else if(balance < -1 && (height(node->right->left) - height(node->right->right)) > 0)
{
 node->right = rightrotate(node->right); return leftrotate(node);


}
else
{

if(node_deleted == 0)
{

node_deleted = 1;
}
return node;
}
}

void create_tree()
{
int num_nodes;
int data;
cout<<"Enter the number of nodes you want to insert\n";
cin>>num_nodes;
cout<<"Enter "<<num_nodes<<" values\n";
for(int i = 0; i < num_nodes; ++i)
{
cin>>data;
root = insertnode(root, data);
}
}

int main()
{
int choice; int data;
int option;
do
{
cout<<"Bimary Search Tree Operations Menu :-\n";
cout<<"1. Create \n";
cout<<"2. Display \n";
cout<<"3. Insert \n";
cout<<"4. Delete\n";
cin>>option;

switch(option)
{
case 1: create_called = 1; create_tree();
create_called = 0;
break;
case 2: cout<<"Binary search tree in preorder : \n";
preorder(root);
cout<<"\n";
break;
case 3: cout<<"Enter the value you want to insert : ";
cin>>data;
root = insertnode(root, data);
cout<<"Tree after height balancing\n";
preorder(root);
cout<<"\n";
break;
case 4: cout<<"Enter the value you want to delete : ";
cin>>data;
node_deleted = 0;
root = deletenode(root, data);
if(root != NULL)
cout<<"Tree after height balancing\n";
preorder(root);
cout<<"\n";
break;
default:cout<<"Select an option\n";
}
cout<<"Do you want to continue :\n1 : YES \n0 : NO \n";
cin>>choice;
}while(choice != 0);
}
