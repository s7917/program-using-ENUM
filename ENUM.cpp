#include<iostream>
using namespace std;

enum day{mon=2 , tues , wed , thurs , fri=23 , sat , sun};
// enum is used defind a group of constant under one name 
int main(){
    day d;
    d= fri;
    cout<<mon<<endl;
    cout<<tues<<endl;
    cout<<wed<<endl;
    cout<<thurs<<endl;
    cout<<fri<<endl;
    cout<<sat<<endl;
    cout<<sun<<endl;
    
    return 0;
}
