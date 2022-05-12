#include <stdio.h>
#include <stdlib.h>

int main()
{
    char codigo;
    float totalcheque,totalefectivo,totaltarjeta,totalventas,importe,iva;

    do
    {
        printf("Ingrese el codigo(C=Cheque, E=Efectivo, T=Tarjeta, F=Finalizar): ");
        scanf("%c",&codigo);
        fflush(stdin);
    }
        while(codigo!='c'&&codigo!='e'&&codigo!='t'&&codigo!='f');

        while(codigo!='f')
    {
        do
        {
            printf("Ingrese el importe: ");
            scanf("%f",&importe);
            fflush(stdin);
        }
        while(importe<=0);

        switch(codigo)
        {
        case 'c':
            importe=importe+importe*0.2;
            totalcheque=totalcheque+importe;
            break;
        case 'e':
            importe=importe-importe*0.1;
            totalefectivo=totalefectivo+importe;
            break;
        case 't':
            importe=importe+importe*0.12;
            totaltarjeta=totaltarjeta+importe;
            break;
        }
        printf("Ingrese el codigo(C=Cheque, E=Efectivo, T=Tarjeta, F=Finalizar): ");
        scanf("%c",&codigo);
        fflush(stdin);
    }
    totalventas=totalcheque+totalefectivo+totaltarjeta;
    iva=totalventas*0.21;
    priintf("\n");
    printf("Efectivo en Caja: $ %.2f\n",totalefectivo);
    printf("Ventas con Tarjeta de Credito: $ %.2f\n",totaltarjeta);
    printf("Ventas con cheque: $ %.2f\n",totalcheque);
    printf("Total de Venta: $ %.2f\n",totalventas);
    printf("Importe del IVA: $ %.2f\n",iva);


    return 0;
}
