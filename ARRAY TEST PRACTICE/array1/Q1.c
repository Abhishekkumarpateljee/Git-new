#include<stdio.h>
int main (){

int n;
printf(" arr size :");
scanf("%d",&n);

int arr[n] ;

for(int i=0 ; i<n ; i++){

    scanf("%d",& arr[i]);

}

for(int i=0 ; i<n ; i++){

    printf(" %d ", arr[i]);

}

int j = n-1;
for(int i=0 ; i<n ; i++){

  int temp = arr[i] ;
    arr[i] = arr[j] ;
    arr[j] = temp   ;

}

printf(" reverse \n ");

for(int i=0 ; i<n ; i++){

    printf(" %d ", arr[i]);

}





    return 0;
}