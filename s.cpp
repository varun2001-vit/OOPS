#include<iostream>
using namespace std;
class avm{
    public:
    int code;
    int cost;
    int stock;
    void get_data(){
        cin>>code;
        cin>>cost;
        cin>>stock;
    }
};
int main(){
    int i,n,ic,co,index;
    cin>>n;
    avm a[n];
    for(i=0;i<n;i++){
        a[i].get_data();
        //cout<<a[i].code<<endl;
    }
    cin>>ic>>co;
    int flag=0;
    for(i=0;i<n;i++){
        if(a[i].code==ic){
            flag=1;
            index=i;
            break;
        }
    }
    try{
        if(flag==1){
            if(a[i].stock>=1){
                if(co>a[i].cost){
                    cout<<a[index].code<<endl;
                }
                else{
                    throw 1.1;
                }
            }
            else{
                throw "stock kam hai";
            }
        }
        else{
            throw flag;
        }
    }
    catch(int flag){
        cout<<"Wrong item code"<<endl;
    }
    catch(string c){
        cout<<"Less stock"<<endl;
    }
    catch(double x){
        cout<<"Insufficient amount";
    }
}
