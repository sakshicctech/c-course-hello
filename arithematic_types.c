#include <stdio.h> 
#include <stdlib.h> 
 
int main(void) { 
    int n;
    unsigned int ui;  
    char c;
    unsigned char uc; 
    float f;
    double d; 
    short s;
    long l;
    long long ll;
    long double ld;
    unsigned long long ull;
    
    printf("size of int is %zu\n", sizeof(n));
    printf("size of unsigned int is %zu\n", sizeof(ui));    
    printf("size of char is %zu\n", sizeof(c));
    printf("size of unsigned char is %zu\n", sizeof(uc));     
    printf("size of float is %zu\n", sizeof(f));     
    printf("size of double is %zu\n", sizeof(d));     
    printf("size of short is %zu\n", sizeof(s));     
    printf("size of long is %zu\n", sizeof(l));     
    printf("size of long long is %zu\n", sizeof(ll));     
    printf("size of long double is %zu\n", sizeof(ld));
    printf("size of unsigned long long is %zu\n", sizeof(ull));     
    
    return EXIT_SUCCESS; 
}