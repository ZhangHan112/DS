#include<iostream>
using namespace std;
#define swap(x,y) {int temp=x; x=y; y=temp;}
void QuickSort(int* arr,int p,int r);
int partition(int* arr,int p,int r);
int main(){
    int arr[] = {9,5,2,7,6,1,3,4,8};
    for(int i=0;i<sizeof(arr)/sizeof(*arr);i++)
        cout << arr[i] << " ";
    cout << endl;
    QuickSort(arr,0,sizeof(arr)/sizeof(*arr));
    for(int i=0;i<sizeof(arr)/sizeof(*arr);i++)
        cout << arr[i] << " ";
} 
int partition(int* arr,int p,int r){
    int x = arr[r], i=p-1;
    for(int j=p; j<r; j++)
        if(arr[j]<=x){
            i++;
            swap(arr[i],arr[j]);
        }
    swap(arr[i+1],arr[r]);
    return i+1;
}
void QuickSort(int* arr,int p,int r){
    if(p<r){
        int q = partition(arr,p,r);
        QuickSort(arr,p,q-1);
        QuickSort(arr,q+1,r);
    }
}