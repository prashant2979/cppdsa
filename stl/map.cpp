#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,string> m;

    m[1]="babbar";
    m[2]="sher";
    m[3]="kumar";

    m.insert({5,"bheem"});
    cout<<"before erase";

    for(auto i:m){
        cout<<i.first<<i.second<<endl;
    }

    cout<<"after erase"<<endl;;
    m.erase(5);
    for(auto i:m){
        cout<<i.first<<i.second<<endl;
    }


    
    return 0;
}