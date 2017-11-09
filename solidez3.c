#include<stdio.h>

int main(){
    return 0;
}

int solidezIII(int X[], int Y, int N){//A[]=X[]  p=Y r=N
    int Z[N];
    Z[Y] = X[Y];
    int Q;
    for(Q=Y+1;Q<N;Q++){
        if(Z[Q-1]>0){
            Z[Q]=Z[Q-1]+X[Q];
        }else{
            Z[Q] = X[Q];
        }
    }
    int n1=Z[Y];
    for(Q=Y+1; Q<N;Q++){
        if(Z[Q]>n1){
            n1=Z[Q];
        }
    }
    return n1;
}
