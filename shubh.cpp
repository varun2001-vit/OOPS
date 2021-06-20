#include<iostream>
using namespace std;
template<class T>
T lar(T arr[],int n){
    T m;
    m = 0;
    for(int i=0;i<n;i++){
        if(arr[i]>m){
            m = arr[i];
        }
    }
    return m;
}
template<class T>
T sma(T arr[],int n){
    T m;
    m = 0;
    for(int i=0;i<n;i++){
        if(arr[i]<m){
            m = arr[i];
        }
    }
    return m;
}
int main(){
    int n;
    int a1[n];
    double a2[n];
    char a3[n];
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    cout<<"Enter the integer values"<<endl;
    for(int i=0;i<n;i++){
        cin>>a1[i];
    }
     cout<<"Enter the float values"<<endl;
    for(int i=0;i<n;i++){
        cin>>a2[i];
    }
 cout<<"Enter the char values"<<endl;
    for(int i=0;i<n;i++){
        cin>>a3[i];
    }
    cout<<lar(a1,n)<<endl;
    cout<<sma(a1,n)<<endl;
    cout<<lar(a2,n)<<endl;
    cout<<sma(a2,n)<<endl;
    cout<<lar(a3,n)<<endl;
    cout<<sma(a3,n)<<endl;

}
