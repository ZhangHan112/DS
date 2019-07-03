#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
#define Queens 8
#define Generation 10

void Generate_chessbook(int *a);
void Print_chessbook(int* a);
int score(int* a);
void Hill_Climbing(int* a);
int main(){
    static int  a[Queens]={0};
    // generating random number
    Generate_chessbook(a);

    // print chessbook
    Print_chessbook(a);
    Hill_Climbing(a);

    cout << "collision: " << score(a) << endl;;
    
    return 0;
}
void Generate_chessbook(int *a){
     srand(time(NULL));
    for(int i=0;i<Queens;i++)
        a[i] = rand()%Queens;
}
void Print_chessbook(int* a){
    for(int i=0;i<Queens;i++){
        for(int j=0;j<Queens;j++){
            if(a[i]!=j) cout << "0 ";
            else cout << "1 ";
        }
        cout << endl;
    }
    cout << endl;
}
int score(int* a){ //collisoin 評分 , 碰撞越多 , 得分越高
    static int sum=0;
    for(int i=0;i<Queens-1;i++){ //往下掃，共掃描(n-1)次
        for(int j=i+1,k=a[i]-1;j<Queens;k--,j++){ //負責左下方之collision , 左邊最多j個collision
            if(a[j]==k){
                sum++;
                //cout << "i: " << i << " j: " << j << " *" << endl;
            } 
        }
        for(int j=i+1,k=a[i]+1;j<Queens;k++,j++){ //負責右下方之collision , 右邊最多j個collision
            if(a[j]==k){
                sum++;
                //cout << "i: " << i << " j: " << j << " **" << endl;
            }
        }
        for(int j=i+1;j<Queens;j++){ //負責下方之collision , 下方最多 i*(i-1)/2 個collision
            if(a[j]==a[i]){
                sum++;
                //cout << "i: " << i << " j: " << j << " ***" << endl;
            } 
        }

    }
    return sum;
}
void Hill_Climbing(int* a){
    int init = score(a), temp = 5;

    while(true){

        if(temp==0) break;

        for(int i=0; i<Generation; i++){
            for(int row=0; row<Queens; row++){
                for(int col=0; col<Queens; col++){
                    if(col!=a[row]){
                        
                    }
                }
            }
        }
        
    }
    
}