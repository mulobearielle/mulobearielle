//
// Created by HP on 19/06/2024.
//
#include <string.h>
#include "fonction.h"

// Define a simple user database
User users[] = {
    {"user1", "pass1"},
    {"user2", "pass2"},
    {"admin", "admin123"}
};

int authenticate(const char* username, const char* password) {
    for(int i = 0; i < sizeof(users) / sizeof(User); i++) {
        if(strcmp(users[i].username, username) == 0 && strcmp(users[i].password, password) == 0) {
            return 1;
        }
    }
    return 0;
}
