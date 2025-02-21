//REMOVE DUPICANTS FROM THE ARRAY

#include <stdio.h>

int removeDuplicates(int a[], int N) {
    if (N == 0) return 0;

    int j = 0;
    for (int i = 1; i < N; i++) {
        if (a[i] != a[j]) {
            j++;
            a[j] = a[i];
        }
    }
    return j + 1; 
}

int main() {
    int N, T;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &N);
        int a[N];

        for (int i = 0; i < N; i++) {
            scanf("%d", &a[i]);
        }
        int new = removeDuplicates(a, N);
        printf("%d\n", newSize);
        for (int i = 0; i < new; i++) {
            printf("%d ", a[i]);
        }
        printf("\n");
    }
    return 0;
}


