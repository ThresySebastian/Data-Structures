#include <stdio.h>
int main() {
int n, i, j, temp, time = 0;

printf("Enter the number of elements: ");
time++;
scanf("%d", &n);
time++;
int a[n];
time++;

printf("Enter %d elements:\n", n);
time++;
for (i = 0; i < n; i++) {
time++;
scanf("%d", &a[i]);
time++;
}

for (i = 0; i < n - 1; i++) {
time++;
for (j = 0; j < n - i - 1; j++) {
time++;
if (a[j] > a[j + 1]) {
time++;
temp = a[j];
time++;
a[j] = a[j + 1];
time++;
a[j + 1] = temp;
time++;
}
}
}

printf("Sorted array: \n");
time++;
for (i = 0; i < n; i++) {
time++;
printf("%d ", a[i]);
time++;
}

printf("\nSpace Complexity: %d ",(4 * 4) + (4 * n) );
time++;
time++;
printf("\nTime Complexity: %d\n", time);

return 0;
}


