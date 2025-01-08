/*
CH-230-A
a3 p3.[c]
Giorgi Pataridze
gpataridze@constructor.university
*/
// #include <stdio.h>

// // Function that converts cm to km
// float convert(int cm)
// {
//     return cm * 0.00001;
// }

// int main()
// {
//     int cm; // Declares cm

//     // Input cm
//     printf("Enter a number: ");
//     scanf("%d", &cm);

//     // Convert and print in km
//     printf("result of conversion: %f", convert(cm));

//     return 0;
// }


#include <stdio.h>

float convert(int cm)
{
    float km = cm;
    return km / 100000;
}

int main()
{
    int cm;
    float km;
    scanf("%d", &cm);

    km = convert(cm);
    printf("%f", km);

    return 0;
}