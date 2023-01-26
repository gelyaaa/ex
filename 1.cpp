#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int prostS(string str){
    int mp=-1;
    for (int i=0; i<str.length()-1; i++){
        for (int j=1; j<str.length(); j++){
            int sub=stoi(str.substr(i,j));
            int p=1;
            for (int j=2; j<=sqrt(sub); j++){
                if (sub%j==0){
                    p=0;
                    break;
                }
            }
            if (p==1 && str[i]>mp){
                mp=sub;
            }
        }
    }
    return mp;
}
int main(){
    string s="41467462";

    cout<<prostS(s);
}