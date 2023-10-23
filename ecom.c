#include <stdio.h>
#include <string.h>

// Define a struct to represent a product
struct Product {
    int id;
    char name[100];
    double price;
    int quantity;
};

// Function to display product details
void displayProduct(struct Product product) {
    printf("Product ID: %d\n", product.id);
    printf("Product Name: %s\n", product.name);
    printf("Price: $%.2f\n", product.price);
    printf("Quantity Available: %d\n", product.quantity);
    printf("\n");
}

// Function to add a product
void addProduct(struct Product inventory[], int *productCount) {
    if (*productCount < 10) {
        printf("Enter Product ID: ");
        scanf("%d", &inventory[*productCount].id);
        printf("Enter Product Name: ");
        scanf("%s", inventory[*productCount].name);
        printf("Enter Price: ");
        scanf("%lf", &inventory[*productCount].price);
        printf("Enter Quantity: ");
        scanf("%d", &inventory[*productCount].quantity);
        (*productCount)++;
    } else {
        printf("Inventory is full. Cannot add more products.\n");
    }
}

// Function to update a product
void updateProduct(struct Product inventory[], int productCount) {
    printf("Enter Product ID to update: ");
    int updateID;
    scanf("%d", &updateID);
    int found = 0;
    for (int i = 0; i < productCount; i++) {
        if (inventory[i].id == updateID) {
            printf("Enter New Price: ");
            scanf("%lf", &inventory[i].price);
            printf("Enter New Quantity: ");
            scanf("%d", &inventory[i].quantity);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Product not found.\n");
    }
}

// Function to delete a product
void deleteProduct(struct Product inventory[], int *productCount) {
    printf("Enter Product ID to delete: ");
    int deleteID;
    scanf("%d", &deleteID);
    int deleteIndex = -1;
    for (int i = 0; i < *productCount; i++) {
        if (inventory[i].id == deleteID) {
            deleteIndex = i;
            break;
        }
    }
    if (deleteIndex != -1) {
        for (int i = deleteIndex; i < *productCount - 1; i++) {
            inventory[i] = inventory[i + 1];
        }
        (*productCount)--;
        printf("Product deleted.\n");
    } else {
        printf("Product not found.\n");
    }
}

int main() {
    struct Product inventory[10];
    int productCount = 0;
    int choice;

    while (1) {
        printf("Welcome to Our Online Store!\n");
        printf("----------------------------\n");
        printf("1. Add Product\n");
        printf("2. Update Product\n");
        printf("3. Delete Product\n");
        printf("4. Display Products\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addProduct(inventory, &productCount);
                break;
            case 2:
                updateProduct(inventory, productCount);
                break;
            case 3:
                deleteProduct(inventory, &productCount);
                break;
            case 4:
                printf("Products in Inventory:\n");
                for (int i = 0; i < productCount; i++) {
                    printf("Product %d:\n", i + 1);
                    displayProduct(inventory[i]);
                }
                break;
            case 5:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
