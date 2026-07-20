// Create a Game Character Profile.

// Take input for: Character Name
// Level
// Health
// Rank
// Experience Points

#include <stdio.h>

int main() {
    char char_name[20], rank;
    int level, exp_points;
    float health;

    printf("Enter Character Name: ");
    scanf("%s", char_name);

    printf("Enter Level: ");
    scanf("%d", &level);

    printf("Enter health: ");
    scanf("%f", &health);

    printf("Rank: ");
    scanf(" %c", &rank);

    printf("Experience pts: ");
    scanf("%d", &exp_points);

    printf("========================\n");
    printf("\tCHARACTER\n");
    printf("========================\n");

    printf("CharacterName: \t%s\nHealth: \t%.3f\nRank: \t%c\nExperience pts: \t%d",  char_name,health,rank,exp_points);

    return 0;
}