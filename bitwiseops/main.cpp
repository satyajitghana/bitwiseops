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

void print(int a) {
    cout<<bitset<32>(a);
    cout<<"\n";
}

int main() {
    int x,y,p,n,c,d,res;
    cout<<"\nEnter two numbers : ";
    cin>>x>>y;
    cout<<"Enter value of p : ";
    cin>>p;
    cout<<"Enter value of n : ";
    cin>>n;
    cout<<"x      : "; print(x);
    cout<<"y      : "; print(y);
    //Here i am trying to clear the n bits from the pth place.
    //quite simple operation
    c=x&(((~0)<<(p+1))|~((~0)<<(p-n+1)));
    cout<<"c      : "; print(c);
    //Here i try to clear everything except the last n bits.
    d=(y&(~((~0)<<n)))<<(p-n+1);
    cout<<"d      : "; print(d);
    res=c|d;
    cout<<"Result : "; print(res);
    cout<<"\n";
    return 0;
}
