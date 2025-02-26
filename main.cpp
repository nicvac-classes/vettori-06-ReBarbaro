#include <iostream>
using namespace std;

int main() {
    
    int n;

    cout << "quanti atleti ci sono ?" << endl;
    cin >> n;
    string a[n];
    string naz[n];
    double t[n];
    int i;

    i = 0;
    while (i < n) {
        cout << "quale è il" << i + 1 << "nome ?" << endl;
        cin >> a[i];
        cout << "quale è la nazionale del" << i + 1 << "atleta?" << endl;
        cin >> naz[i];
        cout << "quale è il tempo del" << i + 1 << "atleta?" << endl;
        cin >> t[i];
        i = i + 1;
    }
    i = 0;
    while (i < n) {
        cout << "il " << i + 1 << "nome è " << a[i] << " la" << i + 1 << " nazione è " << naz[i] << " il" << i + 1 << " tempo è " << t[i] << endl;
        i = i + 1;
    }
    int min;
    int imin;

    i = 0;
    min = (int) t[i];
    imin = 0;
    while (i < n) {
        if (t[i] < min) {
            min = (int) t[i];
            imin = i;
        }
        i = i + 1;
    }
    cout << "il nome del vincitore è" << a[imin] << "la nazionalità è" << naz[imin] << "il tempo è" << t[imin] << endl;
    
}

