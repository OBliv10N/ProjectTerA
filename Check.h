#include "Point.h"

bool check()       //ชนขอบหรือป่าว
{
    for (int i = 0; i < 4; i++)
        if (b[i].x < 0 || b[i].x >= wide || b[i].y >= high) return 0;
        else if (field[b[i].y][b[i].x]) return 0;

    return 1;
};