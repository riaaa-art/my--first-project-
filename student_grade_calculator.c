#include <stdio.h>

int main() {
  int physics, chemistry, maths;
  printf("Enter Physics marks: ");
scanf("%d", &physics);

printf("Enter Chemistry marks: ");
scanf("%d", &chemistry);

printf("Enter Maths marks: ");
scanf("%d", &maths);

  int total;

total = physics + chemistry + maths;

printf("Total marks = %d\n", total);

  float percentage;

percentage = (total / 300.0) * 100;

printf("Percentage = %.2f%%\n", percentage);

    return 0;
}
