/* Tabla de temperatura
*  Lanneponders Yonadi, Matías
*  11/04/2015
*/

#include <stdio.h>


int main()
{
    float c;                          //Celcius
    float f;                          //Fahrenheit
    int min=0;                        //Limite inferior de tabla
    int max=300;                        //Limite superior de tabla
    int incre=20;                      //Incremento de tabla

    c=min;
    printf("Tabla de Temperaturas\n");
    printf("\n");
    printf("%7s %11s\n","Celcius","Fahrenheit");
    while(c<=max){
        f=(c*9/5)+32.0;
        printf("%7.0f %11.1f\n",c,f);
        c=c+incre;
    }

}
