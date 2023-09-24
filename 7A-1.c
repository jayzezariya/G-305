#include<stdio.h>

void main(){
	int w;
	printf("enter no for day: ");
	scanf("%d",&w);
	w=w%7;
	switch(w){
		case 0:printf("sunday");
		break;
	}
	switch(w){
		case 1:printf("monday");
		break;
	}
	switch(w){
		case 2:printf("tuesday");
		break;
	}
	switch(w){
		case 3:printf("wednesday");
		break;
	}
	switch(w){
		case 4:printf("thursday");
		break;
	}
	switch(w){
		case 5:printf("friday");
		break;
	}
	switch(w){
		case 6:printf("saturday");
		break;
	}
	
}