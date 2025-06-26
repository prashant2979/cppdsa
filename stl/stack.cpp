#include<iostream>
using namespace std;
#include<stack>
int main()
{
    stack<string> s;
    s.push("love");
    s.push("got");
    s.push("watching");

    cout<<"top of the stack"<<s.top()<<endl;
        cout<<"size of the stack"<<s.size()<<endl;
        cout<<"is stack is empty"<<s.empty()<<endl;

    

    return 0;
}