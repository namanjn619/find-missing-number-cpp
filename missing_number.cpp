#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> v1(n-1);
    for(int i=0; i<n-1; i++){
        cin>>v1[i];
    }

    int sum =0;
    for(int i=0; i<v1.size(); i++){
        sum = sum + v1[i];
    }

    int totalsum = (n*(n+1))/2;

    int misnumber = totalsum - sum;
    cout<<misnumber;
    return 0;
}