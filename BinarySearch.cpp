#include<iostream>
using namespace std;
int BinarySearch(int* arr,int start,int end,int key);
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int num,pos;
    cout << "請問要找哪個數";
    cin >> num;
    pos = BinarySearch(arr,0,sizeof(arr)/sizeof(arr[0]),num);
    if(pos==-1) cout << "Not in array!!" << endl;
    else cout << pos << endl;
    return 0;
}
int BinarySearch(int* arr,int start,int end,int key){
    int mid = (start + end) / 2;
    if(start<=end){
        if(arr[mid]==key) return mid;
        else if(arr[mid]>key) return BinarySearch(arr,start,mid-1,key);
        else return BinarySearch(arr,mid+1,end,key);
    }
    else
    {
        return -1;
    }
    
}