#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "minhasmacros.h"

//ESTRUTURAS
//VETOR
typedef struct vetor{
  double x; double y; double z;
  double mod;
}VETOR_t;

//FUNÇOES
#define norma_VETOR(A) sqrt(((A->x) * (A->x)) + ((A->y) * (A->y)) + ((A->z) * (A->z)))
VETOR_t* soma_VETOR(VETOR_t* A, VETOR_t* B);
VETOR_t* multiplica_ESCALAR(double escalar, VETOR_t* A);
double produto_ESCALAR(VETOR_t* A, VETOR_t* B);
//VETOR_t* produto_VETORIAL();
//double produto_MISTO(VETOR_t* A, VETOR_t* B, VETOR_t* C);
double angulo_VETOR(VETOR_t* A, VETOR_t* B);

//INTERFACE
#define imprimeVETOR(V) printf("%lf %lf %lf\n", V->x, V->y, V->z)

//GERENCIAIS
VETOR_t* constroi_VETOR(double x, double y, double z);
