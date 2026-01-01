#include <stdio.h>

void fun(int n){
    if (n>0){
        printf("%d\n",n);//printinng then calling the function
        fun(n-1);
        printf("%d\n",n);//printing after all the call functions are executed then printing
    }
}

int main() {
    int x = 3;
    fun(x);
    return 0;
}