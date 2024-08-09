/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

// Define the Product structure
struct Product {
    char name[50];          //declaring variables inside the structure
    char id[10];
    float price;
};

int main() {                       //main function                   
    int n, i;
    float totalCost = 0;
    struct Product products[5];        // creating objects for struct Product
    struct Product *mostExpensive, *leastExpensive; //creating pointers for structuree

    printf("Enter the number of products: ");
    scanf("%d", &n);                             //getting no. of products as input daynamically

    // Input details for each product
    for(i = 0; i < n; i++) {                      //getting inputs for all the object using variable dynamically
        printf("Enter details for product %d:\n", i + 1);

        printf("Product Name: ");
        scanf("%s", products[i].name);

        printf("Product ID: ");
        scanf("%s", products[i].id);

        printf("Price: ");
        scanf("%f", &products[i].price);
    }

    // Initializing mostExpensive and leastExpensive pointers 
    mostExpensive = &products[0];
    leastExpensive = &products[0];

    // Calculating total cost and find most/least expensive products using linear sorting algorithm 
    for(i = 0; i < n; i++) {
        totalCost += products[i].price;

        if(products[i].price > mostExpensive->price) {            //using linear sorting algorithm 
            mostExpensive = &products[i];                         //complexity O(n)
        }
        if(products[i].price < leastExpensive->price) {
            leastExpensive = &products[i];
        }
    }

    // printing all product details
    printf("\nProduct Details:\n");
    for(i = 0; i < n; i++) {
        printf("Product Name: %s, Product ID: %s, Price: %.2f\n", products[i].name, products[i].id, products[i].price);
    }

    // printing the most expensive product
    printf("\nMost Expensive Product: ");
    printf("Product Name: %s, Product ID: %s, Price: %.2f\n", mostExpensive->name, mostExpensive->id, mostExpensive->price);

    // printing the least expensive product
    printf("Least Expensive Product: ");
    printf("Product Name: %s, Product ID: %s, Price: %.2f\n", leastExpensive->name, leastExpensive->id, leastExpensive->price);

    // printing the total cost of all products
    printf("Total Cost of All Products: %.2f\n", totalCost);

    return 0;
}
