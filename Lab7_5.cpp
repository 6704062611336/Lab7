#include<stdio.h>

long convert(long h, long m, long s){
    long sec =  (h*3600) + (m*60)+s;  
    return sec;
}

int main(){
    long h,m,s;
    scanf("%ld %ld %ld",&h,&m,&s);
    printf("total minute: %ld",convert(h,m,s));
}


