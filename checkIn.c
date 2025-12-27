#include <stdio.h>

struct Booking {
    int roomNo;
    char guestName[50];
    char checkInDate[15];
};

int main() {
    FILE *fp;
    struct Booking b;

    fp = fopen("bookings.txt", "a");

    if (fp == NULL) {
        printf("Unable to open file.\n");
        return 0;
    }

    printf("Enter Room Number: ");
    scanf("%d", &b.roomNo);

    printf("Enter Guest Name: ");
    scanf("%s", b.guestName);

    printf("Enter Check-In Date (DD/MM/YYYY): ");
    scanf("%s", b.checkInDate);

    fprintf(fp, "%d %s %s\n", b.roomNo, b.guestName, b.checkInDate);

    fclose(fp);

    printf("Check-in completed successfully.\n");

    return 0;
}
