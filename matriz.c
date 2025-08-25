#include <stdio.h>
int i;
int j;
int matriz[3][3] = {
  {1,2,3},
  {2,3,4},
  {3,5,6}
};
for(i = 0; i < 3; i++) {
    for(j = 0; j < 3; i++) {
        printf("%d", matriz[i][j]);
    }
    printf("\n");
}
    return 0;
}
