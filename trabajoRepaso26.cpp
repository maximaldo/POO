#include <stdio.h>
#include <stdlib.h>

void ejercicio1(){
	int alumnos;
	double pagoalum;
	int alquiler;
	puts("Pone la cantidad de alumnos");
	scanf("%d",&alumnos);
	if(alumnos >= 100){
	pagoalum = 500;
	alquiler = pagoalum * alumnos;
	}else if(alumnos >= 50){
	pagoalum = 400;
	alquiler = pagoalum * alumnos;
	}else if(alumnos >= 30){
	pagoalum = 300;
	alquiler = pagoalum * alumnos;
	}else if(alumnos <= 29){
	pagoalum = 6000.00 / alumnos;
	alquiler = 6000;
	}
	printf("El pago por el alquiler del micro es:%d y cada alumno debe pagar %.2f", alquiler, pagoalum);
}

void ejercicio2(){
	int base;
	int venta1;
	int venta2;
	int venta3;
	double total;
	double comision;
    puts("Escribir el sueldo base y el valor de las 3 ventas");
	scanf("%d %d %d %d",&base,&venta1,&venta2,&venta3);
	comision = (double)venta1 * 0.10 + (double)venta2 * 0.10 + (double)venta3 * 0.10;
	total = comision + base;
	printf("El pago por la comision es %.2f y el total que va recibir es %.2f", comision,total);
	
}

void ejercicio3(){
	int CalPar1;
	int CalPar2;
	int CalPar3;
	int examf;
	int trabf;
	int calificacion;
	
	puts("escribi tus 3 calificaciones parciales");
	scanf("%d %d %d",&CalPar1,&CalPar2,&CalPar3);
	puts("Ahora la calificacion del examen final y trabajo final");
    scanf("%d %d",&examf,&trabf);
    calificacion = ((CalPar1 + CalPar2 + CalPar3) / 3) * 0.55 + examf * 0.3 + trabf * 0.15;
    printf("Su clasificacion final es: %d",calificacion);
}

	void ejericio4() {
		int a;
		int b;
		printf("Ingrese dos numeros y te los pares entre ellos, primero el mas grande y segundo el mas chico");
		scanf("%d %d", &a, &b);	
		for(int i= b; i <= a; i++) {
			if(i % 2 == 0) {
				printf("%d ", i);
			}
			
		}
		printf("\n");
	}
	void ejercicio5() {
		printf("escribi dos numeros");
		int auto1;
		int auto2;
		scanf("%d %d", &auto1, &auto2);
		for(int i = auto2; i <= auto1; i++) {
			auto1--;
			auto2++;
		}
		double encuentro = (auto1 + auto2) / 2.0;
			printf("Los autos se encuentran en el km %.2f\n", encuentro);

	}



int main(int argc, char *argv[]) {

    ejercicio3();
	
	
	return 0;
}
