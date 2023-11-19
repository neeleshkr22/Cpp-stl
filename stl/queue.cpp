#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string> q;
    q.push("neelesh");
    q.push("kumar");
    q.push("rana");
    cout<<"Top element "<<q.front();
    cout<<endl;
    q.pop();
    cout<<"top element "<<q.front();
}