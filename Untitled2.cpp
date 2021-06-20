#include<iostream>
using namespace std;
struct treenode {
   int data;
   treenode * left;
   treenode * right;
};
struct treenode * createNode(int d) {
   struct treenode * root = new treenode;
   root -> data = d;
   root -> left = NULL;
   root -> right = NULL;
   return root;
}
bool isFullBinaryTree(struct treenode * root) {
   if (root == NULL) {
      return true;
   }
   if (root -> left == NULL and root -> right == NULL) {
      return true;
   } else if (root -> left and root -> right) {
      return (isFullBinaryTree(root -> left) and isFullBinaryTree(root -> right));
   }
   return false;
}
int main() {
   struct treenode * root = NULL;
   root = createNode(1);
   root -> left = createNode(2);
   root -> right = createNode(3);
   root -> left -> right = createNode(4);
   root -> left -> left = createNode(5);
   root -> right -> left = createNode(6);
   if (isFullBinaryTree(root)) {
      cout << "1" << endl;
   } else {
      cout << "0" << endl;
   }
   return 0;
}
