#include<stdio.h>
#include<math.h>
int main()
{   
	int n;
	int t=0;
	long long int b[9999];
	scanf("%d",&n);
	int i,j,k;
	long long int a[100][100]={0};
	
	for(i=1;i<=99;i++){
		for(j=1;j<=i;j++){ 
			t++;
			if(i==1)
				a[i][j]=1;
			else if(j==i)
				a[i][j]=1;
			else 
				a[i][j]=a[i-1][j-1]+a[i-1][j];
			b[t]=a[i][j];
		}
	}

	for(t=1;t<9999;t++){
		if(b[t]==n){
			break; 
		}
		printf("%d\n",b[t]);
	}
	printf("%d",t);
	return 0;
}


