#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    int sum=0;
    int s=0;
    while(n>0){
        s=n%10;
        sum=sum+s;
        n=n/10;
    }
    cout<<sum;
    return 0;
}