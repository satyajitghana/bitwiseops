//
//  main.cpp
//  bitwiseops
//
//  Created by Satyajit Ghana on 16/05/17.
//  Copyright © 2017 Satyajit Ghana. All rights reserved.
//

#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int x=182;
    int y=183;
    int c,d,res;
    cout<<bitset<32>(x);
    cout<<"\n";
    cout<<bitset<32>(y);
    cout<<"\n";
    c=x&(((~0)<<7)|~((~0)<<3));
    cout<<bitset<32>(c);
    cout<<"\n";
    d=(y&(~((~0)<<3)))<<3;
    cout<<bitset<32>(d);
    cout<<"\n";
    res=c|d;
    cout<<bitset<32>(res);
    cout<<"\n";
    return 0;
}
