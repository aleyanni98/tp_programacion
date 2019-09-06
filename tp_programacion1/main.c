#include <stdio.h>
#include <stdlib.h>

float suma(float a,float b);
float resta(float a,float b);
float division(float a,float b);
float multiplicacion(float a,float b);
float factorial(float a);
float menuDeOpciones();
char elegir;
float x=0,y=0;

int main()
{
        float menu;
        char salir;
    do
     {
        menu = menuDeOpciones();
        switch(elegir)
        {
            case 'a':
                printf("\nSuma:");
                float sumar = suma(x,y);
            case 'b':
                printf("\nResta:");
                float restar = resta(x,y);
            case 'c':
                printf("\nDivision:");
                float dividir = division(x,y);
            case 'd':
                printf("\nMultiplicacion:");
                float multiplicar = multiplicacion(x,y);
            case 'e':
                printf("\nFactorial:");
                float factorial1 = factorial(x);
                float factorial2 = factorial(y);
            case 'f':
                break;
        }
    }while( salir == 'n');
        return 0;
}

float suma(float a,float b)
{
    float resultado;
    resultado = a + b;
    printf("\nEl resultado es:%.2f",resultado);
    return resultado;
}
float resta(float a,float b)
{
    float resultado;
    resultado = a - b;
    printf("\nEl resultado es:%.2f",resultado);
    return resultado;
}
float division(float a,float b)
{
    float resultado;
    if(x==0||y==0)
    {
        printf("\nEl resultado es:No se puede calcular la division ya que uno de los operadores es 0");
    }
    else
    {
        resultado = a/b;
        printf("\nEl resultado es:%.2f",resultado);
    }
    return resultado;
}
float multiplicacion(float a,float b)
{
    float resultado;
    resultado = a*b;
    printf("\nEl resultado es:%.2f",resultado);
    return resultado;
}
float factorial(float a)
{
    float i,resultado=1;
    if(a==0)
    {
        printf("\nEl factorial es:0");
    }
    else
    {   for(i=1;i<=a;i++)
        {
            resultado=resultado*i;
        }
        printf("\nEl factorial es:%.2f",resultado);
    }
    return resultado;
}
float menuDeOpciones()
{
        printf("\ningrese el valor del operador A:");
        scanf("%f",&x);
        printf("ingrese el valor del operador B:");
        scanf("%f",&y);
        system("cls");
        printf("\t.Menu opciones.");
        printf("\na.Sumar:");
        printf("\nb.Restar:");
        printf("\nc.Dividir:");
        printf("\nd.Multiplicar:");
        printf("\ne.Factorial:");
        printf("\nf.Salir:");
        printf("\n.Operador A:%.2f",x);
        printf("\n.Operador B:%.2f",y);
        printf("\nIndique una opcion:");
        fflush(stdin);
        elegir = getchar();
        return 0;
}
