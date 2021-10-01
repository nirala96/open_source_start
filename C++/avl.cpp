#include<bits/stdc++.h> 

using namespace std; 

  

class Node  

{  

    public: 

    int key;  

    Node *left;  

    Node *right;  

    int height;  

};  



void preOrder(Node *root){  

    if(root != NULL){  

        cout << root->key << " ";  

        preOrder(root->left);  

        preOrder(root->right);  

    }  

}



int height(Node *N)  

{  

    if (N == NULL)  

        return 0;  

    return N->height;  

}  

   

int max(int a, int b)  

{  

    return (a > b)? a : b;  

}  

  



Node* newNode(int key)  

{  

    Node* root = new Node(); 

    root->key = key;  

    root->left = NULL;  

    root->right = NULL;  

    root->height = 1; 

      

    return(root);  

}  

  



Node *rightRotate(Node *y)  

