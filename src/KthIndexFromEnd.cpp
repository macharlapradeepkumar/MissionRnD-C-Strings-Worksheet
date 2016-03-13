/*
OVERVIEW: Given a string, return the letter at Kth index from the end of the string.
E.g.: Input: "qwertyui", 3. Output: 't' (index starting from zero).

INPUTS: A string and value of K.

OUTPUT: Return the letter at Kth index from the end of the string (index starting from zero).

ERROR CASES: Return '\0' for invalid inputs.

NOTES:
*/

char KthIndexFromEnd(char *str, int K) {
	int i = 0 ;
	if (str == nullptr) return '\0';
	while (str[i] != '\0'){
		i++;
	}
	if ( (K < 0) || (K > i-1))
		return '\0';
	else
		return str[i-1 - K];



}