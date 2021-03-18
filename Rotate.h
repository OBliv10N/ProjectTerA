#include "Point.h"

bool rotate = 0;

void Rotate(){
    if (rotate){ 
        point p = b[0];
        for (int i = 0; i < 4; i++) {
            int x = b[i].y - p.y;
            int y = b[i].x - p.x;
            b[i].x = p.x - x;
            b[i].y = p.y + y;
        }
    }
}
