#include<bits/stdc++.h>
using namespace std;
int main(){
	float arr[5];
	for(size_t i=1;i<=5;i++){
		arr[i-1]=1+(i*0.1);
	}
	for(int i=4;i>=0;i--){
		cout<<arr[i]<<"  ";
	}
	return 0;
}