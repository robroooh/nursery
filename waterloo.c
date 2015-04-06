//use quick_sort, thanks whoever wrote the function
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

void quick_sort (int *a, int n) {
    int i, j, p, t;
    if (n < 2)
        return;
    p = a[n / 2];
    for (i = 0, j = n - 1;; i++, j--) {
        while (a[i] < p)
            i++;
        while (p < a[j])
            j--;
        if (i >= j)
            break;
        t = a[i];
        a[i] = a[j];
        a[j] = t;
    }
    quick_sort(a, i);
    quick_sort(a + i, n - i);
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

        quick_sort(ns,n);
        quick_sort(ms,m);

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
