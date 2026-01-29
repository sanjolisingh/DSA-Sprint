#include <iostream>
using namespace std;
int main(){
    int n,a;
    cout<<"enter the term to print and first term respectively:";
    cin>>n>>a;
    for (int i=1;i<=n;i++){
        cout<<a<<"\n";
        a*=2;
    }
    return 0;

}