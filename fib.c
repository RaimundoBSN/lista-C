#include <stdio.h>


#define MAXN 1000100

int n, dp[MAXN]; // declaro n e o vetor auxiliar

int fib(int x){ // declaro a fun��o int fib(int x)

	// se j� calculei, alguma vez, o valor de fib(x)
	if(dp[x]!=-1) return dp[x]; // retorno o que est� salvo em dp[x]

	// se n�o, calculo a fun��o normalmente
	if(x==0) return 0; // se x=0, retorn 0
	if(x==1) return 1; // se x=1, retorn 1

	// se n�o era nenhum dos casos base
	dp[x]=fib(x-1)+fib(x-2); // calculo o valor de fib(x) e salvo em dp[x]

	return dp[x]; // para s� ent�o retornar o valor que deixei salvo l�
}

int main(){

	memset(dp, -1, sizeof(dp)); // fa�o todos as posi��es de dp receberem o valor -1

	scanf("%d", &n); // leio o valor de n

	printf("%d\n", fib(n)); // e imprimo o valor de fib(n)

	return 0;
}
