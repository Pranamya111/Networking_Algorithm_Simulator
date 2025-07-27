#include <stdio.h>
#include <stdlib.h>
#include<string.h> 

#include "bit_stuffing.h"
#include "byte_stuffing.h"
#include "ceaser_cipher.h"
#include "crc.h"
#include "dijkstra.h"
#include "distance_vector.h"
#include "leaky_bucket.h"


//void distance_vector();
//void dijkstra();
//void bit_stuffing();
//void byte_stuffing();
//void crc();
//void leaky_bucket();
//void ceaser_cipher();

int main() {
    int choice;
    while (1) {
        printf("\nNetworking Algorithms Simulator\n");
        printf("1. Distance Vector\n");
        printf("2. Dijkstras Algorithm\n");
        printf("3. Bit Stuffing\n");
        printf("4. Byte Stuffing\n");
        printf("5. CRC\n");
        printf("6. Leaky Bucket Algorithm\n");
        printf("7. Caeser Cipher Algorithm\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1: distance_vector(); break;
            case 2: dijkstra(); break;
            case 3: bit_stuffing(); break;
            case 4: byte_stuffing(); break;
            case 5: crc(); break;
            case 6: leaky_bucket(); break;
            case 7: ceaser_cipher(); break;
            case 8: return 0;
            default: printf("Invalid choice.\n");
        }
    }
}
