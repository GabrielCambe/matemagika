#include "controle.h"
#include "calc2.h"

int main(){
  VETOR_t **VETORES;

  VETORES = constroi_VETOR(14.5, 2.0, 5.5, &v);

  imprime_VETOR(v);

  return 0;
}
