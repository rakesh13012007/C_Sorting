#include<stdio.h>
// Printing array
void Print(int A[],int n){
	for(int i=0;i<n;i++){
		printf("%d ",A[i]);
	}
}
// Sorting
void Bubble(int A[],int n,int i,int j){
	//Base Case 1
	if(i>=n){
		return;
	}
	// Base Case 2
	if(j>=n){
		return;
	}
	// Swaping
    if( j<n-1 && A[j]>A[j+1]){
	 int tmp = A[j];
	 A[j]=A[j+1];
	 A[j+1]=tmp;
}
	// Recursive call
	 Bubble(A,n,i,j+1);
	 Bubble(A,n,i+1,0);
}
int main()
{
	int n;
	scanf("%d",&n);
	int A[n];
	for(int i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	int i=0,j=0;
	// function call
	Bubble(A,n,i,j);
	//Print call
	Print(A,n);
}
