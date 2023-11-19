#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    d.push_back(3);
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    d.pop_back();
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<"Print first index element "<<d.at(1)<<endl;
    cout<<"size before erase "<<d.size()<<endl;

    d.erase(d.begin()+1);
    cout<<"size after erase "<<d.size();
    
}