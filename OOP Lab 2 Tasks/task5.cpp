#include <iostream>
using namespace std;
const int MAX_PRODUCTS = 100;
struct Product
{
    int productId;
    char name[50];
    double price;
    int quantity;
};
Product products[MAX_PRODUCTS];
int numProducts = 0;
void addProduct(int productId, const char *name, double price, int quantity)
{
    if (numProducts < MAX_PRODUCTS)
    {
        Product product = {productId};
        strncpy(product.name, name, sizeof(product.name));
        product.name[sizeof(product.name) - 1] = '\0';
        product.price = price;
        product.quantity = quantity;
        products[numProducts++] = product;
        cout << "Product added successfully.\n";
    }
    else
    {
        cout << "Maximum number of products reached. Cannot add more.\n";
    }
}
void displayProduct(int productId)
{
    for (int i = 0; i < numProducts; ++i)
    {
        if (products[i].productId == productId)
        {
            cout << "Product ID: " << products[i].productId << endl;
            cout << "Name: " << products[i].name << endl;
            cout << "Price: " << products[i].price << endl;
            cout << "Quantity in Stock: " << products[i].quantity << endl;
            return;
        }
    }
    cout << "Product with ID " << productId << " not found.\n";
}
void updateProduct(int productId, double newPrice, int newQuantity)
{
    for (int i = 0; i < numProducts; ++i)
    {
        if (products[i].productId == productId)
        {
            products[i].price = newPrice;
            products[i].quantity = newQuantity;
            cout << "Product information updated successfully.\n";
            return;
        }
    }
    cout << "Product with ID " << productId << " not found.\n";
}
void removeProduct(int productId)
{
    for (int i = 0; i < numProducts; ++i)
    {
        if (products[i].productId == productId)
        {
            for (int j = i; j < numProducts - 1; ++j)
            {
                products[j] = products[j + 1];
            }
            numProducts--;
            cout << "Product removed successfully.\n";
            return;
        }
    }
    cout << "Product with ID " << productId << " not found.\n";
}

int main()
{
    addProduct(1, "Laptop", 999.99, 10);
    addProduct(2, "Smartphone", 499.99, 20);
    displayProduct(1);
    displayProduct(2);
    updateProduct(1, 899.99, 5);
    displayProduct(1);
    removeProduct(2);
    displayProduct(2);
    return 0;
}
