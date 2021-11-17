#include<stdio.h>
#include<string.h>

size_t MyStrlen(const char * str){
    if(str==NULL){
        return 0;
    }
    int sum=0;
    for(int i=0;str[i];i++){
        sum++;
    }
    return sum;
}
int main(){
    char *p="Hello World";
    printf("%d\n",MyStrlen(p));
    printf("%d\n",strlen(p));

    return 0;
}
