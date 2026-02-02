
#include<iostream>
using namespace std;

int BinarySearch(int arr[],int first,int last,int key){
    if(first>last){
        return -1;
    }
    int mid=first+(last-first)/2;
    if(arr[mid]==key){
        return mid;
    }
    else if(arr[mid]<key){
        return BinarySearch(arr,mid+1,last,key);
    }
    else{
        return BinarySearch(arr,first,mid-1,key);
    }
}

int main(){
     int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
     int index=BinarySearch(arr,0,9,23);
     if(index!=-1){
        cout<<"Element found at index: "<<index<<endl;
     }
     else{
        cout<<"Element not found"<<endl;
     }
     return 0;
}
