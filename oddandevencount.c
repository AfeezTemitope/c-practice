#include <stdio.h>

int main() {
int badAfeez[] = { 22,33,45,3,22,5,67,88,87,98,2};
int evenCount = 0, oddCount = 0;

for (int i = 0; i < sizeof(badAfeez)/sizeof(badAfeez[0]); i++){
 ( badAfeez[i] % 2 == 0) ? evenCount++ : oddCount++;

}
printf("count of even numbers: %d\ncount of odd numbers: %d\n", evenCount,oddCount);

return 0;


}