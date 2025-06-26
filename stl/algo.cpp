#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> n;

    n.push_back(1);
    n.push_back(10);

    n.push_back(100);

    n.push_back(0);

    n.push_back(6);

    n.push_back(8);

    n.push_back(3);

    cout<<binary_search(n.begin(),n.end(),6)<<endl;
    // cout<<lower_bound(n.begin(),n.end(6)-n.begin())<<enndl;

    int  a=5,b=6;
    cout<<max(a,b)<<endl;


    string abc="abccc";
    reverse(abc.begin(),abc.end());
    cout<<"string"<<abc<<endl;


    // vector<int> a={1,4,8,4,7,4};
    
    // sort(a.begin(),a.end());
    // cout<<a<<endl;

    return 0;
}