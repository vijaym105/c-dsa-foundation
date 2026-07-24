// Calculate the total marks and average of 5 subjects.
// #include <stdio.h>

// int main() {
//     float s1,s2,s3,s4,s5;
//     float total, avg;

//     printf("Enter marks of subject(cgpa 0-10): ");
//     scanf("%f %f %f %f %f", &s1, &s2, &s3, &s4, &s5);

//     total = s1 + s2 + s3 + s4 + s5;
//     avg = total/5.0;

//     printf("Total: %.2f\nAvg: %.2f", total, avg);

//     return 0;
// }
// =========================
//    SHOPPING BILL
// =========================

// Customer : Vijay

// Product  : Keyboard

// Quantity : 2

// Price    : 800
// -------------------------
// Total    : 1600


// #include <stdio.h>

// int main() {
//     char cust[20], prod[20];;
//     int qnt, price;

//     printf("Enter customer name & product: ");
//     scanf("%s %s", cust, prod);

//     printf("Enter Quantity and price: ");
//     scanf("%d %d", &qnt, &price);

//     int total = qnt * price;
//     printf("=========================\n \tShopping Bill\n=========================");
//     printf("\n\nCustomer : %s\nProduct : %s\nQuantity : %d\nPrice : %d\n-------------------------\nTotal : %d", cust, prod, qnt, price, total);
//     return 0;
// }