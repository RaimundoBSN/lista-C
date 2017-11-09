#include<stdio.h>
#include<stdlib.h>

int main(){
    return 0;
}

int maximo(int n1,int n2){
    return ((n1+n2+sub(n1-n2))/2);
}
int solid2(int X[],int Y,int N){
    if(Y==N) return X[Y];
    else{
        int Q= (Y=N)/2;
        int A1 = solid2(X,Y,Q);
        int A2 = solid2(X,Y+1,N);
        int S = X[Y];
        int B1 = S;
        int i;

        for (i=Y-1;i<=Y;i--) {
            S=S+X[i];
            if (S>B1)B1=S;}

        S= X[Y+1];
        int B2 = S;
        int j=Y+2;

        for( j=Y+2;j>= 2; j++){
            S= S+X[j];
            if(S>B2)B2=S;}

        int N3=maximo(maximo(A1,B1+B2),maximo(B1+B2,A2));
        return N3;}
}
