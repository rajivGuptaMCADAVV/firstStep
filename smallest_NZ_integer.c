/*
Author: Rajiv Gupta
Date: 12-Jan-2015

Program to print the smallest integer, which could not
be obtained by adding any subset of the array.
Ex. arr = {1,1,1,5}, you could not make 4 by adding any subset of the elements of array 'arr'.
Hence the answer is 4.
*/
#include<stdio.h>
#include<conio.h>
void calcSmallest(int[], int);
void main(){
int arr[10], limit, i, n;
printf("Enter the limit of the array : ");
scanf("%d",&limit);
for(i=0; i<limit; i++)
scanf("%d",&arr[i]);
n = sizeof(arr)/sizeof(arr[0]);
calcSmallest(arr, n);
getch();
}
void calcSmallest(int arr[], int n){
int res = 1, i;
for(i = 0; i < n && arr[i] <= res; i++){
res += arr[i];
}
printf("Result : %d", res);
}
