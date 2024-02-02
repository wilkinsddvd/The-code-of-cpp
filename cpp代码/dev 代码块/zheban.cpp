#include <iostream>
using namespace std;
int I=0;
int temp=0;
int b[10000];
int num=0;
void Findk(int a[], int low, int high, int k){
	if(low<=high){
		int mid;
		mid = (low+high)/2;
		b[num++]=a[mid];
		if(k==a[mid]){
			I=mid;
			temp=1;
		}else if(k<a[mid]){
			Findk(a,low,mid-1,k);
		}else{
			Findk(a,mid+1,high,k);
		}
	} 
}

int main(){
	int n,k;
	int a[10000];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d,",&a[i]);
	}
	scanf("%d",&k);
	Findk(a,0,n-1,k);
	if(temp==0){
		printf("no\n");
	}else{
		printf("%d\n",I);
	}
	printf("%d",b[0]);
	for(int i=1;i<num;i++){
		printf(",%d",b[i]);
	}
	
}
