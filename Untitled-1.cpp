#include <iostream>
#include <vector>
#include <limits>
using namespace std;

struct Matrix {
    int rows, cols;
    vector<vector<int>> data;
    string name;
    bool isCreated = false;

    void input() {
        data.resize(rows, vector<int>(cols));
        cout << "\nMasukkan nilai untuk " << name << ":\n";
        for (int r = 0; r < rows; r++) {
            for (int c = 0; c < cols; c++) {
                cout << "Nilai [" << r << "][" << c << "]: ";
                cin >> data[r][c];
            }
        }
        isCreated = true;
    }

    void print() const {
        if (!isCreated) {
            cout << "Matriks belum dibuat.\n";
            return;
        }
        cout << "\n" << name << " (" << rows << "x" << cols << "):\n";
        for (const auto& row : data) {
            for (int val : row)
                cout << val << "\t";
            cout << '\n';
        }
    }
};

vector<Matrix> matrices(5);
Matrix resultAdd, resultMultiply;

bool areAllMatricesCreated() {
    for (const auto& matrix : matrices)
        if (!matrix.isCreated) return false;
    return true;
}

bool isValidMatrixForOperation(int index) {
    return index >= 0 && index < matrices.size() && matrices[index].isCreated;
}

void createMatrices() {
    cout << "\n=== MEMBUAT MATRIKS ===\n";

    int sizes[5][2] = {{3, 4}, {3, 4}, {3, 4}, {2, 3}, {2, 4}};
    for (int i = 0; i < 5; ++i) {
        matrices[i] = {sizes[i][0], sizes[i][1], {}, "Matrix " + to_string(i+1) + " (" + to_string(sizes[i][0]) + "x" + to_string(sizes[i][1]) + ")"};
        matrices[i].input();
    }
    cout << "\nSemua matriks berhasil dibuat!\n";
}

void displayAllMatrices() {
    cout << "\n=== MENAMPILKAN SEMUA MATRIKS ===\n";
    if (!areAllMatricesCreated()) {
        cout << "Beberapa matriks belum dibuat.\n";
        return;
    }
    for (const auto& matrix : matrices) matrix.print();
}

void addMatrices() {
    cout << "\n=== PENAMBAHAN MATRIKS ===\n";
    int idx1, idx2;
    cout << "Indeks matriks pertama (0-4): "; cin >> idx1;
    cout << "Indeks matriks kedua (0-4): "; cin >> idx2;

    if (!isValidMatrixForOperation(idx1) || !isValidMatrixForOperation(idx2)) {
        cout << "Indeks tidak valid.\n"; return;
    }

    const auto& A = matrices[idx1];
    const auto& B = matrices[idx2];

    if (A.rows != B.rows || A.cols != B.cols) {
        cout << "Dimensi tidak sesuai untuk penambahan.\n"; return;
    }

    resultAdd = {A.rows, A.cols, vector<vector<int>>(A.rows, vector<int>(A.cols)), "Hasil Penambahan", true};
    for (int i = 0; i < A.rows; i++)
        for (int j = 0; j < A.cols; j++)
            resultAdd.data[i][j] = A.data[i][j] + B.data[i][j];
    cout << "Penambahan berhasil.\n";
}

void multiplyMatrices() {
    cout << "\n=== PERKALIAN MATRIKS ===\n";
    int idx1, idx2;
    cout << "Indeks matriks pertama (0-4): "; cin >> idx1;
    cout << "Indeks matriks kedua (0-4): "; cin >> idx2;

    if (!isValidMatrixForOperation(idx1) || !isValidMatrixForOperation(idx2)) {
        cout << "Indeks tidak valid.\n"; return;
    }

    const auto& A = matrices[idx1];
    const auto& B = matrices[idx2];

    if (A.cols != B.rows) {
        cout << "Dimensi tidak sesuai untuk perkalian.\n"; return;
    }

    resultMultiply = {A.rows, B.cols, vector<vector<int>>(A.rows, vector<int>(B.cols, 0)), "Hasil Perkalian", true};
    for (int i = 0; i < A.rows; i++)
        for (int j = 0; j < B.cols; j++)
            for (int k = 0; k < A.cols; k++)
                resultMultiply.data[i][j] += A.data[i][k] * B.data[k][j];
    cout << "Perkalian berhasil.\n";
}

void extractDiagonalMatrix(int idx) {
    const auto& A = matrices[idx];
    int n = min(A.rows, A.cols);
    resultAdd = {n, n, vector<vector<int>>(n, vector<int>(n, 0)), "Diagonal dari " + A.name, true};
    for (int i = 0; i < n; i++) resultAdd.data[i][i] = A.data[i][i];
    cout << "Diagonal matriks berhasil dibuat.\n";
}

void extractLowerTriangularMatrix(int idx) {
    const auto& A = matrices[idx];
    resultMultiply = {A.rows, A.cols, vector<vector<int>>(A.rows, vector<int>(A.cols, 0)), "Segitiga Bawah dari " + A.name, true};
    for (int i = 0; i < A.rows; i++)
        for (int j = 0; j <= i && j < A.cols; j++)
            resultMultiply.data[i][j] = A.data[i][j];
    cout << "Segitiga bawah matriks berhasil dibuat.\n";
}

void extractUpperTriangularMatrix(int idx) {
    const auto& A = matrices[idx];
    resultAdd = {A.rows, A.cols, vector<vector<int>>(A.rows, vector<int>(A.cols, 0)), "Segitiga Atas dari " + A.name, true};
    for (int i = 0; i < A.rows; i++)
        for (int j = i; j < A.cols; j++)
            resultAdd.data[i][j] = A.data[i][j];
    cout << "Segitiga atas matriks berhasil dibuat.\n";
}

void showMenu() {
    cout << "\n====== MENU MATRIKS ======\n"
         << "1. Buat matriks\n2. Tampilkan semua matriks\n"
         << "3. Penambahan matriks\n4. Perkalian matriks\n"
         << "5. Diagonal matriks\n6. Segitiga bawah\n"
         << "7. Segitiga atas\n8. Keluar\n"
         << "Pilihan: ";
}

int main() {
    int choice;
    while (true) {
        showMenu();
        cin >> choice;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        if (choice == 8) break;
        if (!areAllMatricesCreated() && choice != 1) {
            cout << "Silakan buat semua matriks terlebih dahulu.\n";
            continue;
        }

        switch (choice) {
            case 1: createMatrices(); break;
            case 2: displayAllMatrices(); break;
            case 3: addMatrices(); resultAdd.print(); break;
            case 4: multiplyMatrices(); resultMultiply.print(); break;
            case 5: { int idx; cout << "Indeks matriks (0-4): "; cin >> idx;
                      if (isValidMatrixForOperation(idx)) extractDiagonalMatrix(idx);
                      resultAdd.print(); break; }
            case 6: { int idx; cout << "Indeks matriks (0-4): "; cin >> idx;
                      if (isValidMatrixForOperation(idx)) extractLowerTriangularMatrix(idx);
                      resultMultiply.print(); break; }
            case 7: { int idx; cout << "Indeks matriks (0-4): "; cin >> idx;
                      if (isValidMatrixForOperation(idx)) extractUpperTriangularMatrix(idx);
                      resultAdd.print(); break; }
            default: cout << "Pilihan tidak valid.\n";
        }
    }
    cout << "Terima kasih telah menggunakan program.\n";
    return 0;
}