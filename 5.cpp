#include <iostream>

using namespace std;

int **mass(int n){
    int **arr = new int* [n];
    for (int i=0; i<n;i++){
        arr[i]= new int[i+1];
        for (int j=0; j<i+1; j++){
            arr[i][j]=j+1;
        }
    }
    return arr;
}

int main(){
    int n;
    cin>>n;
    int **a1=mass(n);
    cout<<'(';
    for (int i=0; i<n; i++){
        cout<<'{';
        for (int j=0; j<i+1; j++){
            cout<<a1[i][j]<<",";
        }
        cout<<'}';
    }
    cout<<')';

}