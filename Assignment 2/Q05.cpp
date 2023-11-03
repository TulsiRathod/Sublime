#include<bits/stdc++.h>
using namespace std;
void BackEnd(int input);
void FrontEnd()
{
	int input=0,bcv=0,c1,c2,c3,c4;
	cout<<"Enter 1 for Seat"<<endl;
	cin>>c1;
	if (c1==1)
	{
		int color;
		cout<<"1. Beige"<<endl;
		cout<<"2. Dark"<<endl;
		cout<<"3. Dual Pattern"<<endl;
		cin>>color;
		bcv = 1;
		input |= bcv;
		if (color==1)
		{
			bcv = 0;
			input |= bcv;
		}
		else if (color==2)
		{
			bcv = 1; 	// 0000 0001
			bcv <<= 1;	// 0000 0010
			input |= bcv;
		}
		else if (color==3)
		{
			bcv = 1;	// 0000 0001 -> 0000 0100
			bcv << 2;	// 0000 0100
			input |= bcv;
		}
	}
	cout<<"Enter 1 for Alloy"<<endl;
	cin>>c2;
	if (c2==1)
	{
		bcv = 1;
		bcv <<= 3;
		input |= 2;
	}
	cout<<"Enter 1 for color"<<endl;
	cin>>c3;
	if (c3==1)
	{
		int color;
		cout<<"1. Coffee Brown"<<endl;
		cout<<"2. Pearl White"<<endl;
		cout<<"3. Marine Blue"<<endl;
		cout<<"4. Ash Grey"<<endl;
		cin>>color;
		bcv = 1;
		bcv <<= 4;
		input |= bcv;
		if (color == 1)
		{
			// no code required to set bit 5,6 to 00
		}
		else if (color == 2)
		{
			bcv = 1; // 0000 0001 -> 0010 0000
			bcv <<= 5;
			input |= bcv;
		}
		else if (color == 3)
		{
			bcv = 1; // 0000 0001 -> 0100 0000
			bcv <<= 6;
			input |= bcv;
		}
		else if (color == 4)
		{
			bcv = 0b11; // 0000 0011 -> 0110 0000
			bcv <<= 7;
			input |= bcv;
		}
	}
	cout<<"Enter 1 for Steering Cover"<<endl;
	cin>>c4;
	if (c4==1)
	{
		bcv = 1; // 0000 0001 -> 1000 0000
		bcv <<= 8;
		input |= bcv;
	}
	BackEnd(input);
	// cout<<input<<endl;
}
void BackEnd(int input)
{
	if (input & 0b00000001)
        cout<< "SeatCovers | ";

    if (input & 0b00000010)
        cout<< "Beige | ";

    if (input & 0b00000100)
        cout<< "Dark | ";

    if (input & 0b00001000)
        cout<< "DualPatter | ";

    if (input & 0b00010000)
        cout<< "Alloys | ";

    if (input & 0b00100000)
        cout<< "Coffee Brown | ";

    if (input & 0b01000000)
        cout<< "Pearl White | ";

    if (input & 0b10000000)
        cout<< "Marine Blue | ";

    if (input & 0b100000000)
        cout<< "Ash Grey | ";

    if (input & 0b1000000000)
        cout<< "Steering Cover | ";    
}


int main(){
	FrontEnd();
	return 0;
}