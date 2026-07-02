// Online C compiler to run C program online
#include <stdio.h>

int main() {
 int escolha;
 int candidato1=0;
 int candidato2=0;
 int candidato3=0;
 int candidato4=0;
 do{
     printf ("Escolha seu candidato (1 a 4) ou digite 0 para sair:  ");
     scanf("%d", &escolha);

 if (escolha == 1){
     candidato1++;
 }
 if (escolha == 2){
     candidato2++;
 }
 if (escolha == 3){
     candidato3++;
 }
 if (escolha == 4){
     candidato4++;
 }
 }
 while(escolha != 0);
    
printf("\n\n Quantidade de votos:  ");
printf("\ncandidato 1: %d", candidato1);
printf("\ncandidato 2: %d", candidato2);
printf("\ncandidato 3: %d", candidato3);
printf("\ncandidato 4: %d", candidato4);

if(candidato1 > candidato2 && candidato1 > candidato3 && candidato1 > candidato4){
    printf("\n\nCandidato 1 venceu!!");
}
if(candidato2 > candidato1 && candidato2 > candidato3 && candidato2 > candidato4){
    printf("\n\nCandidato 2 venceu!!");
}
if(candidato3 > candidato1 && candidato3 > candidato2 && candidato3 > candidato4){
    printf("\n\nCandidato 3 venceu!!");
}
if(candidato4 > candidato2 && candidato4 > candidato3 && candidato4 > candidato1){
    printf("\n\nCandidato 4 venceu!!");
}

return 0;
}
