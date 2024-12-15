#include <stdio.h>


int timKiemPhanTu(int *arr, int size, int giaTri) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == giaTri) {
            return i;
        }
    }
    return -1; 
}

int main() {

    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15};
    int size = sizeof(arr) / sizeof(arr[0]);
    int giaTriTimKiem = 7;

  
    int viTri = timKiemPhanTu(arr, size, giaTriTimKiem);

    
    if (viTri != -1) {
        printf("Phan tu %d duoc tim thay o vi tri: %d\n", giaTriTimKiem, viTri);
    } else {
        printf("Khong tim thay phan tu %d trong mang.\n", giaTriTimKiem);
    }

    return 0;
}

