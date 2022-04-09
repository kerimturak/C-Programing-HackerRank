#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d);
int max(int, int);
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

int max_of_four(int a, int b, int c, int d){
    int temp;
    if (a == max(a,b)) {
        if (a == max(a,c)) {
            if (a == max(a,d)) {
                return a;;
            }
            else{
                return d;
            }
        }
        else{
            if (c>d) {
                return c;
            }
            else {
                return d;
            }
        }
    }
    else{
        if (b>c) {
            if (b>d) {
                return b;
            }
            else {
                return d;
            }
        
        }
        else {
            if (c>d) {
                return c;
            }
            else {
                return d;
            }
        }


     }
   return temp;; 
}

int max(int a, int b){
    if (a>b) {
        return a;
    }
    else {
        return b;
    }
}
