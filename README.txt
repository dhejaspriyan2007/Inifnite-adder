INFINITE ADDER
	A simple c program that continuously adds a number infnity times and 
prints the value infinitely.

=>Description
	This program asks the user to enter a number, then it keep adding the number to 
itself and prints the new value in an infinite loop.

  Example:
	if the input is '5'

    output:
	5
	10
	15
	20
	.
	.
	.

=>Language used
	C language is used to this infinite adder program.

=>How to compile
	Use GCC compiler:
	  In Git bash,run this command.
	    ~$>gcc infinite_adder.c -o infinite_adder

=>How to run
	To run this program run the following command in Git bash.
	  ~$>./infinite_adder

=>Example code
	
#include<stdio.h>
	int main(){
		int a;
		printf("Enter a value:");
		scanf("%d",&a);

		while(a){
			printf("%d",a);
			a=a+a;
		}
		return 0;
}


=>Author
	Dhejaspriyan R(id:583225105007), Ist year,BE.Electrical	and Electronics Engneering,NPRCET.
