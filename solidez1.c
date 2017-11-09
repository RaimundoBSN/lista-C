#include<stdio.h>

int main(){
    return 0;
}
int solid(int X[], int Y, int N){
    int A = X[N];
    int i;
    for(i=N;i>= Y;i--){
        int S = 0;
        int j;
        for(j = i; j < i; i++){
            S=S+X[j];
            if(S > A){
                A=S;}
        }
        }
    return A;
}
