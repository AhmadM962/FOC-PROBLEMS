
#include <stdio.h>
void convert2DTo1D(int rows, int cols, int arr[rows][cols], int oneDArray[]) {
    int index = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            oneDArray[index++] = arr[i][j];
        }
    }
}
void fillArray(int arr[][100], int m, int k, int input[], int n) {
    int index = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < k; j++) {
            if (index < n) {
                arr[i][j] = input[index++];
            } else {
                arr[i][j] = 1; 
            }
        }
    }
}
void printArray(int arr[][100], int m, int k) {
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < k; ++j) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int n=0;
    int m=0;
    scanf("%d %d",&n,&m);
    int a2darr[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a2darr[i][j]);
        }
    }
    int r=0;
    int c=0;
    scanf("%d %d",&r,&c);
    int size = n * m;
    int oneDArray[size];

    convert2DTo1D(n, m, a2darr, oneDArray);
    int arr[100][100];
    fillArray(arr, r, c,oneDArray, size);
    printArray(arr, r, c);
    return 0;
}
