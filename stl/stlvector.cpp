#include<iostream>
using namespace std;
#include<vector>
int main()

//vector is dynamic array//



{

    vector<int>v;
    cout<<"size"<<v.capacity()<<endl;

    v.push_back(3);
    cout<<v.capacity()<<endl;

    v.push_back(7);
    cout<<v.capacity()<<endl;

     v.push_back(5);
    cout<<v.capacity()<<endl;

    cout<<v.front()<<endl;
    cout<<v.back()<<endl;

    v.pop_back();
    

    cout<<v.capacity()<<endl;


    vector<int>a(6,10);
    cout<<"print v"<<endl;
    for(int i:a){
        cout<<i<<" ";
    }
    // cout<<v.capacity()<<endl;
    vector<int>last(a);
    cout<<"lasst"<<" ";
    for(int i:a){
        cout<<i<<"" <<endl;

    }


    return 0;
}