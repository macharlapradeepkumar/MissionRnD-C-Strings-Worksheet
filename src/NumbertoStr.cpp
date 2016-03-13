/*
OVERVIEW: Given a float number ,Convert it into a string 

INPUTS: A Float,Final string ,How many digits after decimal has to be displayed .
Its zero for integers.


OUTPUT: No need to output anything ,Modify the str in function parameter such that it
now holds the string format of the float number specified

Example : number_to_str(345,str,0);
Should copy "345\0" in the str;
number_to_str(345.342,str,2);
Should copy "345.34" in the str;

NOTES: Don't create new string.

*/

#include <stdio.h>
int getnum(int n);
int pointfun(char *str, int m, int index);
int result(char *str, int n,int index);

void number_to_str(float number, char *str, int afterdecimal){
	int count=0, l, m;
	if (number < 0){
		count = 1;
		number = number - (number)-(number);
	}
	int num = number;
	float b = number - num;
	while (afterdecimal){
		b = b * 10;
		afterdecimal--;
	}
	int num2 = b;
	l = getnum(num);
	m = getnum(num2);
	if (count == 1){
		str[0] = '-';
		int p = result(str, l, 1);
		int q = pointfun(str, m, p);
		result(str, m, q);
	}
	else{
		 int p = result(str, l, 0);
		int q = pointfun(str, m, p);
		result(str, m,q);
	}
}

int getnum(int n){
	int rev=0, r;
	while (n != 0){
	 r = n % 10;
		 rev = rev * 10 + r;
		n = n / 10;
	}
		return rev;
	}

	int pointfun(char *str, int n, int index){
			if (n != 0){
				str[index] = '.';
				index++;
			}
			return index;
		}
	

	int result(char *str, int n, int index){
		int r;
		while (n != 0){
			r = n % 10;
			str[index] = r+'0';
			index++;
			n = n / 10;
		}
		return index;
	}
