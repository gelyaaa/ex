#include <iostream>
#include <cmath>
using namespace std;

int sum(int n){
    int s=0;
    while(n>0){
        s+=n%10;
        n=int(n/10);
    }
    return s;
}
bool fibb(int f, int s, int l, int n){
    if (l>n)
        return false;
    if (l==n){
        return true;      
    }
    return fibb(s, l, l+s, n);
    
}
 
 
void fibsum(){
    int n;
    cout<<"len1: ";
    cin>>n;
    int *arr = new int[n];
    cout<<"elements1: ";
    for (int i=0; i<n; i++ ){
        cin>>arr[i];
    }
    int ch;
    for (int i=0; i<n; i++){
        ch=sum(arr[i]);
        if (fibb(0, 1, 1, ch)){
            cout<<arr[i]<<' ';
        }
    }
}
int main(){
    fibsum();
}