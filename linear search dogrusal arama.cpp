

/*

Linear Search (Doğrusal Arama)
Baştan başlayarak aranan sayıyla kıyaslıyor, varsa
indirisi döndür yoksa -1 döndür.

*/

#include <iostream>
using namespace std;

int search(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}

// Driver code
int main(void)
{
    int arr[] = { 2, 3, 4, 10, 40 };
    int x = 5;
    int n = sizeof(arr) / sizeof(arr[0]);

    // Function call
    int result = search(arr, n, x);
    (result == -1)
        ? cout << "oge dizide mevcut degil "
        : cout << "oge dizide mevcut  " << result;
    return 0;
}