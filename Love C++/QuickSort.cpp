#include<bits/stdc++.h>
using namespace std;

int partition(int* arr,int start,int end){
	int pivot=arr[start];
	int i=start,j=end;
	while(i<j){
		while(arr[i]<=pivot && i<=end-1){
			i++;
		}
		while(arr[j]>=pivot && j>=start+1){
			j--;
		}
		if(i<j){
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[start],arr[j]);
	return j;
}

void quickSort(int *arr,int start, int end){
	if(start<end){
		int p=partition(arr,start,end);
		quickSort(arr,start,p-1);
		quickSort(arr,p+1,end);
	}
}
int main(){
	int arr[7]{13,53,67,38,42,1,20};
	int n=7;
	quickSort(arr,0,n-1);
	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}