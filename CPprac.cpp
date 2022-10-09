#include<iostream>

using namespace std;


int largest(int arr[] ) {

   int i=0 ,biggest ;

   while (arr[i]>=0 ){

        biggest = arr[i] ;

       if( biggest < arr[i+1]){

           biggest = arr[i+1] ;

       }

       i++ ;

   }

   return biggest ;

}

int main ( ){

   int numma,i=0 ,arr[20], check = 0;

   while(numma>=0){

       cin>>numma;

       arr[i] = numma  ;

       i++;

   }


   i=0;

   while(arr[i]>=0) {

      if(arr[i]<100 && arr[i]==largest(arr)){

           check = 1 ;

           break;

      }

       i++ ;

   }

   if(check==1) {

       cout<< arr[i] ;

   }

   else cout<< 0;

   i=0;

   while(arr[i]>=0) {

       cout<<arr[i] <<" " ;

       i++ ;

   }

return 0;

}
