#include<stdio.h>
int f(int n){
	if(n<=2){
		return n;
	}
	int x=1,y=2;
	int z;
	for(int i=3;i<=n;i++){
		z=x+y;
		x=y;
		y=z;
	}
	return z;
} 
int main(){
	int n;
printf("ÊäÈëÌ¨½×ÓÐ£º\n");
scanf("%d",&n);
printf("%d",f(n));
return 0;
}
