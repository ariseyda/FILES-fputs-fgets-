#include<stdio.h>
#define MAX 200

//Printing strings to files.
// fgets()
// fputs()

int main(){
	
	char sentence[MAX];
	int i;
	
	
	FILE *filep;
	
	filep=fopen("science.txt","a");
	
	if(filep==NULL){
		printf("The file could not be created.");
	}
	else{
		
		//fgets () takes three parameters. 
		//The first parameter is the name of the array in which array we will be written. 
		//The second parameter is the number of characters this array can get the most.
		//The third parameter is stdin.
		
		printf("What would you like to print on the file?:");
		fgets(sentence,200,stdin);
		
		fputs(sentence,filep);
		
		printf("The file was successfully printed.");
		fclose(filep);
		
	}
	
	return 0;
}


