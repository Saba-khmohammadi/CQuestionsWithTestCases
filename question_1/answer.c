#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int max = 0;
    int sefr = 0;
    int yek = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        arr[i] = arr[i] % n;
        if(arr[i] > max) max = arr[i];
    }
    int tedad[100] = {0};
    int i, j, temp;
    for ( i = 0; i < n; i++) {
        tedad[arr[i]]++;
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (tedad[arr[i]] < tedad[arr[j]] || (tedad[arr[i]] == tedad[arr[j]] && arr[i] > arr[j])) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    int array[n];
    for(int i = 0; i < n; i++){
            array[i] = arr[i];
      while (array[i] > 0) {
        if (array[i] % 2 == 0)
           sefr++;
        else
            yek++;
        array[i] = array[i] / 2;
    }
}int rep = 20000;
int y = 0;
int flag = 0;
     for (int i = 0; i < n; i++) {
            if(rep == arr[i]) continue;
            printf("%d ", arr[i]);
            rep = arr[i];
     for(int k = 0; k < n; k++){
                if(arr[k] == rep)printf("*");
     }
     printf("\n");
    }
    int p;
    for(int k = 0; k < max; k++){
            flag = 0;
        for(p = 0; p <= n; p++){
            if(k == arr[p])flag = 1;
        }

    if(flag == 0)printf("%d\n", k);
    }
    if((yek + sefr) % 2 == 0)printf("YES");
    else printf("NO");

    return 0;
}
