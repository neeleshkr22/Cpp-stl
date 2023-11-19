#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string> s; //last in first out

    s.push("neelesh");
    s.push("kumar");
    s.push("rana");

    cout<<"top element "<<s.top()<<endl;
    s.pop();
    cout<<"top element "<<s.top()<<endl;
    cout<<"size of stack "<<s.size()<<endl;
    
}