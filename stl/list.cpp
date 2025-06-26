#include<iostream>
using namespace std;
#include<list>
int main()
{
    list<int> l;
    list<int> n(5,100);
    cout<<"printing the value";
     for(int i:n){
        cout<<i<<endl;
    }

    l.push_back(3);
    l.push_front(660);


    for(int i:l){
        cout<<i<< " ";
    }

    cout<<endl;
    l.erase(l.begin());
    cout<<"after erase"<<endl;
   
    cout<<"after erase size  "<<l.size()<<endl;
    return 0;
}