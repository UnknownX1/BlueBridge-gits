#include <stdio.h>
#include <stdlib.h>
int f(int a,int b){
	int min=a<b?a:b;
	int max=a<b?b:a;
	int temp=max%min;
	if(temp==0){
		return min;
	}else{
		return f(temp,min);
	}
}

int main()
{
	int n;
	scanf("%d",&n); 
	int a[n],b[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]); 
	}
	for(int i=0;i<n;i++){
		for(int j=i;j<n-1;j++){
			if(a[j]>a[j+1]){
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(int i=0;i<n-1;i++){
		b[i]=a[i+1]-a[i];
	}
	int min=99999999;
	for(int i=0;i<n-2;i++){
		int temp=f(b[i],b[i+1]);
		if(temp<min){
			min=temp;
		}
		if(min==1){
			break;
		}
	}
	int res=(a[n-1]-a[0])/min+1;
	printf("%d",res);
	return 0;
}
