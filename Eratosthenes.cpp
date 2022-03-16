 #include <iostream>

using namespace std;

void Eratosthenes(int, int*);

int main() {
    int n;
    cin >> n;
    int *a = new(int[n+1]);
    Eratosthenes(n, a);
    for (int i = 0; i < n; i++)
        if (a[i])
            cout << a[i] << " ";
    delete[](a);
    return 0;
}
void Eratosthenes(int n, int *a){
    for(int i = 0; i <= n; i++)
        a[i] = i;
    for(int m = 2; m <= n; m++)
        if(a[m])
            for(int j = m * m; j < n; j += m)
                a[j] = 0;
    return;
}