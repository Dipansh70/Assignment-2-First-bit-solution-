#include <stdio.h>

void main() {
	int s1,s2,s3;
	
		if(s1==s2 && s2==s3){
		printf("Equilateral");
	}
	else if(s1 == s2 || s2 == s3 || s1==s3){
		printf("Isosceles");
	}
	else{
		printf("Scalene");
	}
}