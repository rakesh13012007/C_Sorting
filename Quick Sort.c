#include<stdio.h>
int Partition(int A[],int key,int strt,int end){
	int s=strt;
	int e=end;
	while(s<e){
		while(A[s]<=key){
			s++;
		}
		while(A[e]>key){
			e--;
		}
		if(s<e){
			int temp = A[s];
			A[s]=A[e];
			A[e]=temp;
		}
	}
	int temp = A[e];
	A[e]=key;
	A[strt]=temp;
	return e;
}
void Quick_Sort(int A[],int n,int strt,int end){
	if(strt < end){
		// key to divide
		int p=A[strt];
		p=Partition(A,p,strt,end);
		// from 0 to p(index) 
		Quick_Sort(A,n,strt,p);
		// from p+1(index) to end
		Quick_Sort(A,n,p+1,end);
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int A[n];
	for(int i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	Quick_Sort(A,n,0,n-1);
	for(int i=0;i<n;i++){
		printf("%d ",A[i]);
	}
}