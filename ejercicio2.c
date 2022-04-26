#include <stdio.h>

int main (){
	float precio,zapatos,bruto,final,descuento;
	printf("Ingrese el precio de los zapatos: ");
	scanf("%f", &precio);
	printf("Ingrese la cantidad de zapatos vendidos: ");
	scanf("%f", &zapatos);

	while(zapatos < 1){
		printf("¡Debe ingresar una cantidad mayor a 0!\n");
		printf("Ingrese la cantidad de zapatos vendidos: ");
		scanf("%f", &zapatos);
	}

	bruto = zapatos * precio;

	if( zapatos > 10 && zapatos < 21){
		descuento = (bruto * 10) / 100;
	}
	if( zapatos > 20 && zapatos < 31){
		descuento = (bruto * 20) / 100;
	}
	if( zapatos > 30 ){
		descuento = (bruto * 40) / 100;
	}

	final = bruto - descuento;
	printf("El monto bruto es: $%.2f\n", bruto);
	printf("El monto final es: $%.2f\n", final);
	printf("La cantidad de zapatos vendidos es: %.f\n", zapatos);
	return 0;
}

//Tambien ingresa en un ciclo infito
