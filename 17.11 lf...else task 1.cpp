#include<stdio.h>

main(){
	
	int h;
	int y;
	
	printf("enter h:-");
	scanf("%i",&h);
	
	printf("enter y:-");
	scanf("%i",&y);
	
	if(h<y){
		
		printf("h is minimun");	
	}
	
	else if(y<h){
		printf("y is minimun");
	}
}
