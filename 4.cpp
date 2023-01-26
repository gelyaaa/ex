#include <iostream>

using namespace std;

int reverse(int a){
    int a2=0;
    while(a>0){
        a2*=10;
        a2+=a%10;
        a=int(a/10);
    }
    return a2;
}

int mirrow(){
    int n;
    int m;
    cout<<"len1: ";
    cin>>n;
    int *arr1 = new int[n];
    cout<<"elements1: ";
    for (int i=0; i<n; i++ ){
        cin>>arr1[i];
    }

    cout<<"len2: ";
    cin>>m;
    int *arr2 = new int[n];
    cout<<"elements1: ";
    for (int i=0; i<m; i++ ){
        cin>>arr2[i];
    }
    if (n!=m){
        cout<<"false";
        delete[] arr1;
        delete[] arr2;
        return 0;
    }
    for (int i=0; i<n; i++){
        if (arr1[i]!=reverse(arr2[n-1-i])){
            cout<<"false";
            delete[] arr1;
            delete[] arr2;
            return 0;
        }
    }
    cout<<"true";
    delete[] arr1;
    delete[] arr2;
    return 0;

}
int main()
{   
    mirrow();
}