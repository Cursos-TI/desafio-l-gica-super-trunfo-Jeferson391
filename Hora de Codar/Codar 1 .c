#include <stdio.h>

int main() {

float Temperatura, Umidade;
unsigned int Estoque, EstoqueMiinimo = 1000;

printf("Defina a temperatura: \n");
scanf("%f", &Temperatura);

printf("Defina a umidade: \n");
scanf("%f", &Umidade);

printf("Defina o estoque: \n");
scanf("%u", &Estoque);

//-----------------------------------------------------------------//

if (Temperatura > 30){
        printf("Temperatura esta alta \n");
} else {
        printf("Temperatura esta dentro dos parametros \n");
}

//-----------------------------------------------------------------//

if (Umidade > 50){
        printf("Umidade esta elevada \n");
} else {
        printf("Umidade esta dentro dos parametros \n");
}

//-----------------------------------------------------------------//

if (Estoque < EstoqueMiinimo){
        printf("Estoque esta Abaixo do minimo \n");
} else {
        printf("Estoque normal \n");
}
//-----------------------------------------------------------------//

return 0;
}
