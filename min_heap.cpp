#include<iostream>
#include<stdio.h>
//initializing variable for elements in the heap
#define ms 100
//initializing heap as an array
int arr[ms];
int n;
//function to percolate down 
void heapify(int i){
    //checking if hole is inside the heap
    while(i*2<=n){
        //if left child is greater than right child
        if(arr[i*2]<arr[i*2+1]){
            //if parent is smaller than the child
            if(arr[i]>arr[i*2]){
                //swapping the left child and parent
                int t;
                t=arr[i];
                arr[i]=arr[i*2];
                arr[i*2]=t;
                }
            //incrementing hole by factor of 2 or to left child of hole
            i=i*2; 
        }
        //else right child is greater than left child
        else{
            //if parent is smaller than the child
            if(arr[i]>arr[i*2+1]){
                //swapping the right child and parent
                int t;
                t=arr[i];
                arr[i]=arr[i*2+1];
                arr[i*2+1]=t;
            }
            //incrementing hole to right child of hole
            i=i*2+1;
        }
    }
}
//function to input all elements of heap
void creation(){
    //getting size of heap
    printf("Enter the size of the array");
    scanf("%d",&n);
    printf("enter the elements\n");
    for(int i=1;i<=n;i++){
        //insering all elements in heap
        scanf("%d",&arr[i]);
    }
    //from last parent to the root node 
    for(int i=n/2;i>0;i--){
        //percolating down to form a max heap
        heapify(i);
    }
}
//function for inserting a new element in heap
void insert(){
    int x;
    printf("Enter the data to be inserted\n");
    scanf("%d",&x);
    //if heap is empty
    if(n==0){
        printf("Array is empty\n");
    }
    //else if heap is full
    else if(n==ms){
        printf("Array is full\n");
    }
    //else
    else{
        //incrementing size of heap
        n = n+1;
        //adding new element at last
        arr[n] = x;
        //initialize temp to size of heap
        int temp = n;
        //while temp is not at root node
        while(temp>1){
            //parent is the variable for index of parent node
            int parent = temp/2;
            //if child is greater than the parent
            if(arr[parent]>arr[temp]){
                //swap the two
                int t;
                t = arr[parent];
                arr[parent] = arr[temp];
                arr[temp] = t;
                temp = parent;
            }else{
                return;
            }
        }
    }
}
//function to delete the maximum element
void del(int &min){
    //if size is 0 no element present
    if(n == 0)
        printf("empty\n");
    else{
        //due to max heap root node is always greatest
            min = arr[1];
            //last element in heap becomes root node
            arr[1] = arr[n--];
            //percolate down fromm root node to make it a heap
            heapify(1);
    }
    printf("The deleted element is %d",min);
}
//function for finding maximum element
void findmin(){
    //if heap is empty
    if(n==0){
        printf("Array is empty\n");
    }
    //else print the first element
    else{
        printf("The min element is %d",arr[1]);
    }
}
//function for displaying the heap
void display(){
    //if heap is empty
    if(n == 0){
        printf("Array is empty\n");
    }
    //else not empty
    else{
    printf("The elements of the array are:\n");
    for(int i=1;i<=n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    }
}
//main function
int main(){
    int ch,min=0;
    do
    {
        printf("***MAX HEAP MENU***\n");
        printf("1. Build Heap\n");
        printf("2. Insert\n");
        printf("3. Delete\n");
        printf("4. Display\n");
        printf("5. Find Min Element\n");
        printf("0. Exit.....\n");
        printf("Enter your choice....\n");
        printf("***********\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                creation();
                break;
            case 2:
                insert();
                break;
            case 3:
                del(min);
                break;
            case 4:
                display();
                break;
            case 5:
                findmin();
                break;
            case 0:
                break;
            default:
                printf("Entered the wrong choice!!!\n");
                break;
        }
    } while (ch!=0);
    return 0;
}
