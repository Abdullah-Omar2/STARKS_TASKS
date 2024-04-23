#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_CLIENTS 100
#define MAX_NAME_LENGTH 50
typedef struct {
    int id;
    char name[MAX_NAME_LENGTH];
    float balance;
} Client;
void displayMenu();
void listClients(Client clients[], int numClients);
void addClient(Client clients[], int *numClients);
void editClient(Client clients[], int numClients);
void main() {
    Client clients[MAX_CLIENTS];
    int numClients=0;
    int choice;
    do 
	{
        displayMenu();
        scanf("%d",&choice);

        switch (choice)
		{
            case 1:
                listClients(clients, numClients);
                break;
            case 2:
                addClient(clients, &numClients);
                break;
            case 3:
                editClient(clients, numClients);
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);
}

void displayMenu()
{
    printf("\nBank System Menu:\n");
    printf("1. List Clients\n");
    printf("2. Add New Client\n");
    printf("3. Edit Client Data\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
}

void listClients(Client clients[], int numClients) {
    if (numClients == 0) {
        printf("No clients found.\n");
        return;
    }

    printf("Clients:\n");
    printf("ID\tName\tBalance\n");
    for (int i = 0; i < numClients; i++) {
        printf("%d\t%s\t%.2f\n", clients[i].id, clients[i].name, clients[i].balance);
    }
}

void addClient(Client clients[], int *numClients) {
    if (*numClients >= MAX_CLIENTS) {
        printf("Maximum number of clients reached.\n");
        return;
    }

    printf("Enter client name: ");
    scanf("%s", clients[*numClients].name);

    clients[*numClients].id = *numClients + 1;

    printf("Enter initial balance: ");
    scanf("%f", &clients[*numClients].balance);

    (*numClients)++;
    printf("Client added successfully.\n");
}

void editClient(Client clients[], int numClients) {
    int id;
    printf("Enter the ID of the client to edit: ");
    scanf("%d", &id);

    int found = 0;
    for (int i = 0; i < numClients; i++) {
        if (clients[i].id == id) {
            found = 1;
            printf("Enter new name: ");
            scanf("%s", clients[i].name);
            printf("Enter new balance: ");
            scanf("%f", &clients[i].balance);
            printf("Client data updated successfully.\n");
            break;
        }
    }

    if (!found) {
        printf("Client with ID %d not found.\n", id);
    }
}