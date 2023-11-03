#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	a=0b10111001;
	b=0b10010110;
	cout<<"A) "<<bitset<8>(a&b)<<endl;

	a=0b11011110;
	b=0b11000101;
	cout<<"B) "<<bitset<8>(a&b)<<endl;

	a=0b01111101;
	b=0b10111110;
	cout<<"C) "<<bitset<8>(a|b)<<endl;

	a=0b11000110;
	b=0b11011100;
	cout<<"D) "<<bitset<8>(a|b)<<endl;

	a=0b10111001;
	b=0b11110110;
	cout<<"E) "<<bitset<8>(a^b)<<endl;

	a=0b011000010;
	b=0b00000101;
	cout<<"F) "<<bitset<8>(a^b)<<endl;

	a=0b0111110110111110;
	cout<<"G) "<<bitset<16>(~a)<<endl;

	a=0b11011110; 
	b=0b11000101;
	cout<<"H) "<<bitset<8>(~a&b)<<endl;

	a=1<<7;
	cout<<"I) "<<bitset<8>(a)<<endl;

	a=pow(2, 7);
	b=a>>4;
	cout<<"J) "<<bitset<8>(b)<<endl;
	return 0;
}