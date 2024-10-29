#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d){
    int bigger=a;
    int i=0;
    int numbers[] = {a, b, c, d};
    while (i<4) {
        if(numbers[i]>bigger){
            bigger=numbers[i];
        }
        i++;
    }
    return bigger;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

