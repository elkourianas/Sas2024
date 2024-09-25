#include <stdio.h>

int main()  {
    float celsius;
    float  kelvin;
    float resualta;

    printf("entrez la temperature en degres celsius:");
    scanf("%f", &celsius);
    kelvin = celsius + 273.15;
    printf ("la temperature en kelvin est: %2f\n",kelvin);

return 0;



}