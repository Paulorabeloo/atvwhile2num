#include <stdio.h>

int main() {
    int i = 0, j = 0;
    printf("Digite dois n�meros para saber todos os n�meros entre eles: ");
    scanf("%i%i", &i, &j);
    if (i < j) {
        i++;
        while (i < j) {
            printf("%i\n", i++);
        }
    }
    return 0;
}
