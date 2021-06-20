#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
    int data;
    struct node *left;
    struct node *right;
};
int insert(struct node *ptr,int d){
    if(ptr->data==d){
        return 3;
    }else{
        if(d<ptr->data){
            if(ptr->left!=NULL){
                insert(ptr->left,d);
            }else{
                ptr->left=new node;
                (ptr->left)->left = NULL;
                (ptr->left)->right = NULL;
                (ptr->left)->data = d;
                return 1;
            }
        }else{
            if(ptr->right!=NULL){
                insert(ptr->right,d);
            }else{
                ptr->right=new node;
                (ptr->right)->left = NULL;
                (ptr->right)->right = NULL;
                (ptr->right)->data = d;
                return 2;
            }
        }
    }
}
struct node *search(struct node *ptr, int d){
    if(ptr==NULL || ptr->data==d){
            return ptr;
    }
    else if(d<ptr->data){
        return search(ptr->left,d);
    }
    else{
        return search(ptr->right,d);
    }
}
struct node *inordersuccessor(struct node *ptr){
    struct node *cur = ptr;
    while(cur && cur->left!=NULL)
        cur = cur->left;
    return cur;
}
struct node *deletenode(struct node *ptr, int d){
    if(ptr==NULL){
        return ptr;
    }
    if(d<ptr->data){
        ptr->left = deletenode(ptr->left,d);
    }else if(d>ptr->data){
        ptr->right = deletenode(ptr->right,d);
    }
    else{
        if(ptr->left==NULL){
            struct node *temp=ptr->right;
            free(ptr);
            return temp;
        }else if(ptr->right==NULL){
            struct node *temp = ptr->left;
            free(ptr);
            return temp;
        }
        struct node *temp = inordersuccessor(ptr->right);
        ptr->data = temp->data;
        ptr->right = deletenode(ptr->right,temp->data);
    }
    return ptr;
}
void inorder(struct node *ptr){
    if(ptr==NULL){
        return;
    }
    else{
        inorder(ptr->left);
        cout<<ptr->data<<" ";
        inorder(ptr->right);
    }
}
void preorder(struct node *ptr){
    if(ptr==NULL){
        return;
    }
    else{
        cout<<ptr->data<<" ";
        preorder(ptr->left);
        preorder(ptr->right);
    }
}
void postorder(struct node *ptr){
    if(ptr==NULL){
        return;
    }
    else{
        postorder(ptr->left);
        postorder(ptr->right);
        cout<<ptr->data<<" ";
    }
}
int main(){
    int ch,ele,i,check;
    struct node *root=NULL;
    do
    {
        cout<<endl<<"***Binary Search Tree Menu***"<<endl;
        cout<<"1. Insertion"<<endl;
        cout<<"2. Search"<<endl;
        cout<<"3. Delete"<<endl;
        cout<<"4. Inorder"<<endl;
        cout<<"5. Preorder"<<endl;
        cout<<"6. Postorder"<<endl;
        cout<<"0. Exit....."<<endl;
        cout<<"Enter your choice...."<<endl;
        cout<<"*************"<<endl;
        cin>>ch;
        switch(ch){
            case 1:
                cout<<"Enter the data you want to insert"<<endl;
                cin>>ele;
                if(root==NULL){
                    root = new node;
                    root->data=ele;
                    root->left=NULL;
                    root->right=NULL;
                    cout<<"Root node is added to the tree"<<endl;
                }else
                    check = insert(root,ele);
                    if(check==1){
                        cout<<"Node added to the left"<<endl;
                    }else if(check==2){
                        cout<<"Node added to the right"<<endl;
                    }else if(check==3){
                        cout<<"Repeated value not allowed"<<endl;
                    }
                break;
            case 2:
                if(root==NULL){
                    cout<<"Tree is empty"<<endl;
                }
                else{
                cout<<"Enter the data to be searched in the tree"<<endl;
                cin>>ele;
                struct node *temp;
                temp =search(root,ele);
                if(temp!=NULL){
                    cout<<"Element found"<<endl;
                }else{
                    cout<<"Element not found in the tree"<<endl;
                }
                }
                break;
            case 3:
                if(root==NULL){
                    cout<<"Tree is empty"<<endl;
                }
                else{
                cout<<"Enter the data to be deleted"<<endl;
                cin>>ele;
                root = deletenode(root,ele);
                }
                break;
            case 4:
                if(root==NULL){
                    cout<<"Tree is empty"<<endl;
                }else{
                    cout<<"Inorder Traversal:"<<endl;
                    inorder(root);
                }
                break;
            case 5:
                if(root==NULL){
                    cout<<"Tree is empty"<<endl;
                }else{
                    cout<<"Preorder Traversal:"<<endl;
                    preorder(root);
                }
                break;
            case 6:
                if(root==NULL){
                    cout<<"Tree is empty"<<endl;
                }else{
                    cout<<"Postorder Traversal:"<<endl;
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
