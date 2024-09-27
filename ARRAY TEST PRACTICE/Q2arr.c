#include<stdio.h>

int main(){

    int n;
    printf("ARRAY SIZE 1:");
    scanf("%d",&n);
    int arr[n];
    printf("array\n");

    for(int i=0;i<n;i++){
     scanf("%d",&arr[i]);
    }

    int m;
    printf("ARRAY SIZE2:");
    scanf("%d",&m);
    int abb[m];
    printf("array\n");

    for(int i=0; i<m; i++){
        scanf("%d", & abb[i] );
    }

    printf("merge\n");
    
    int o=n+m;
    int merge[o];
    for(int i=0;i<o-m;i++){
         merge[i]=arr[i];
         printf("%d\n",merge[i]);
        
    }

    int a=0;

    for(int i=n;i<o;i++,a++){

      merge[i]=abb[a];

      printf("%d\n",merge[i]);

    }

    int c = 0 , count = 0 ;

    for(int i = 0 ; i<o ; i++){

        if( i % 2 == 0 ){
         
          c++;

        }

        else{

            count++;

        }
    }

    int even [c] ;
    int odd [count] ;
    int even_index =0 , odd_index =0 ;

     
    for(int i=0 ; i<o ; i++ ){

        if( i % 2 == 0 ){
          
           even[even_index++]  = merge[i] ;

        }

        else {

            odd[odd_index++] = merge[i] ;
        } 
    }


     printf(" even \n");
    for(int i = 0 ; i<c ; i++ ){

        printf("  %d ", even[i]);
    }

    printf( " odd \n ");

    for(int i =0 ; i<count ; i++ ){

        printf(" %d ", odd[i]);
    }


    
    
    

return 0;
}