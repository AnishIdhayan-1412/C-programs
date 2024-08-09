/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

struct Type {
    char type[20]; // School, College or Area friend
    char common_friends[50];
    int places_visited;
};

struct Friends{
    char name[50];
    char pet_name[20];
    char phone_number[15];
    struct Type type;
} ;

int main() {
    int n;
    printf("Enter the number of friends to add: ");
    scanf("%d", &n);

    struct Friends friends[n];

    for (int i = 0; i < n; i++) {
        printf("Enter Friend Name: ");
        scanf("%s", friends[i].name);
        printf("Enter Pet Name: ");
        scanf("%s", friends[i].pet_name);
        printf("Enter Phone Number: ");
        scanf("%s", friends[i].phone_number);
        printf("Enter Type of friend: ");
        scanf("%s", friends[i].type.type);
        printf("Enter Name of Common Friends: ");
        scanf("%s", friends[i].type.common_friends);
        printf("Enter No. of Places Visited Together: ");
        scanf("%d", &friends[i].type.places_visited);
    }
    
    

    printf("\nFriend Details:\n");
    printf("Friends Name\tPet Name\tPhone number\tType os Friend\tPlaces visited together");
    for (int i = 0; i < n; i++) {
        printf("\n%s\t\t", friends[i].name);
        printf("%s\t\t", friends[i].pet_name);
        printf("%s\t\t", friends[i].phone_number);
        printf("%s\t\t", friends[i].type.type);
        printf("%s\t\t", friends[i].type.common_friends);
        printf("%d\n\n", friends[i].type.places_visited);
    }



    return 0;
}