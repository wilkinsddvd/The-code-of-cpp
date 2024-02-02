#include<stdio.h>
void main(int argv,int argc[]){
	int a=26,x,y;
	char b[2*a-1][a];
	for(x = 1;x<=a;x++)
		for(y=1;y<=a;y++){
			b[x][y] = ' ';
			if(x+y>=a+1){
				b[x][y] = x+y-a-1+32;
				b[2*a-x][y] = b[x][y];
			}
		}
		for(y=1;y<=a;y++){
			for(x=1;x<=2*a-1;x++){
				printf("%c",b[x][y]);

			}	
		} 
}
