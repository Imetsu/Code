#include <iostream>
#include <cmath>
#include <algorithm>
#include <map>
#include <vector>
#include <iomanip>
#include <numeric>
#include <set>
#include <unordered_set>
#include <bits/stdc++.h>
using namespace std;
//int x[100],n, cnt, final=0;
//void ktao(){
//    cnt=1;
//    x[1]=n;
//}
//void sinh(){
//    int i=cnt;
//    while(i>=1 && x[i]==1){
//        --i;
//    }
//    if(i==0){
//        final=1;
//    }
//    else{
//        x[i]--;
//        int d=cnt-i+1;
//        cnt =i;
//        int q = d/x[i], r=d%x[i];
//        for(int j=1;j<=q;j++){
//            x[i+j]=x[i];
//        }
//        cnt+=q;
//        if(r>0){
//            x[cnt+1]=r;
//            cnt++;
//
//        }
//    }
//}
//int main() {
//    cin >> n;
//    ktao();
//    while(!final){
//        for(int i=1;i<=cnt;i++){
//            cout << x[i] <<" ";
//        }
//        sinh();
//
//        cout<< endl;
//    }
//}
bool check(vector<int> a, int n){
    for(int i=1;i<n;i++){
        if(a[i]<a[i-1]){
            return false;
        }
    }
    return true;
}
bool cmp(pair<int,int> a, pair<int,int> b){
    return a.second < b.second;
}
string s="";
void ktao(){

}
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    bool check=false;
    int i=0;
    while(!check){
        if(a[])
    }
}