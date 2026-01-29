#include <iostream>
using namespace std; 
int main(){
    int y;
    cout<<"enter a no:";
    cin>>y;
    if(y>5){
        cout<<"no is greater than 5";
    }
    else if(y<5){
        cout<<"no is less than 5";
    }
    else{
        cout<<"no is equal to 5";
    }
    return 0;
}
