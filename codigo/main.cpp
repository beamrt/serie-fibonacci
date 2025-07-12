#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Quantos termos da série de Fibonacci deseja ver? ";
    cin >> n;

    int primeiro = 0, segundo = 1, proximo;

    cout << "Série de Fibonacci: ";

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            cout << primeiro << " ";
        } else if (i == 1) {
            cout << segundo << " ";
        } else {
            proximo = primeiro + segundo;
            cout << proximo << " ";
            primeiro = segundo;
            segundo = proximo;
        }
    }

    cout << endl;
    return 0;
}
