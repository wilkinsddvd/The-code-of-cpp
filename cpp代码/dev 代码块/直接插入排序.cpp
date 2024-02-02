#include<bits/stdc++.h>
using namespace std;

void binary_insertion_sort(int arr[],int len)
{
	int i,j,temp,m,low,high;
	for(i=1;i<len;i++){
		temp = arr[i];
		low = 0;
		high = i-1;
		while(low <= high){
			m = (low + high)/2;
			if(arr[m]>temp)
				high = m-1;
			else
				low = m+1;
		}
	}
	for(j=i-1;j>=high+1;j--)
		arr[j+1] = arr[j];
	arr[j+1] = temp;
}

int main(){
	
}
