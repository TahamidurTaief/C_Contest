#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int n, i, sum;
  int *arr = (int *)malloc(n * sizeof(int));

  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  for (i = 0; i < n; i++) {
    sum = sum + arr[i];
  }
	printf("%d", sum);
  return 0;
}