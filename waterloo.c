// still TLE, need to use better sorting algorithm
#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int list[], int n)
{
  int c, d, t;

  for (c = 0 ; c < ( n - 1 ); c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (list[d] > list[d+1])
      {
        t         = list[d];
        list[d]   = list[d+1];
        list[d+1] = t;
      }
    }
  }
}

int main()
{
    int m,n,i;

    while(1)
    {
        scanf("%d %d", &n, &m);

        if ((n == 0) && (m == 0)) {
            break;
        }

        int *ns = malloc(sizeof(int)*n);
        int *ms = malloc(sizeof(int)*m);

        for(i=0;i<n;i++){
            scanf("%d",&ns[i]);
        }
        for(i=0;i<m;i++){
            scanf("%d",&ms[i]);
        }

        bubble_sort(ns,n);
        bubble_sort(ms,m);

        int dragonIndex = 0, knightIndex = 0, sum = 0;
        int doom = 0;

        while (dragonIndex != n) {
            if (knightIndex >= m) {
                doom = 1;
                break;
            }
            if (ns[dragonIndex] <= ms[knightIndex]) {
                sum += ms[knightIndex];
                dragonIndex++;
            }

            knightIndex++;
        }

        if (doom == 1) {
            printf("Loowater is doomed!\n");
        } else {
            printf("%d",sum);
            printf("\n");
        }
        free(ns);
        free(ms);
    }
    return (0);
}
