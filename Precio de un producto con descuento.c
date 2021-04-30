//Para sacar el precio total de un producto con descuento
#include stdio.h
int main()
{
    int opcion;
    float Precio, Descuento;
    printf("Dame el valor de la Precio");
    scanf("%f", &Precio);
    printf("Dame el valor de la Descuento");
    scanf("%f", &Descuento);

    precio final=Precio*(Descuento/100)
    printf("El valor del precio final es: %f, precio final");
    return 0;
}