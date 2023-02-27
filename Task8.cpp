# include <iostream>

const int n1 = 2400;
const int n2 = 4000;
const int n3 = 15000;
const int N = n3;

int* shellSort(int* base) {
    int* ret = base;    
    for (int gap = N/2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < N; i += 1)
        {
            int temp = ret[i];
            int j;            
            for (j = i; j >= gap && ret[j - gap] > temp; j -= gap)
                ret[j] = ret[j - gap];
            ret[j] = temp;
        }
    }
    return ret;
}


int main() {
    srand(time(0));
    int* trying = new int[N];
    for (int i = 0; i < N; i++) {
        trying[i] = random() % N;
    }    
    for (int i = 0; i < N; i++) {
        std::cout << trying[i] << "\t";
    }
    std::cout << std::endl;
    trying = shellSort(trying);
    for (int i = 0; i < N; i++) {
        std::cout << trying[i] << "\t";
    }
    std::cout << std::endl;
    return 0;
}
