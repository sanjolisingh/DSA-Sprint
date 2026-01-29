#include<iostream>
using namespace std;
int main(){
    char x;
    cout<<"enter a character:";
    cin>>x;
    if((x>='a'&& x<='z')||(x>='A'&& x<='Z')){
        cout <<"its an alphabet";
    }
    else{
        cout<<"its not an alphabet";
    }
    return 0;
}