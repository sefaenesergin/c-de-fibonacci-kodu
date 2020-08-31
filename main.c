//SEFA ENES ERGİN-sefaenesergin@gmail.com
//Fibonacci serisinin  verilecek adım sayısına göre elemanlarını gösterecek program.
#include<stdio.h>
int main( void ){

    int a = 0; /* a[n]   */
    int b = 1; /* a[n+1] */
    int c;     /* a[n+2] */
    int n; //eleman sayisi
    int i; // degiskenin adi
    
    printf("Fibonacci serisi kacinci elemana kadar yazilsin> ");
    scanf("%d", &n);
    
    for( i = 1; i <= n ; i++ ) {
        printf( "%4d. Eleman: %d\n", i, a );
        c = a + b; 
        a = b; //a[n+1]'i  a[n]'e atadık.
        b = c; //a[n+2]'i  a[n+1]'e atadık.
    }
    
    return 0;
}
