#include <stdio.h>

int main() {
    double data[4][5] = {
        {1, 67, 76, 55, 0},
        {2, 34, 79, 76, 0},
        {3, 56, 68, 57, 0},
        {4, 66, 89, 65, 0}
    };

    int max_idx = 0;

    printf("ID\tMath\tProg\tPhys\tAverage\n");
    printf("------------------------------------------\n");

    for (int i = 0; i < 4; i++) {
        data[i][4] = (data[i][1] + data[i][2] + data[i][3]) / 3.0;

        if (data[i][4] > data[max_idx][4]) {
            max_idx = i;
        }

        printf("%.0f\t%.0f\t%.0f\t%.0f\t%.2f\n",
                data[i][0], data[i][1], data[i][2], data[i][3], data[i][4]);
    }

    printf("\nEn yuksek ortalamaya sahip ogrenci:\n");
    printf("ID: %.0f, Ortalama: %.2f\n", data[max_idx][0], data[max_idx][4]);

    return 0;
}