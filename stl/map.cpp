#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string>m;
    m[1]="kumar";
    m[2]="neelesh";
    m[3]="rana";
    for(auto i:m){
        cout<<i.first<<" ";
    }
}