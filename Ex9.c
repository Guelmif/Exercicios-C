#include <stdio.h>

int main() {
    int n, id = 0, num = 2;

    printf("Digite o número de primeiros números primos que deseja ver: ");
    scanf("%d", &n);

    printf("Os primeiros %d números primos são:\n", n);
    while (id < n) {
        int e_primo = 1; 
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                e_primo = 0; 
                break;
            }
        }
        if (e_primo) {
            printf("%d ", num);
            id++;
        }
        num++;
    }

    return 0;
}
