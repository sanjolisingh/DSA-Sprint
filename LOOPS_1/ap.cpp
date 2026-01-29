#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the term:";
    cin>>n;
    int a;
    cout<<"enter the first term:";
    cin>>a;
     for (int i=1;i<=n;i++){
        cout<<a<<"\n";
        a+=3;
    }
    return 0;

}