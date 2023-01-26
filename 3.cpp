#include <iostream>

using namespace std;

void stdva(int n){
    int c=0;
    int ns=1;
    while (ns<n){
        c+=1;
        ns*=2;
    }
    if (ns==n){
        cout<<c;
    }
    else{
        cout<<"false";
    }  
}

int main(){
    int n=16;
    stdva(n);
}