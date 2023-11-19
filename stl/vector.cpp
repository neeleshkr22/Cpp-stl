#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    cout<<"capacity "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<" capacity "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<" capacity "<<v.capacity()<<endl;
    cout<<"size "<<v.size()<<endl;

    v.push_back(3);
    v.push_back(4);
    cout<<"element at 2nd index "<<v.at(1)<<endl;

    cout<<"front "<<v.front()<<endl;
    cout<<"back "<<v.back()<<endl;

    v.pop_back(); //delete last element
    cout<<"elements are "<<endl;
    for(int i:v){
        cout<<i<<"";
    }

    

}