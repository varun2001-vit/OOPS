#include<iostream>
using namespace std;
struct node{
    struct node *left;
    struct node *right;
    int data;
};
struct node *create(){
    struct node *ptr = new node;
    int x;
    cout<<"Enter data (-1 for no data)"<<endl;;
    cin>>x;
    if(x==-1){
        return NULL;
    }
    ptr->data=x;
    cout<<"Enter the left child of "<<x<<endl;
    ptr->left=create();
    
    cout<<"Enter the right child of "<<x<<endl;
    ptr->right=create();

    return ptr;

}
void preorder(struct node *ptr){
    if(ptr==NULL){
        return;
    }else{
        cout<<ptr->data<<" ";
        preorder(ptr->left);
        preorder(ptr->right);
    }
}
void inorder(struct node *ptr){
    if(ptr==NULL){
        return;
    }else{
        inorder(ptr->left);
        cout<<ptr->data<<" ";
        inorder(ptr->right);
    }    
}
void postorder(struct node *ptr){
    if(ptr==NULL){
        return ;
    }else{
        postorder(ptr->left);
        postorder(ptr->right);
        cout<<ptr->data<<" ";
    }
}
int main(){
    struct node *root=NULL;
    int ch;
    do
    {
        cout<<endl<<"**Binary Tree Menu***"<<endl;
        cout<<"1. Create a binary tree"<<endl;
        cout<<"2. Preorder traversal"<<endl;
        cout<<"3. Inorder traversal"<<endl;
        cout<<"4. Postorder traversal"<<endl;
        cout<<"0. Exit......"<<endl;
        cout<<"Enter your choice...."<<endl;
        cin>>ch;
        switch (ch)
        {
        case 1:
            root = create();
            break;
        case 2:
            if(root==NULL){
                cout<<"Create a tree first"<<endl;
            }
            else{
            preorder(root);
            }
            break;
        case 3:
            if(root==NULL){
                cout<<"Create a tree first"<<endl;
            }
            else{
            inorder(root);
            }
            break;
        case 4:
            if(root==NULL){
                cout<<"Create a tree first"<<endl;
            }
            else{
            postorder(root);
            }
            break;
        case 0:
            break;
        default:
            cout<<"Entered wrong choice!!!"<<endl;
            break;
        }
    } while (ch!=0);
    return 0;
}
   

