#include<iostream>
using namespace std;
int main(){
    int num,temp1,temp2;
    //while(!cin.eof()){
        cin >> num;
        temp1 = num/12;
        temp2 = num%12;
        cout << temp1*50+temp2*5; << " ";
    //}
}