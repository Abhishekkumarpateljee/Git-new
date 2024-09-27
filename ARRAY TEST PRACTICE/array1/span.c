#include<stdio.h>
int main(){

int n=7;

int price[n];

for(int i =0 ; i<n ; i++){

    scanf("%d",&price[i]);
}

for(int i =0 ; i<n-1 ; i++){
    int sp = 1 ;
    for(int j = i+1 ; j<n ; j++){

    if( price[i] > price[j] ){
        
    }
    else{
        sp++;
    }

    

   }

   printf("%d ", sp);

}





    return 0;
}