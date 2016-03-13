/*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string according to the logic.

NOTES: Don't create new string.
*/
#include <Stdio.h>
#include <string.h>
void str_words_in_rev(char *input, int len){
	int i = 0, j=len,a=0;
	int index = 0, c = 0;
	while (input[index] != '\0'){
		if (input[index] == ' ')
			c =1;
		index++;
	}
	if (c == 1){
	while (i < j){
		int temp1 = input[i];
		input[i] = input[j-1];
		input[j-1] = temp1;
		i++;
		j--;
	         }
	
		              int k = 0;

		           for (i = 0; input[i] != '\0'; i++){
					   if (input[i] == ' '){
						   k++;
					   }
		         	if ((input[i + 1] == ' '||input[i+1]=='\0')&&(input[i] != ' ')){
			        	j = a = i;
				    while (k < j){
					int temp2 = input[k];
					input[k] = input[j];
					input[j] = temp2;
					k++;
					j--;
				       }
				       k = a;
				           k++;
			          }
			
		    }
	        }
	
	     }
