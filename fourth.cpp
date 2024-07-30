#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    cout<<"enter a number:";
    cin >> a;
    while(a>0){
        b = a%10;
        a = a/10;
        cout<<b<<endl;
        

    }
}
