/*
OVERVIEW: Given a string, remove all spaces in it.
E.g.: Input: "abd scd". Output: "abdscd"

INPUTS: A string.

OUTPUT: Return string after removing spaces.

ERROR CASES: Return '\0' for invalid inputs.

NOTES: Don't create new string.
*/

char removeSpaces(char *str) {
	if (str == '\0') return '\0';
	else
	{
		int i = 0;
		while(str[i] != '\0'){
			if (str[i] == 32){
				for (int j = i; str[j - 1] != '\0'; j++)
					str[j] = str[j + 1];
				
				}
			else i++;

			
		}
		return *str;
	}
}
