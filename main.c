#include <stdio.h>
#include <stdlib.h>

//Jaime Garza A01193887 y Aaron Garcia A01039597
//Implementación de p8 por Aaaron Garxia

int main()
{
    char cString[4] = {1010};
    char* pcString = cString;

    printf("%d\n",asciiBinaryToInt(pcString));
    printf("%d\n",asciiHEXToInt(pcString));
    printf("%f\n",asciiToDouble(pcString));
}
