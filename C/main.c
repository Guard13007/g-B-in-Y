#include <stdlib.h>
#include <time.h>

#include "Body.h"

int main(void) {
    time_t t;
    srand((unsigned) time(&t));

    int body_count = rand() % 48 + 2; // 2 to 50 bodies
    Body bodies[body_count];

    for (i = 0; i < body_count; i++) {
        bodies[i].mass = rand() + 1;  // minimum of 1 mass
        bodies[i].x = rand();
        bodies[i].y = rand();
        bodies[i].vx = rand();
        bodies[i].vy = rand();
    }

    while (true) {
        for (i = 0; i < body_count - 1; i += 2) {
            for (j = i + 1; j < body_count; j++) {
                gravity(bodies[i], bodies[j]);
            }
        }
        for (i = 0; i < body_count; i++) {
            body.x += bodies[i].vx;
            body.y += bodies[i].vy;
        }
    }

    return 0;
}
