#include <stdio.h>

int main(){
int  totalScore = 0;
int number = 0;

printf("enter 10 score\n");

for ( int i = 0; i < 10; i++){
printf("enter score %d ", i + 1 ," :");
scanf("%d", &number);
totalScore += number;
}


printf("the total score is %d\n ",totalScore);

return 0;
}