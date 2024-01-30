#include <stdio.h>

int main() {
    int name_kjfsnbv89432y5y3t7bdfsj_rows, name_kjfsnbv89432y5y3t7bdfsj_cols;
    scanf("%d %d", &name_kjfsnbv89432y5y3t7bdfsj_rows, &name_kjfsnbv89432y5y3t7bdfsj_cols);

    int name_kjfsnbv89432y5y3t7bdfsj_matrix[name_kjfsnbv89432y5y3t7bdfsj_rows][name_kjfsnbv89432y5y3t7bdfsj_cols];

    for (int name_kjfsnbv89432y5y3t7bdfsj_i = 0; name_kjfsnbv89432y5y3t7bdfsj_i < name_kjfsnbv89432y5y3t7bdfsj_rows; name_kjfsnbv89432y5y3t7bdfsj_i++) {
        for (int name_kjfsnbv89432y5y3t7bdfsj_j = 0; name_kjfsnbv89432y5y3t7bdfsj_j < name_kjfsnbv89432y5y3t7bdfsj_cols; name_kjfsnbv89432y5y3t7bdfsj_j++) {
            scanf("%d", &name_kjfsnbv89432y5y3t7bdfsj_matrix[name_kjfsnbv89432y5y3t7bdfsj_i][name_kjfsnbv89432y5y3t7bdfsj_j]);
        }
    }

    long long int name_kjfsnbv89432y5y3t7bdfsj_result = 0;

    for (int name_kjfsnbv89432y5y3t7bdfsj_col = 0; name_kjfsnbv89432y5y3t7bdfsj_col < name_kjfsnbv89432y5y3t7bdfsj_cols; name_kjfsnbv89432y5y3t7bdfsj_col++) {
        for (int name_kjfsnbv89432y5y3t7bdfsj_row = 0; name_kjfsnbv89432y5y3t7bdfsj_row < name_kjfsnbv89432y5y3t7bdfsj_rows; name_kjfsnbv89432y5y3t7bdfsj_row++) {
            name_kjfsnbv89432y5y3t7bdfsj_result = name_kjfsnbv89432y5y3t7bdfsj_result * 10 + name_kjfsnbv89432y5y3t7bdfsj_matrix[name_kjfsnbv89432y5y3t7bdfsj_row][name_kjfsnbv89432y5y3t7bdfsj_col];
        }
        name_kjfsnbv89432y5y3t7bdfsj_result /= 10;
    }

    printf("%lld\n", name_kjfsnbv89432y5y3t7bdfsj_result);

    return 0;
}

