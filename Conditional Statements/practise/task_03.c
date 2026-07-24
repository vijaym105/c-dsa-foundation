// Electricity Bill (simple version)

// Input: Units

// Rules:
// ≤100 → ₹5/unit
// 101-300 → ₹7/unit
// Above 300 → ₹10/unit

// Calculate total bill
// #include <stdio.h>

// int main() {
//     int units, res;

//     printf("Enter the unit u used: ");
//     scanf("%d", &units);

//     if(units <= 100){
//         res = units * 5;
//         printf("Total bill is %d", res);
//     }
//     if(units > 101 && units <= 300){
//         res = units * 7;
//         printf("Total bill is %d", res);
//     }
//     if(units > 300){
//         res = units * 10;
//         printf("Total bill is %d", res);
//     }
    
//     return 0;
// }