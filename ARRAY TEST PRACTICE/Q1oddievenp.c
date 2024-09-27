#include<stdio.h>
int main(){

int n  ;
printf(" size :");
scanf("%d",&n);


int arr[n] ;
for(int i =0 ; i<n ; i++){

    scanf("%d",&arr[i]);
}
int even_pro = 1 ;
int  odd_pro = 1 ;

for(int i=0 ; i<n ; i++){

    if( i % 2 == 0 ){

        even_pro = even_pro * arr[i] ;
    }

    else{

        odd_pro = odd_pro * arr[i] ;
    }
}

printf(" even = %d , odd = %d ", even_pro , odd_pro);

    return 0;
}