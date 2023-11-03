#include<bits/stdc++.h>
using namespace std;

#define ll long long
using pii=pair<int,int>;
using pll=pair<ll,ll>;
using vi=vector<int>;
using vll=vector<ll>;

#define all(n) n.begin(),n.end()
#define REP(i,a,n)  for(i=a;i<n;i++)
#define REPR(i,n,a)  for(i=n;i>=a;i--)

char toLowerCase(char ch){
	if(ch>='a'&&ch<='z')
		return ch;
	if(ch>='A'&&ch<='Z')
		return 'a'+(ch-'A');
	else return -1;
}

void solve(){
	string str1,str2;
	cin>>str1>>str2;
	int i=0;
	while(str1[i]!='\0'){
		str1[i]=toLowerCase(str1[i]);
		str2[i]=toLowerCase(str2[i]);
		i++;
	}
	if(str1>str2)cout<<1<<endl;
	if(str1<str2)cout<<-1<<endl;
	if(str1==str2)cout<<0<<endl;
}

int main(){
	solve();
	return 0;
}