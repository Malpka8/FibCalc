#include <stdio.h>
int main() {

  setvbuf(stdout, NULL, _IONBF, 0);
  int i, n;
  unsigned long t1 = 0, t2 = 1;

  unsigned long x = t1 + t2;
  

  printf("\nWpisz dlugosc ciagu: ");
  
  scanf("%d", &n);

  for (i = 3; i <= n; ++i) {
    t1 = t2;
    t2 = x;
    x = t1 + t2;
  }
  
  	printf("Ciag Fibonnaciego: %lu ", x);
    printf("\nNazwa programu: FibCalc \n");
    printf("Autor programu: Bartlomiej Szabat\n");
    printf("Numer grupy: 2.4");
  return 0;
}
