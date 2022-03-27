#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//ascii
#define minu 65
#define maxu 90

#define minl 97
#define maxl 122

int zerochar = 0;

void encrypt(int n, char charac){
	// convert from character to ascii number
	int AsciiNum = charac;
	if(AsciiNum >= minu && AsciiNum <= maxu){
		zerochar = minu;
	}
	else if(AsciiNum >= minl && AsciiNum <= maxl){
		zerochar = minl;
	}
	else{
		printf("%c",charac);
		return;
	}
	AsciiNum -= ( zerochar - n );
	AsciiNum  = (AsciiNum %26);
	AsciiNum += zerochar;
	putchar(AsciiNum);
}

int main(int argc, char *argv[]){
		
	int pkey=atoi(argv[1]);
	int input=0;
	
	while((input = getchar()) != EOF){
			encrypt(pkey, input);
	}
	
	printf("\n");
	return EXIT_SUCCESS;
}
