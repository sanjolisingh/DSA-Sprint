#include <iostream>215
using namespace std;
int main(){
    int n;
    cout<<"enter the term:";
    cin>>n;
    bool flag=true;
    for(int i=2;i<n-1;i++){
        if(n%i==0){
            flag=false;
        }
    }
    if(n==1){
        cout<<"its neither a prime nor a composite no";
    }
    else if(flag==true){
        cout<<"its a prime number";
    }
    else{
        cout<<"its a composite number";
    }
    return 0;

}