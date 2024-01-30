#include <stdio.h>

int main() {
    int num_elements3213gdv;
    scanf("%d", &num_elements3213gdv);

    int input_array3213gdv[num_elements3213gdv];
    for (int i4561fdv = 0; i4561fdv < num_elements3213gdv; i4561fdv++) {
        scanf("%d", &input_array3213gdv[i4561fdv]);
    }

    int swap_count5487fdv = 0, current_index7845fdv = 0;
    while (current_index7845fdv < num_elements3213gdv) {
        int max_index3268fdv = current_index7845fdv;
        for (int next_index5678fdv = current_index7845fdv + 1; next_index5678fdv < num_elements3213gdv; next_index5678fdv++) {
            if (input_array3213gdv[next_index5678fdv] > input_array3213gdv[max_index3268fdv]) {
                max_index3268fdv = next_index5678fdv;
            }
        }

        if (max_index3268fdv != current_index7845fdv) {
            int temp6754fdv = input_array3213gdv[current_index7845fdv];
            input_array3213gdv[current_index7845fdv] = input_array3213gdv[max_index3268fdv];
            input_array3213gdv[max_index3268fdv] = temp6754fdv;
            swap_count5487fdv++;
        }

        current_index7845fdv++;
    }

    if (swap_count5487fdv == 1) {
        printf("%d swap\n", swap_count5487fdv);
    } else if (swap_count5487fdv > 1 || swap_count5487fdv==0) {
        printf("%d swaps\n", swap_count5487fdv);
    }

    for (int index1243fdv = 0; index1243fdv < num_elements3213gdv; index1243fdv++) {
        printf("%d ", input_array3213gdv[index1243fdv]);
    }

    return 0;
}


