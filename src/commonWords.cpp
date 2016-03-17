/*
OVERVIEW: Given two strings, find the words that are common to both the strings.
E.g.: Input: "one two three", "two three five".  Output: "two", "three".

INPUTS: Two strings.

OUTPUT: common words in two given strings, return 2D array of strings.

ERROR CASES: Return NULL for invalid inputs.

NOTES: If there are no common words return NULL.
*/

#include <stdio.h>

#include <malloc.h>

#define SIZE 31
int result(char *str1, char *str2, int a, int b, int c, int d);
void storefun(char **str, int c, int d);
int result(char *str1, char *str2, int a, int b, int c, int d)
{
	int p = 0, q = 0;
	int i = b - a;
	int j = d - c;
	if (i != j) return 0;
	while (a <= b){
		if (str1[a] != str2[c]) return 0;
		a++; c++;
	}
	return 1;

}
void storefun(char **str, char *str1, int c, int d){
	int	j = 0;
	static int q = 0;
	while (c <= d){
		str[q][j] = str1[c];
		c++;
		j++;
	}
	str[q][j] = '\0';
	q++;
}




char ** commonWords(char *str1, char *str2) {
	if (str1 == NULL || str2 == NULL) return NULL;
	char **str;
	int cnt = 0;
	str = (char**)malloc(SIZE*sizeof(char*));
	for (int i = 0; i < SIZE; i++)
		str[i] = (char*)malloc(SIZE*sizeof(char));
	int i = 0, j = 0, a = 0, b = 0, c = 0, d = 0, k = 0, l = 0, p = 0;
	while (str1[i] != '\0'){
		if (str1[i + 1] == ' ' || str1[i + 1] == '\0'){
			b = i;
			l = 0;
			for (j = 0; str2[j] != '\0'; j++){
				if (str2[j + 1] == ' ' || str2[j + 1] == '\0'){
					k = j;
					p = result(str1, str2, a, b, l, k);
					if (p == 1){
						storefun(str, str2, l, k);
						cnt++;
					}
					l = j + 2;
				}
			}
			a = i + 2;
		}
		i++;
	}
	if (cnt == 0)return NULL;
	return str;
}