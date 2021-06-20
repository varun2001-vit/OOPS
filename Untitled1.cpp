#include<iostream>
#include<stdlib.h>
using namespace std;
#define Max 100
class Heap{                                     //building a class heap
    int heap[Max];                              //initializing heap as an array
    int c_size;                                 //initialize variable for elements in the heap
public:                                         //creating functions in public
    void initialization();                      
    void insert(int x);
    void buildheap();
 	void percolatedown(int empty);
	void delmax(int &max);
    int findmax();
    void display();
};
void Heap::initialization(){                    //to input all elements of heap
    cout<<"Array size of array"<<endl;          //asking for size of heap
    cin>>c_size;                                    
    cout<<"Enter all "<<c_size<<" elements"<<endl;
    int i;
    for(i=1;i<=c_size;i++){                     //entering all elements in heap
        cin>>heap[i];
    }
    for(i=c_size/2;i>0;i--){                    //from last parent to the root node 
        percolatedown(i);                       //percolating down to form a max heap
    }
}
void Heap::percolatedown(int empty){            //to percolate down 
    while(empty*2<=c_size){                     //checking if empty is inside the heap
        if(heap[empty*2]>heap[empty*2+1]){      //if left child is greater than right child
            if(heap[empty]<heap[empty*2]){      //if parent is smaller than the child
                int t;                          //swapping the two
                t=heap[empty];
                heap[empty]=heap[empty*2];
                heap[empty*2]=t;
                }
            empty=empty*2;                      //incrementing empty by factor of 2 or to left child of empty
        }
        else{
            if(heap[empty]<heap[empty*2+1]){    //if right child is greater than left child and parent node is smaller than right child
                int t;                          //swap the two right child and parent
                t=heap[empty];
                heap[empty]=heap[empty*2+1];
                heap[empty*2+1]=t;
            }
            empty=empty*2+1;                    //incrementing empty to right child of empty
        }
    }
}
void Heap::insert(int x){                       //inserting a new element in heap
    if(c_size==Max){                            //check if heap is full
        cout<<"Array is full"<<endl;
    }
    else{                                       //else
        int temp=++c_size;                      //initialize temp to size of heap
        heap[temp]=x;                           //adding the new element at last
        while(temp>1){                          //while temp is not at root node
            int parent=temp/2;                  //parent is the variable for index of parent node
            if(heap[parent]<heap[temp]){        //if child is greater than the parent
                int t;                          //swap the two
                t=heap[parent];
                heap[parent]=heap[temp];
                heap[temp]=t;
                temp=parent;
            }
            else{
                return;
            }
        }
    }
}
void Heap::delmax(int &max){                    //to delete the maximum element
    if(c_size==0){                              //if size is 0 no element present
        cout<<"Empty Array"<<endl;
    }
    else{                                       //due to max heap root node is always greatest
        max=heap[1];                            
        heap[1]=heap[c_size--];                 //last element in heap becomes root node
        display();                              
        percolatedown(1);                       //percolate down fromm root node to make it a heap
    }
}
int Heap::findmax(){
    return heap[1];
}
void Heap::display(){                           //to display 
    int i;
    cout<<"The elements of heap are:"<<endl;
    for(i=1;i<=c_size;i++){                     //using for loop for displaying all the elements
        cout<<i<<"."<<heap[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int op,data,max=0;
    cout<<"   MAX HEAP   "<<endl;
    Heap h1;
    while(1){
        cout<<"1.Buildheap"<<endl;
        cout<<"2.Insert"<<endl;
        cout<<"3.DeleteMax"<<endl;
        cout<<"4.Display"<<endl;
        cout<<"5.Findmax"<<endl;
        cout<<"6.Exit"<<endl;
        cout<<"Enter your option:"<<endl;
        cin>>op;
        switch(op){
            case 1:
            h1.initialization();
            break;
            case 2:
            cout<<"Enter data to be inserted:"<<endl;
            cin>>data;
            h1.insert(data);
            break;
            case 3:
            h1.delmax(max);
            cout<<"The deleted element is: "<<max<<endl;
            break;
            case 4:
            h1.display();
            break;
            case 5:
            h1.findmax();
            break;
            case 6:
            exit(0);
            default:
            cout<<"Wrong option entered"<<endl;
        }
    }
}
