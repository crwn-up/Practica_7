// Luis Crown
//Ejercicio 3
#include <stdio.h>
#include <math.h>
 int main() {
     int opcion;
     double num1, num2, resultado;
     
     printf("Calculadora de Luis Crown,operaciones disponibles:\n");
     printf("1. suma\n");
     printf("2. resta\n");
     printf("3. multiplicación\n");
     printf("4. División\n");
     printf("5. Raíz cuadrada\n");
     printf("6. Exponente\n");
     printf("Seleccione una opción (1-6)");
     scanf("%d", &opcion);
     
     switch (opcion){
         case 1: // suma
         printf("ingrese dos numeros");
         scanf("%lf %lf", &num1, &num2);
         resultado = num1 + num2;
         printf("resultado: %.2lf\n", resultado);
         break;
         
         case 2: // resta
         printf("ingrese dos numeros:");
         scanf("%lf %lf", &num1, &num2);
         resultado = num1 - num2;
         printf("Resultado: %.2lf\n",resultado);
         break;
        
        case 3: // multiplicación
         printf("ingrese dos numeros");
         scanf("%lf %lf", &num1, &num2);
         resultado = num1 * num2;
         printf("Resultado: %.2lf\n", resultado);
         break;
         
         case 4: // división
         printf("ingrese dos numeros");
         scanf("%lf %lf", &num1, &num2);
         if (num2 !=0){
         resultado = num1 / num2;
         printf("Resultado: %.2lf\n", resultado);
         } else {
             printf("error: no se puede dividir entre 0");
         }
         break;
         
         case 5: // Raíz cuadrada
         printf("ingrese un número:");
         scanf("%lf", &num1);
         if (num1 >=0){
         resultado = sqrt(num1);
         printf("Resultado: %.2lf\n", resultado);
         } else {
             printf("error: no se puede calcular");
         }
         break;
         
         case 6: // Exponente
         printf("ingrese la base y el exponente");
         scanf("%lf %lf", &num1, &num2);
         resultado = pow(num1, num2);
         printf("Resultado: %.2lf\n", resultado);
     }
}
