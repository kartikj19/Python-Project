#include<bits/stdc++.h>
using namespace std ;
void printArr(int arr[] , int n){
    for(int i=0 ; i<n ; i++){
        cout << arr[i] << " " ;
    }
    cout << endl ;
}
int partition(int arr[] , int si , int ei){
    int i = si -1 ;
    int pivot = arr[ei] ;
} 
void quickSort(int arr[] , int si , int ei){
    if(si >= ei){
        return ;
    }
    int pivotIdx = partition(arr , si ,ei) ;
    quickSort(arr , si , pivotIdx-1) ; //left half
    quickSort(arr , pivotIdx+1 , ei ) ; //righ half
}