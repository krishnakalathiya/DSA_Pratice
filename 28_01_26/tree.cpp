// Tree In DSA

#include <iostream>

using namespace std;

// Node

struct Node{
  int data;
  Node* left;
  Node* right;

  Node(int val){
    data = val;
    left = right = NULL;
  }
};

// preorder traversal (Root -> left -> right)
void preorder(Node* root){
  if(root == NULL) return ;
  cout << root -> data <<" ";
  preorder(root -> left);
  preorder(root -> right);
}

// Inorder traversal (left -> Root -> right)

void inorder(Node* root){
  if(root == NULL) return ;
  inorder(root -> left);
  cout << (root -> data) << " ";
  inorder(root -> right);
}

// postorder traversal (left -> right -> Root)

void postorder(Node* root){
  if(root == NULL) return;
  postorder(root -> left);
  postorder(root -> right);
  cout << root -> data << " ";
} 

int main(){
  Node* root = new Node(1);
  root -> left = new Node(2);
  root -> right = new Node(3);
  root -> left -> left = new Node(4);
  root -> left -> right = new Node(5);
  root -> left -> left -> right = new Node(9);
  root -> left -> left-> left = new Node(8);

  cout << "PreOrder Tra : " ;

  preorder(root);

  cout << "InOrder Tra : ";

  inorder(root);

  cout << "PostOrder Tra : ";

  postorder(root);

  return 0;
}