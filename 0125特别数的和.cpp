#include <stdio.h>
int f(int a){
	while(a){
		int d;
		d=a%10;
		if(d==2||d==0||d==1||d==9){
			return 1;
		}
		a/=10;
	}
	return 0;
}
int main()
{
	int n,cnt=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(f(i)){
			cnt+=i;
		}
	}
	printf("%d",cnt);
	return 0;
}
