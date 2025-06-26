#include<iostream>
#include<queue>
using namespace std;
int main()
{
   // max heap method//


    priority_queue<int> maxi;




    //min heap method//

    priority_queue<int,vector<int>,greater<int> >mini;
    

    maxi.push(10);
    maxi.push(330);
    maxi.push(15);
    maxi.push(87);

    cout<<"size of maxi  "<<maxi.size()<<endl;

    int n=maxi.size();


    for(int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;

    mini.push(10);
    mini.push(330);
    mini.push(15);
    mini.push(87);

    cout<<"size of mini  "<<mini.size()<<endl;

    int m=mini.size();

       for(int i=0;i<m;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }
    cout<<"khali hei kya hanji "<<mini.empty()<<endl;
    return 0;
}