# include <iostream>

const int n1 = 1200;
const int n2 = 2000;
const int n3 = 7500;

int* insertionSort(int* base) {
    int N = n1;
    int* ret = base;
    for (int i = 1; i < N; i++)
        for (int j = i; j > 0 && ret[j - 1] > ret[j]; j--) 
                std::swap(ret[j-1], ret[j]);        
    return ret; 
}

int main() {
    int N = n1;
    srand(time(0));
    int* trying = new int[N];
    for (int i = 0; i < N; i++) {
        trying[i] = random() % N;
    }    
    trying = insertionSort(trying);
    for (int i = 0; i < N; i++) {
        std::cout << trying[i] << "\t";
    }
    std::cout << std::endl;
    return 0;
}
