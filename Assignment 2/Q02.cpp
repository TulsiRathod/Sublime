#include<bits/stdc++.h>
using namespace std;
int main(){
	int a=0b10101110101010110101110100111011;
	int n=16-1;
	int b= (1<<n) | a;
	cout<<"1)"<<endl;
	cout<<bitset<32>(a)<<endl;
	cout<<bitset<32>(b)<<endl;

	n=28-1;
	b=~(1<<n)&a;
	cout<<"2)"<<endl;
	cout<<bitset<32>(a)<<endl;
	cout<<bitset<32>(b)<<endl;
	int odd=0;
	int even=0;
	int flag=1;
	int x=a;
	while(x!=0){
		if(flag==0){
			odd=(odd<<1)+(x&1);
			flag=1;
		}else{
			even=(even<<1)+(x&1);
			flag=0;
		}
		if(x>0){
			x=x>>1;
		}else{
			x=x<<1;
		}
	}
	if(flag==0){
		odd=(odd<<1)+(x&1);
	}else{
		even=(even<<1)+(x&1);
	}
	cout<<"3)"<<endl;
	cout<<bitset<16>(odd)<<endl;
	cout<<bitset<16>(even)<<endl;
	
	std::bitset<32> temp(a); 
	n=3; 
    for (size_t i = (n-1)*4; i < n*4; i++) {
		temp[i]=~temp[i];
    }
    cout<<"4)"<<endl;
	cout<<bitset<32>(a)<<endl;
	cout<<bitset<32>(temp)<<endl;
	return 0;
}