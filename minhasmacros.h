#ifndef _MINHASMACROS
#define _MINHASMACROS

/* não dependem de bibliotecas */
#define FALSE 0
#define TRUE (!0)
#define PI 3.1415926535897932384626433


/* testa se < STDLIB.H > foi incluida */
//#ifdef _STDLIB
#define MALLOC(TIPO, SIZE) ((TIPO*) malloc(sizeof(TIPO) * SIZE))
#define REALLOC(PONTEIRO, TIPO, SIZE) (TIPO*) realloc(PONTEIRO, sizeof(TIPO) * MAX * SIZE)
//#endif

/* testa se < MATH.H > foi incluida */
//#ifdef _MATH
#define BHASKARA(A,B,C,x1,x2) ((x1) = (-(B)+(sqrt((B)*(B)-4*(A)*(C))))/2*(A); (x2) = (-(B)-(sqrt((B)*(B)-4*(A)*(C))))/2*(A);)
#define arcoCOSSENO(x) ((acos(x) * (180.0 / PI))) // devolve o arcosseno em graus
#define COSSENO(x) (cos(x * (PI / 180.0)))
//#endif



#include <stdio.h>
#define READ_int(inteiro) printf("%d", &inteiro)
#define PRINT_int(inteiro) printf("%d\n", inteiro)
#define READ_double(real) printf("%d", &real)
#define PRINT_double(real) printf("%d\n", real)
#define READ_char(caractere) printf("%d", &caractere)
#define PRINT_char(caractere) printf("%d\n", caractere)
#define PRINT_string(caracteres) printf("%s\n", caracteres)


#endif
