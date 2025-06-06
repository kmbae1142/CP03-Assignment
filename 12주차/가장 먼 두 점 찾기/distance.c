#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct {
    int xpos;
    int ypos;
}Pos;

int main(){

    Pos pos[100];
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &pos[i].xpos, &pos[i].ypos);
    }
    
    double max = -1.0;
    Pos pos1, pos2;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int dx = (int)pow(pos[i].xpos - pos[j].xpos, 2);
            int dy = (int)pow(pos[i].ypos - pos[j].ypos, 2);
            double dist = sqrt((double)dx + dy);
            if (max < dist) {
                max = dist;
                pos1 = pos[i];
                pos2 = pos[j];
            }
        }
    }

    printf("%d %d\n", pos1.xpos, pos1.ypos);
    printf("%d %d\n", pos2.xpos, pos2.ypos);
    printf("%.2lf", max);
    
    return 0;
    
}
