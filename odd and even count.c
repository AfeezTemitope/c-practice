#include <stdio.h>

int main() {
int badAfeez[] = { 22,33,45,3,22,5,67,88,87,98,2};
int evenCount = 0, int oddCount = 0;

for (int i = 0; i < sizeof(badAfeez)/sizeof(badAfeez[0]); i++){
if ( badAfeez[i] % 2 == 0) evenCount++;
if (badAfeez[i] % 2 != 0 ) oddCount++;

printf("%d count of even numbers: " + &evenCount + "\n%d count of odd numbers: " + &oddCount);

return 0;


}
}