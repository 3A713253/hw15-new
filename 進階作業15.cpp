#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
	
	printf("by 3a713253\n\n");
	char input_arr[]="Taiwan, Touch, Your, Heart";
	char *ptr_input;
	
	int a;
	int b;
	
	b=strlen(input_arr);
	ptr_input=input_arr;
	
	for(a=0;a<b;a++){
		
		if(*(ptr_input+a)>64 && *(ptr_input+a)<90){
			printf("%c", *(ptr_input+a));
		}
		else if(*(ptr_input+a)>96 && *(ptr_input+a)<123){
			printf("%c", *(ptr_input+a));
		}
		else if(*(ptr_input+a)==32){
			printf("%c", *(ptr_input+a));
		}
	}
	printf("\n\n");
	system("pause");
	return 0;
}
