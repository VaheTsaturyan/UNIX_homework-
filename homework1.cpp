#include <math.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>


int main() {
    pid_t pid = fork();

    if (pid == -1)
    {
        perror("Fork failed");
        return 1;
    }
    
    if (pid == 0) {
        int height;
        int lenght;
        printf("Write the height and length of the rectangle\n");
        scanf("%d %d", &height, &lenght);
        printf("Rectangle S =  : %d\n", (lenght * height));
    } else {
        wait(NULL);
        int a;
        int b;
        int c;
        printf("Write the side of the triangle (a, b, c)\n");
        scanf("%d %d %d", &a, &b, &c);
        int p = a + b + c;
        double s = sqrt( p/2 * ( p/2 - a )*( p/2 - b)*( p/2 - c ));
        printf("Triangle S =  : %lf\n", (s));
    }
    return 0;
}

