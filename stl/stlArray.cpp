#include<iostream>
using namespace std;
#include<array>
int main()
{
    array<int,4> a={1,5,7,2};

    int size=a.size();

    for(int i=0;i<size;i++){
        cout<<a[i]<<" "<<endl;
    }
    cout<<"element at 2nd position "<<a.at(3)<<endl;
    cout<<"empty index "<<a.empty()<<endl;
    return 0;
}