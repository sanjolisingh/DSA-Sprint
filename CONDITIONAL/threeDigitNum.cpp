#include <iostream>
using namespace std;
int main(){
    int s;
    cout<<"enter any value:";
    cin>>s;
    if(s>=100 && s<=999){
        cout<<"given no is three digit";
    }
    else{
        cout <<"given no is not three digit";
    }
    return 0;
}