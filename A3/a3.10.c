/*
CH-230-A
a3 p10.[c]
Giorgi Pataridze
gpataridze@constructor.university
*/
// #include <stdio.h>

// // Function for product of a and b
// float product(float a, float b)
// {
//     return a * b;
// }

// // Function for product of a and b by reference
// void productbyref(float a, float b, float *p)
// {
//     *p = a * b;
// }

// // Function for modified a and b by reference
// void modifybyref(float *a, float *b)
// {
//     *a += 3;
//     *b += 11;
// }

// int main()
// {
//     float a, b, product_result, product_ref;

//     printf("Enter float 1: ");
//     scanf("%f", &a);
//     printf("Enter float 2: ");
//     scanf("%f", &b);

//     // Call the product function and store result
//     product_result = product(a, b);

//     // Call the proudctbyref function
//     productbyref(a, b, &product_ref);

//     // Modify the value by calling the modifybyref function
//     modifybyref(&a, &b);

//     // Print results
//     printf("Product: %f", product_result);
//     printf(" = Product by reference: %f\n", product_ref);
//     printf("Modified by reference: %f, %f", a, b);

//     return 0;
// }