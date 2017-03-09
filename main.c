#include <stdio.h>
#include <stdlib.h>
#include "cs50.h"
/*Agora, dado um numero em decimal, como obter o correspondente
em binario?
Qualquer numero pode ser escrito como uma soma de pot^encias de 2:
6 = 1 * 2^2 + 1 * 2^1 + 0 * 2^0
13 = 1 * 2^3 + 1 * 2^2 + 0 * 2^1 + 1 * 2^0
O que acontece se dividirmos, sucessivamente, um numero decimal
por 2?
Vamos testar com o numero 13:
13=2 = 6, com resto 1
6=2 = 3, com resto 0
3=2 = 1, com resto 1
1=2 = 0, com resto 1*/
int main() {
unsigned long int n, bin = 0, pot = 1, bit;
printf("Digite um numero decimal: ");
n = GetInt();
while (n > 0) {
bit = n % 2;
n = n / 2;
bin = bin + (bit * pot);
pot = pot * 10;
}
printf("%d\n", bin);
return 0;
}
