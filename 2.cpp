#include <iostream>

using namespace std;

void mass(int n){
    int *arr = new int[n];
    int ch;
    for (int i=0; i<n; i++){
        ch=0;
        for (int j=1; j<=i+1; j++){
            ch*=10;
            ch+=j;
        }
         for (int j=i; j>=1; j--){
            ch*=10;
            ch+=j;
        }
        arr[i]=ch;

    }
    for (int i=0; i<n; i++){
        cout<<arr[i]<<' ';
    }
}
int main(){
    int n=5;
    mass(n);
}