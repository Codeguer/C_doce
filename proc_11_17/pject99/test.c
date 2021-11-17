#include<stdio.h>

union u{
    short a;
    char c;
};

int main(){
    union u s;
    s.a=1;
    printf("%d\n",s.c);

    return 0;
}
