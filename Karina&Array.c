#include<stdio.h>

int ReadSize();
int ReadInput();

int main(){
	int length , number ,  max , p;
	length = ReadSize();
	int t[length] , s[length];
	for(int i = 0 ; i < length ; i++){
		number = ReadInput();
		t[i] = number;
	}
	max = t[0] * t[1];
	if(length == 1){
		printf("%d", t[0]);
	}else{
		if(length == 2){
			printf("%d" , t[0] * t[1]);
		}else{
			for(int i = i + 1; i < length - 1 ; i++){
		        p = t[i] * t[i + 1];
		        if(max < p){
			        max = p;
		        }

		    }
		    printf("%d", max);
	    }
	
	}
}

int ReadSize(){
	int size;
	printf("enter length of th array: ");
	scanf("%d" , &size);
	return size;
}

int ReadInput(){
	int input;
	printf("enter number: ");
	scanf("%d" , &input);
	return input;
}
