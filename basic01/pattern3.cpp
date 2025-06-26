#include<iostream>
using namespace std;


int main(){

    // int row,col;
    // for(row=1;row<=5;row++){
    //     for(col=1;col<=5-row;col++){
    //         cout<<"  ";
    //     }
    //     for(col=1;col<=row;col++){
    //         cout<<row <<" ";
    //     }
    //    cout<<endl;
    // } 

    // int row,col;
    // for(row=1;row<=5;row++){
    //     for(col=1;col<=5-row;col++){
    //         cout<<"  ";
    //     }
    //     for(col=1;col<=row;col++){
    //         cout<<col<<" ";
    //     }
    //     cout<<endl;
    // }


    // int row,col;
    // for(row=1;row<=5;row++){
    //     for(col=1;col<=5-row;col++){
    //         cout<<"  ";
    //     }
    //     for(col=1;col<=row;col++){
    //         cout<<char(col+64)<<" ";
    //     }
    //     cout<<endl;
    // }

    int row,col;
    for(row=1;row<=5;row++){
        for(col=1;col<=5-row;col++){
            cout<<"  ";
        }
        for(col=1;col<=row;col++){
            cout<<row<<" ";
        }
        cout<<endl;
    }

}