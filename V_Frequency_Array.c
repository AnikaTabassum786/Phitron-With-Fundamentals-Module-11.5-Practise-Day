#include<stdio.h>

int main(){

    int n,m;
    scanf("%d %d",&n,&m);
    
    int array[n];

    for(int i=0;i<n; i++){
     scanf("%d",&array[i]);
    }

    for(int i=0;i<n; i++){
    //  printf("%d ",array[i]);
    }

    int fre[m+1];
    for(int i=0;i<=m;i++){
        fre[i]=0;
    }

    for(int i=0; i<n; i++){
       int val = array[i];
        fre[val]++;
    }

    for(int i=1;i<=m;i++){
      printf("%d\n",fre[i]);
    }


     return 0;
}