#include<stdio.h>
//编写函数不允许创建临时变量，求字符串的长度
int My_strlen(char *p){
    if(*p!=0){
      return  My_strlen(p+1)+1; 
    } 
    else{
        return 0;
    }
}
int main(){
    char arr[] = "I Love You";
    printf("%d\n", My_strlen(arr));
    int size=20;
    int arr1[size];
    int i=0;
    for( i=0;i<size;i++){
        arr1[i]=0;
    }
    printf("%d\n",sizeof(arr1)/sizeof(arr1[0]));
    
    return 0;

}
