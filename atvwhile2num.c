#include <stdio.h>

int main() {
    int i = 0, j = 0;
    printf("Digite dois números para saber todos os números entre eles: ");
    scanf("%i%i", &i, &j);
    if (i < j) {
        i++;
        while (i < j) {
            printf("%i\n", i++);
        }
    }
    return 0;
}
