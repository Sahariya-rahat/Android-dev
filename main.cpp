#include <bits/stdc++.h>
#include<iostream>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    
    int arr[n];
    
    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
    }
    int x;
    int qrr,cntv=0,cnts=0;
    cin >> x;
    
    for(int i=0 ; i<x ; i++){
       
        cin >> qrr;
        for(int j=0 ; j<n ; j++){
            cntv++;
            if(arr[j]==qrr) break;
        }
        for(int j=n-1 ; j>=0 ; j--){
            cnts++;
            if(arr[j]==qrr) break;
        }
    }
    
    cout << cntv<< " " << cnts;

}