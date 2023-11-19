#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    cout<<binary_search(v.begin(),v.end(),5)<<endl;
    cout<<lower_bound(v.begin(),v.end(),5)-v.begin()<<endl;
    int a =3;
    int b=5;
    cout<<"max element is "<<max(a,b)<<endl;
    cout<<"min element is "<<min(a,b)<<endl;
    swap(a,b);
    cout<<a<<endl;
    string abcd = "abcd";
    reverse(abcd.begin(),abcd.end());
    cout<<abcd;
}

