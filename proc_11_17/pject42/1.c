#include<stdio.h>
#include<unistd.h>
//编写代码，演示多个字符从两端移动，向中间汇聚

void MyPrint(char *p1,char  *p2,int sz){
    int i=0;
    int flag=1;
    while(1){
        for(int j=0;j<sz;j++){
            printf("%c",p2[j]);
        }
        printf("\r");
        fflush(stdout);
        usleep(100000);
        if(i==sz/2+1){
            sleep(1);
        }
        if(flag==1){
          p2[i]=p1[i];
          p2[sz-i-1]=p1[sz-i-1];
          if(i<=sz/2){
               i++; 
          } 
          else{
              flag=0;
              i=sz/2;
          }
        }
        if(flag==0){
          p2[i]='*';
          p2[sz-i-1]='*';
          if(i>0){
               i--; 
          } 
          else{
              flag=1;
          }

        }
    }
}

int main(){
    char arr1[]="welcome to bitib ot emoclew";
    char arr2[]="***************************";
    int sz=sizeof(arr1)/sizeof(arr1[0]);
    MyPrint(arr1,arr2,sz-1);


    return 0;
}
