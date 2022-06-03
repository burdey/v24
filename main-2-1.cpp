//
// Created by Satori on 2022/6/3.
//

#include <iostream>
using namespace std;

int main(){
    Dymocks dyOnline(true);
    Dymocks dyOffline(false);

    cout<<dyOnline.get_storeID()<<endl;
    cout<<dyOnline.get_isOnline()<<endl;
    cout<<dyOnline.get_onlineTax()<<endl;

    cout<<dyOffline.get_storeID()<<endl;
    cout<<dyOffline.get_isOnline()<<endl;
    cout<<dyOffline.get_onlineTax()<<endl;

    return 0;
}
