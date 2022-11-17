#include <stdio.h>
int main()
{
    int i, n, m;

    for(i = 1; i <= 3; i++){
        m = 0;
        for(n = 1; n <=10; n++){
            m = m + i;
            printf("%d x %d = %d\n", i, n, m);
        }

    }
    return 0;
}
