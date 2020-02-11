
#include<iostream>
using namespace std;
void merge_(int *arr,int s,int e){
    int mid = (s+e)/2;
    int i = s;
    int ss= s;
    int j=e;
    int temp[e-s+1];
    while(i<=mid and mid+1=<e){
        if(arr[i]>arr[mid]){
            temp[i]=arr[mid;]
            j++;
        }else{
            temp[i] = arr[i];
            i++;
        }
    }
    if(i!=mid){
        while(i!=mid){

        }
    }
}
void mergeSort(int *arr,int start,int end_){
    if(end_==0){
        return;
    }
    int mid= (start+end_)/2;
    mergeSort(arr,0,mid);
    mergeSort(arr,mid+1,n);
    merge_(arr,s,end_);;

}
int main(){
    int arr[5]={5,4,3,2,1};
    mergeSort(arr,0,4);
}
