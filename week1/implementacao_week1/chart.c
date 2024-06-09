#include <stdio.h>

int main(void) {
    int m_f, f_m, f_f, m_m;

    printf("\nM procurando F: ");
    scanf("%d", &m_f);

    printf("F procurando M: ");
    scanf("%d", &f_m);

    printf("F procurando F: ");
    scanf("%d", &f_f);

    printf("M procurando M: ");
    scanf("%d", &m_m);


    // Imprime o gráfico de barras e os rótulos
    printf("\nM procurando F: ");
    for (int i = 0 - m_f; i < m_f; i++) {
        printf("#");
    }
    printf("\nF procurando M: ");
    for (int i = 0 - f_m; i < f_m; i++) {
        printf("#");
    }
    printf("\nF procurando F: ");
    for (int i = 0 - f_f; i < f_f; i++) {
        printf("#");
    }
    printf("\nM procurando M: ");
    for (int i = 0 - m_m; i < m_m; i++) {
        printf("#");
    }

    printf("\n\nM-F   F-M   F-F   M-M\n\n");

    return 0;
}
