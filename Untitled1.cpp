#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    char destination[50];
    int days;
    float budget;
} TravelPlan;

void showSafetyTips(char destination[]) {
    if (strcmp(destination, "Delhi") == 0) {
        printf("Safety Tips for Delhi:\n");
        printf("- Avoid isolated areas at night\n");
        printf("- Keep emergency numbers handy\n");
    } else {
        printf("General Safety Tips:\n");
        printf("- Stay hydrated\n");
        printf("- Keep your documents safe\n");
    }
}

int main() {
    TravelPlan user;
    printf("Enter your name: ");
    scanf("%s", user.name);
    printf("Enter destination: ");
    scanf("%s", user.destination);
    printf("Enter number of travel days: ");
    scanf("%d", &user.days);
    printf("Enter your budget: ");
    scanf("%f", &user.budget);

    printf("\nWelcome, %s!\n", user.name);
    showSafetyTips(user.destination);
    return 0;
}
