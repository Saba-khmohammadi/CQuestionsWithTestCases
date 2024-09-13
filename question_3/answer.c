#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int n;
int canSetAnotherElephent(int numberOfElephents, int arr[][n], int m){
 if(numberOfElephents <= 0){
     printf("NO"); return 0;
 }

    else{
        for(int i = 0; i < m; i++){
            for(int j = 0; j < m; j++){
                if(arr[i][j] == 0 && numberOfElephents != 0){
                    if(checkIfTheElephentsCanBeHere(arr, m, i, j) == 0){
                        printf("NOp");
                        return 0;
                    }
                    else{
                        numberOfElephents--;
                    }
                }

            }
        }

    }
    return 1;
}
int canSetAnotherQueen(int numberOfQueens, int arr[][n], int m){
    if(numberOfQueens <= 0){
        printf("NO");
        return 0;
    }
    else{
        for(int i = 0; i < m; i++){
            for(int j = 0; j < m; j++){
                 if(arr[i][j] == 0 && numberOfQueens != 0){
                    if(checkIfTheQueenCanBeHere(arr, m, i, j) == 0){
                        printf("NuO");
                        return 0;
                    }
                    else{
                            numberOfQueens--;
                    }
                    }
            }}

    }
  return 1;
}
int checkIfTheElephentsCanBeHere(int arr[][n], int m, int setx, int sety){
int newX, newY;

newX = setx + 1;
newY = sety + 1;
for(int i = newX ; i < m; i++){
       if(newY < m){
            if(arr[i][newY] == 2)return 0;
        }     newY++;
}
newY = sety -1;
for(int  i = setx - 1; i >= 0; i--){
     if(newY >= 0){
           if(arr[i][newY] == 2)return 0;
        }
        newY--;
}
newY = sety -1;
for(int  i = setx + 1; i < m; i++){
     if(newY >= 0){
          if(arr[i][newY] == 2)return 0;
        }
        newY--;
}
newY = sety + 1;
for(int i = setx - 1; i >= 0; i--){
     if(newY < m){
           if(arr[i][newY] == 2)return 0;
        }
        newY++;
}
elephentWasSet(arr, setx, sety, m);
return 1;
}
int checkIfTheQueenCanBeHere(int arr[][n], int m, int setx, int sety){
for(int i = setx; i < m; i++)if(arr[i][setx] == 2)return 0;
for(int i = setx; i >= 0; i--)if(arr[i][sety] == 2)return 0;
for(int i = sety; i >= 0; i--)if(arr[setx][i] == 2)return 0;
for(int i = sety; i < m; i++)if(arr[setx][i] == 2)return 0;
int newX, newY;
newX = setx + 1;
newY = sety + 1;
for(int i = newX ; i < m; i++){
       if(newY < m){
            if(arr[i][newY] == 2)return 0;
        }     newY++;
}
newY = sety -1;
for(int  i = setx - 1; i >= 0; i--){
     if(newY >= 0){
           if(arr[i][newY] == 2)return 0;
        }
        newY--;
}
newY = sety -1;
for(int  i = setx + 1; i < m; i++){
     if(newY >= 0){
          if(arr[i][newY] == 2)return 0;
        }
        newY--;
}
newY = sety + 1;
for(int i = setx - 1; i >= 0; i--){
     if(newY < m){
           if(arr[i][newY] == 2)return 0;
        }
        newY++;
}
queenWasSet(arr, setx, sety, m);
return 1;
}
void elephentWasSet(int arr[][n], int setx, int sety, int m){
int newX, newY;
newX = setx + 1;
newY = sety + 1;
for(int i = newX ; i < m; i++){
       if(newY < m){
            arr[i][newY] = 1;
        }     newY++;
}
newY = sety - 1;
for(int  i = setx - 1; i >= 0; i--){
     if(newY >= 0){
            arr[i][newY] = 1;
        }
        newY--;
}
newY = sety - 1;
for(int  i = setx + 1; i < m; i++){
     if(newY >= 0){
            arr[i][newY] = 1;
        }
        newY--;
}
newY = sety + 1;
for(int i = setx - 1; i >= 0; i--){
     if(newY < m){
            arr[i][newY] = 1;
        }
        newY++;
}
arr[setx][sety] = 2;
}
void queenWasSet(int arr[][n], int setx, int sety, int m){
for(int i = setx; i < m; i++)arr[i][sety] = 1;
for(int i = setx; i >= 0; i--)arr[i][sety] = 1;
for(int i = sety; i >= 0; i--)arr[setx][i] = 1;
for(int i = sety; i < m; i++)arr[setx][i] = 1;
int newX, newY;
newX = setx + 1;
newY = sety + 1;
for(int i = newX ; i < m; i++){
       if(newY < m){
            arr[i][newY] = 1;
        }     newY++;
}
newY = sety - 1;
for(int  i = setx - 1; i >= 0; i--){
     if(newY >= 0){
            arr[i][newY] = 1;
        }
        newY--;
}
newY = sety - 1;
for(int  i = setx + 1; i < m; i++){
     if(newY >= 0){
            arr[i][newY] = 1;
        }
        newY--;
}
newY = sety + 1;
for(int i = setx - 1; i >= 0; i--){
     if(newY < m){
            arr[i][newY] = 1;
        }
        newY++;
}
arr[setx][sety] = 2;
}
int main()
{
    int q, e;
    scanf("%d", &n);
      scanf("%d", &e);
     scanf("%d", &q);

    int arr[n][n];
    for(int i = 0;i < n; i++){
        for(int j = 0; j < n; j++){
            arr[i][j] = 0;
        }
    }
    if(e > n || n < q){
        printf("NO");
        return;
    }
    if(q == 0 && e == 0){
        printf("YES");
        return;
    }
if(canSetAnotherQueen(q, arr, n) == 0)return;
if(canSetAnotherElephent(e, arr, n) == 0)return;

printf("YES");
    }
