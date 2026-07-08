#include <iostream>
using namespace std;

int main() {
    int nilai;

    cout << "Masukkan nilai: ";
    cin >> nilai;

    if (nilai >= 60) { // kondisi pertama (lulus/tidak)
        cout << "Status: Lulus" << endl;

        // if bersarang untuk menentukan grade
        if (nilai >= 85) {
            cout << "Grade: A" << endl;
        } else if (nilai >= 75) {
            cout << "Grade: B" << endl;
        } else if (nilai >= 65) {
            cout << "Grade: C" << endl;
        } else {
            cout << "Grade: D" << endl;
        }

    } else {
        cout << "Status: Tidak Lulus" << endl;
    }

    return 0;
}