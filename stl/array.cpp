#include<iostream>
#include<array>
using namespace std;

int main(){
    int basic[3]= {1,2,3};
    array<int,4> a = {1,2,3,4}; //static array
    int size = a.size();
    for(int i = 0; i<size;i++){
        cout<<a[i]<<endl;
    }
    cout<<"Element at 2nd index "<<a.at(2)<<endl; //return the element at 2nd position
    cout<<"Empty or not "<<a.empty()<<endl; //checks whether empty or not

    cout<<"first element "<<a.front()<<endl;
    cout<<"last element "<<a.back()<<endl;


}