//2
#include <stdio.h>

int main() {
    int v4r14bl3_1;
    scanf("%d", &v4r14bl3_1);

    int m4x_3l3m3nt = 1300;
    int fr3qu3ncy_arr[m4x_3l3m3nt + 1];

    for (int indx = 0; indx <= m4x_3l3m3nt; indx++) {
        fr3qu3ncy_arr[indx] = 0;
    }

    for (int i = 0; i < v4r14bl3_1; i++) {
        int num;
        scanf("%d", &num);
        fr3qu3ncy_arr[num]++;
    }

    int qu3ry_count;
    scanf("%d", &qu3ry_count);

    for (int i = 0; i < qu3ry_count; i++) {
        int qu3ry_num;
        scanf("%d", &qu3ry_num);
        printf("%d\n", fr3qu3ncy_arr[qu3ry_num]);
    }

    return 0;
}
