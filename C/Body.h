#ifndef BODY_H_gg
#define BODY_H_gg

#define GRAV_CONST 6.67408E-11

typedef struct body {
    double mass, x, y, vx, vy;
} Body;

void gravity(Body *a, Body *b);

#endif
