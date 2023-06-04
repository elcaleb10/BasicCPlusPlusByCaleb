#include <stdio.h>
#include <math.h>

int main()

{
float diametro, radio, altura, volumen;

/* Se reciben los datos */
    cout <<"\nEste programa calcula el volumen de un cono."<<endl;
    cout<<"Por favor introduzca el diametro de la base: " << endl;
    cin >> diametro;

    cout<<"Por favor introduzca la altura del cono: " << endl;
    cin >> altura;

/*Se calcula el volumen */
    radio = diametro/2;
    volumen = ((float)1/3)*radio*radio*altura;

    cout <<"\nEl radio del cono es: " <<radio<< endl;
    cout <<"\nLa altura del cono es: " <<altura<< endl;
    /*Se imprime el resultado*/
    cout <<"\nEl volumen del cono es: " <<volumen << endl;

    return 0;
