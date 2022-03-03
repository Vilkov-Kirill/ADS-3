// Copyright 2021 NNTU-CS

// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
    int quan = 0;
    for (int i = 0; i < size; i++) { if (*(arr + i) == value) quan += 1; };
    return quan;
}
