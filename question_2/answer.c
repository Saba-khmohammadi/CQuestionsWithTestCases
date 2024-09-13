#include <stdio.h>

int main() {

    int n;
    int totalNumber = 0;
    scanf("%d", &n);
    int num[] = {1, 5, 10, 50, 100, 500, 1000};
    char* numbers[] = {"I", "V", "X", "L", "C", "D", "M"};
    char strings[n][200];
    int flag = 0;
    int print = 1;
    for(int i = 0; i< n; i++){
        scanf("%s", strings[i]);
        totalNumber = 0;
            for(int j = 0; j < strlen(strings[i]); j++){
                for(int t = 0; t < 7; t++){
                    if(strings[i][j] == numbers[t][0]){

                        totalNumber += num[t];
                        flag = 1;
                    }
                }
                if(!flag)print = 0;
            }
        if(print)printf("%d\n", totalNumber);
    }

    return 0;
}
