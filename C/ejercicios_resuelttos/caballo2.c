#include <stdio.h>

#define V 1
#define F 0
#define N 7

static int tablero[N+4][N+4];
static int mx[8]={ 2, 1,-1,-2,-2,-1, 1, 2};
static int my[8]={ 1, 2, 2, 1,-1,-2,-2,-1};

static int movimiento(int,int,int);
static void inicia(void);
void desplegar(void);


int main(void)
{

	inicia();
		if(movimiento(1,2,2))
		printf("Resultado:");
		desplegar();
		getchar();
	return 0;
}

	static int movimiento(int n,int x,int y)
	{
		int i,aux_x,aux_y;
		tablero[x][y]=n;
		if(n==(N*N))
			return V;
		else{
		for(i=0;i<8;i++) {
			aux_x=x+mx[i];
			aux_y=y+my[i];
			if(tablero[aux_x][aux_y]==0) {
				if(movimiento(n+1,aux_x,aux_y))
		return V;
				}
			}
		}
	tablero[x][y]=0;
	return F;
	}

static void inicia(void)
	{
		int i,j;
		for(i=0;i<N+4;i++) {
			for(j=0;j<N+4;j++) {
				if(i>1 && i<N+2 && j>1 && j<N+2)
				tablero[i][j]=0;
				else
				tablero[i][j]=-1;
			}
		}
	}

	void desplegar(void)
	{
		int i,j;
		for(i=0;i<N+4;i++) {
			printf("\n");
			for(j=0;j<N+4;j++) {
			if(tablero[i][j]!=-1)
				printf("%4d",tablero[i][j]);
			}
		}
	}

	
