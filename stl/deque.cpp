#include<iostream>
using namespace std;
#include<deque>
int main()
{
    deque<int>d;
    d.push_back(1);
    d.push_front(3);

    for(int i:d){
        // cout<<i<<" "<<endl;
    }

    // cout<<"after pop"<<endl;
    // d.pop_back();
    // cout<<endl;

    for(int i:d){
        // cout<<i<<" "<<endl;
    }

    cout<<"empty or not"<< " " <<d.empty()<<endl;
    cout<<"front"<<d.front()<<endl;
        cout<<"back"<<d.back()<<endl;



        cout<<"before erase"<<endl;
        cout<<"size"<<d.size()<<endl;


        d.erase(d.begin(),d.begin()+1);

        cout<<"after erase"<<endl;
        cout<<"size"<<d.size()<<endl;


        for(int i:d){
            cout<<i<<endl;
        }






    return 0;
}