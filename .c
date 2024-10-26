//patterns code in c
#include <stdio.h>
int main()
{
    //left triangle pattern
    int rows=5;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 2 * (rows - i) - 1; j++) {
            printf(" ");
        }
        for (int k = 0; k <= i; k++) {
            printf("* ");
        }
        printf("\n");
    }
    //right triangle pattern
    for(int i=0;i<=n;i++){
      for(int j=1;j<=i;j++){
          printf("* ");
      }
      printf("\n");
  }
  //alphabet pattern
  int n;
  char num= 'a';
  scanf("%d",&n);
  for(int i=0;i<n;i++){
      for(int j=0;j<=i;j++){
          printf("%c",num++);
      }
      printf("\n");
  }
    