#include <stdio.h>

int main() {
    int id, pass;
    printf("Enter ID: ");
    scanf("%d", &id);
    printf("Enter password: ");
    scanf("%d", &pass);
    switch (id) {
        case 436:
            switch (pass) {
                case 1423:
                    printf("Login successful");
                    break;
                default:
                    printf("Wrong password");
                    break;
            }
            break;
        default:
            printf("Wrong ID");
            break;
    } 
    return 0;
}