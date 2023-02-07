#include<stdio.h>
/*int main(){

    int a,i;
    printf("table of a");
    scanf("%d",&a);

    for (i=1 ; i<=10;i++)
    {
        printf("%d*%d=%d",a,i,a*i);
    }
    return 0;
}
int main(){
    int a,i;
    printf("table of a");
    scanf("%d",a);
    i=1;
    while (i<=10){
        printf("%d*%d=%d",a,i,a*i)
        i++;
    }
    return 0;




*/
void main(){
    int num;
    printf("num");
    scanf("%d",&num);
    printf("%d",num);
    if (num %2 ==0) {
        printf("num is even");
        printf("%d",num*num);
        }
    else {
    printf("num is odd");
    printf("%d",num*num*num);
    }  
}  
