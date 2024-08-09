/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
//declaring a structure Type
struct Type {
    char type[20]; // School, College or Area friend
    char common_friends[50];// common friends name
    int places_visited; //no. of places visited
};

//declaring another structure Friends
struct Friends{
    char name[50];                            //name of friend
    char pet_name[20];                        // his/her pet name
    char phone_number[15];                    // his / her ph.no.
    struct Type type;                         //nesting Type into Friends by creating object inside Friends
} ;

int main() {                                   //declaring main()
    int n;
    printf("Enter the number of friends to add: ");
    scanf("%d", &n);                           // getting no. of friends

    struct Friends friends[n];                // creatibg n no. of objects for Friends 

    for (int i = 0; i < n; i++) {              //getting inputs using fir loop dynamically
        printf("Enter Friend Name: ");
        scanf("%s", friends[i].name);          //dot operator is used to access variables of objects
        printf("Enter Pet Name: ");
        scanf("%s", friends[i].pet_name);
        printf("Enter Phone Number: ");
        scanf("%s", friends[i].phone_number);
        printf("Enter Type of friend: ");
        scanf("%s", friends[i].type.type);      //using dot operator twice to access variables in nested structure
        printf("Enter Name of Common Friends: ");
        scanf("%s", friends[i].type.common_friends);
        printf("Enter No. of Places Visited Together: ");
        scanf("%d", &friends[i].type.places_visited);
    }
    
    

    printf("\nFriend Details:\n");                //printing details obtained using for loop
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
