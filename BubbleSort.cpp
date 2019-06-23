#include<iostream>
using namespace std;
#define swap(x,y) {int temp=x; x=y; y=temp;}
void BubbleSort(int* arr){
    int flag;
    for(int i=0;i<8;i++){
        flag=0;
        for(int j=0;j<8-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag=1;
            }  
        }
        if(flag==0) break;
    }
        
}
int main(){
    int arr[9] = {9,5,2,7,6,3,1,4,8};
    for(int i=0;i<sizeof(arr)/sizeof(*arr);i++)
        cout << arr[i] << " ";
    BubbleSort(arr);
    cout <<endl;
    for(int i=0;i<sizeof(arr)/sizeof(*arr);i++)
        cout << arr[i] << " " ;

}