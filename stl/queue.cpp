#include<iostream>

#include<queue>
using namespace std;
int main()
{
    queue<string> s;
    s.push("love");
    s.push("got");
    s.push("watching");

    cout<<"top of the queue"<<s.front()<<endl;
        cout<<"size of the queue"<<s.size()<<endl;
        cout<<"is queue is empty"<<s.empty()<<endl;
        s.pop();
        cout<<"size of the queue"<<s.size()<<endl;
            cout<<"top of the queue  "<<s.back()<<endl;




    


    return 0;
}