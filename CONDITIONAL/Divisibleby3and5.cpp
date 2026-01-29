#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter any value:";
    cin>>x;
    if(x%3==0 && x%5==0){
        cout<<"it is divisible by 3 and 5";
    }
    else{
        cout<<"it is not divisible by 3 and 5";
    }
    return 0;
}