#include <stdio.h>

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; // Mengembalikan indeks jika ditemukan
        }
    }
    return -1; // Mengembalikan -1 jika tidak ditemukan
}

int main() {
    int n, target;

    // Input jumlah elemen dalam array
    printf("Masukkan jumlah elemen dalam array: ");
    scanf("%d", &n);

    int arr[n];

    // Input elemen-elemen array
    printf("Masukkan elemen-elemen array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input elemen yang ingin dicari
    printf("Masukkan elemen yang ingin dicari: ");
    scanf("%d", &target);

    // Memanggil fungsi linearSearch untuk mencari elemen dalam array
    int result = linearSearch(arr, n, target);

    // Menampilkan hasil pencarian
    if (result != -1) {
        printf("Elemen %d ditemukan pada indeks %d.\n", target, result);
    } else {
        printf("Elemen %d tidak ditemukan dalam array.\n", target);
    }

    return 0;
}
