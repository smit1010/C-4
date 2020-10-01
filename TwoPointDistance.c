#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct point{
    int x;
    int y;
};
int main(){
    struct point pos1, pos2;
    double distance;
    fputs("Input point1 pos: ", stdout);
    scanf("%d %d", &pos1.x, &pos1.y);

    fputs("Input point2 pos: ", stdout);
    scanf("%d %d", &pos2.x, &pos2.y);

    distance = sqrt((double)((pos1.x-pos2.x)*(pos1.x-pos2.x) + (pos1.y-pos2.y)*(pos1.y-pos2.y)));

    printf("두 점의 거리는 %g 입니다.", distance);
    return 0;
}
