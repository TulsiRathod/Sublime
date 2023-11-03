#include<bits/stdc++.h>
using namespace std;

void solve(){
    size_t n;cin>>n;
    vector<int> arr(n);
    int ans=INT_MAX;
    for(size_t i=0;i<n;i++)cin>>arr[i];
    for(size_t i=1;i<n;i++){
        if(arr[i-1]>arr[i]){cout<<0<<endl;return;}
        ans=min(arr[i]-arr[i-1],ans);
    }
    if(ans==0)cout<<1<<endl;
    else cout<<(ans/2)+1<<endl;
}

int main(){
    int tc;cin>>tc;
    while(tc--){
        solve();
    }
    return 0;
}
