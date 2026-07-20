#include <stdio.h>

void main(){
	int maths,science,english,history,geography,Total,Percentage;
	maths = 90;
	science = 99;
	english = 89;
	history = 98;
	geography = 90;
	Total = maths+science+english+history+geography;
	Percentage = Total/5;
	printf("The total marks are %d and the overall percentage is %d", Total,Percentage);
}