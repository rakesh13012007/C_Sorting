#include<stdio.h>
void SelectionSort(int A[],int n)
{
    for(int i=0;i<n-1;i++)
    {
    	// Assuming i(idx) is min
        int min_ind=i;
        for(int j=i+1;j<n;j++)
        {
            if(A[j]<A[min_ind])// findind min value
            {
                min_ind=j;
            }
        }
        // Swapping
        int temp=A[i];
        A[i]=A[min_ind];
        A[min_ind]=temp;
    }
}
int main()
{
    int n; 
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    // Function Call
    SelectionSort(A,n);//O(n^2)
    for(int i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    return 0;
}