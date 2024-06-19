#ifndef FONCTION_H
#define FONCTION_H

// Define a User structure
typedef struct {
    char username[50];
    char password[50];
} User;

// Function declaration
int authenticate(const char* username, const char* password);

#endif // FONCTION_H


