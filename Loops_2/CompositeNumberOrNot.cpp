#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the term:";
    cin>>n;
    for(int i=2;i<n-1;i++){
        if(n%i==0){
            cout<<"its a composite number"<<endl;
            break;
        }
    }
    return 0;
}
