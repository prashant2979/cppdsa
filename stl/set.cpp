#include <iostream>
#include <set>
using namespace std;
int main()
{
    ///set remove dupliacy//
    /// kitni baar add karo number par 1 bar hi lega //
    //work on BST //



    set<int> n;
    n.insert(10);
    n.insert(10);
    n.insert(1);

    n.insert(10);

    n.insert(10);

    n.insert(110);

    n.insert(10);

    n.insert(120);

    for(auto i:n){
        cout<<i<<endl;
    }


    set<int>::iterator it=n.begin();
    it++;

    n.erase(n.begin());

    for(auto i:n){
        cout<<i<<endl;
    }

    cout<<"count check is presnt or not"<<n.count(10)<<endl;

    set<int>::iterator itr=n.find(110);

    for(auto it=itr;it!=n.end();it++){
        cout<<*it<<"";
    }
    cout<<endl;


    return 0;
}