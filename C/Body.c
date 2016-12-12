#include <math.h>

void gravity(Body *a, Body *b) {
    double dist_x = a->x - b->x;
    double dist_y = a->y - b->y;
    double dist_squared = dist_x * dist_x + dist_y * dist_y;

    if (dist_squared == 0) return;
    double force = GRAV_CONST * a->mass * b->mass / dist_squared;

    double direction = atan2(dist_y, dist_x);
    double d_cos = cos(direction);
    double d_sin = sin(direction);

    a->vx -= (force / a->mass) * d_cos;
    a->vy -= (force / a->mass) * d_sin;
    b->vx += (force / b->mass) * d_cos;
    b->vy += (force / b->mass) * d_sin;
}
