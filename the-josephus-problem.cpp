#include <stdio.h>

#define TOTAL_PEOPLE 41
#define STEP 2

int main() {
    int circle[TOTAL_PEOPLE];
    int remaining_people = TOTAL_PEOPLE;
    int index = 0;

    // Initialize the circle with all people "alive" (1)
    for (int i = 0; i < TOTAL_PEOPLE; i++) {
        circle[i] = 1;
    }

    // Continue until only one person remains
    while (remaining_people > 1) {
        int steps_taken = 0;

        // Move to the next alive person
        while (steps_taken < STEP) {
            index = (index + 1) % TOTAL_PEOPLE;
            if (circle[index] == 1) {
                steps_taken++;
            }
        }

        // Eliminate the person
        circle[index] = 0;
        remaining_people--;
    }

    // Find the last remaining person and print the result
    for (int i = 0; i < TOTAL_PEOPLE; i++) {
        if (circle[i] == 1) {
            printf("Index %d is alive\n", i + 1);
            break;
        }
    }

    return 0;
}
