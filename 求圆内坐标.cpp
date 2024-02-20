#include <stdio.h>
int main() {
    int x, y;
    int r=50;
    for(x=400-r;x<=400+r;x++){
        for (y=240-r;y<=240+r;y++) {
            if ((x-400)*(x-400)+(y-240)*(y-240)<=(r*r)){
                printf("(%d,%d)\n",x,y);
            }
        }
    }
}