#include "calc2.h"

//FUNÇOES
///OPERAÇÕES SOBRE VETORES

//SOMA
//A soma de VETORES se faz somando cada componente dos vetores.
//Ela é:  COMUTATIVA A + B == B + A
//        ASSOCIATIVA (A + B) + C == A + (B + C)
//    tem ELEMENTO NEUTRO A + 0 == A
// existe ELEMENTO OPOSTO A + (-A) == 0 (encontrado/definido aa partir do elemento oposto)
VETOR_t* soma_VETOR(VETOR_t* A, VETOR_t* B){
  VETOR_t* C;
    
  C = MALLOC(VETOR_t, 1);
  if(C == NULL) abort();
  
  C->x = A->x + B->x;
  C->y = A->y + B->y;
  C->z = A->z + B->z;
  C->mod = norma_VETOR(C);
  
  return C;
}

//MULTIPLICAÇÃO POR ESCALAR
//A multilicação por escalar como o nome diz, escala o vetor
//podendo inclusive mudar sua direção. Ela se dá pela multiplicação de cada expoente pelo escalar
//e*A = C com:
// "mod(A) * e = mod(C)" MÓDULO
// "e*A // C" DIREÇÃO
// "e*A tem o mesmo sentido de A enquanto e > 0" SENTIDO
VETOR_t* multiplica_ESCALAR(double escalar, VETOR_t* A){
  VETOR_t* C;
  C = MALLOC(VETOR_t, 1);
  if(C == NULL) abort();

  C->x = escalar * A->x;
  C->y = escalar * A->y;
  C->z = escalar * A->z;
  C->mod = norma_VETOR(C);
  
  return C;
}

//PRODUTOS
double produto_ESCALAR(VETOR_t* A, VETOR_t* B){
  return ((A->x * B->x) + (A->y * B->y) + (A->z * B->z));
}
//VETOR_t* produto_VETORIAL(){
//}
//double produto_MISTO(VETOR_t* A, VETOR_t* B, VETOR_t* C){
//}

//ANGULO ENTRE VETORES
double angulo_VETOR(VETOR_t* A, VETOR_t* B){
  return arcoCOSSENO((produto_ESCALAR(A,B)/((norma_VETOR(A)) * (norma_VETOR(B)))));
}


//GERENCIAIS
VETOR_t** constroi_VETOR(double x, double y, double z, VETOR_t** NOVO){
  (*NOVO) = MALLOC(VETOR_t, 1);
  if((*NOVO) == NULL) abort();
  (*NOVO)->x = x;
  (*NOVO)->y = y;
  (*NOVO)->z = z;
  (*NOVO)->mod = norma_VETOR((*NOVO));

  return NOVO;
  
}














