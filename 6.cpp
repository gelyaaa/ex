#include <iostream>
#include <cmath>
using namespace std;

void rast(int n){
    int x,y;
    int len=n*2; 
    int *arr=new int[len];
    int j=0;
    for (int i=0; i<n; i++){
        cout<<"x, y: ";
        cin>>x>>y;
        arr[j]=x;
        arr[j+1]=y;
        j+=2;
    }
    double m=0;
    double r=0;
    int mx1, my1, mx2, my2;
    for (int i=0; i<len-2; i+=2){
        for (int j=2; j<len; j+=2){
            r=sqrt(pow(abs(arr[i]-arr[j]), 2)+pow(abs(arr[i+1]-arr[j+1]),2));
            if (r>m){
                m=r;
                mx1=arr[i];
                mx2=arr[j];
                my1=arr[i+1];
                my2=arr[j+1];

            }
        }
    }
    cout<<mx1<<', '<<my1<<'; '<<mx2<<', '<<my2;

}
int main(){
    int n;
    cin>>n;
    rast(n);
}