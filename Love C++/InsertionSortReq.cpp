#include<bits/stdc++.h>
using namespace std;
void InsertionSort(int *arr,int n){
	if(n<=1){
		return ;
	}
	InsertionSort(arr,n-1);
	int LastElement=arr[n-1];
	int i=n-2;
	while(i>=0&&arr[i]>LastElement){
		arr[i+1]=arr[i];
		i--;
	}
	arr[i+1]=LastElement;
}

int main(){
	int arr[5]{23,54,87,34,9};
	int n=sizeof(arr)/sizeof(int);
	InsertionSort(arr,n);
	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}