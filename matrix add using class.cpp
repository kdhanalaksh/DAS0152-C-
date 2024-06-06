#include <iostream>
#include <vector>
using namespace std;

class Matrix {
private:
    std::vector<std::vector<int>> data;
    int rows;
    int cols;

public:
    Matrix(int r, int c) : rows(r), cols(c) {
        data.resize(rows,vector<int>(cols, 0));
    }
    void inputMatrix() {
        cout << "Enter the elements of the matrix (" << rows << "x" << cols << "):\n";
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
            cin >> data[i][j];
            }
        }
    }

    void displayMatrix() const {
        for (const auto& row : data) {
            for (const auto& elem : row) {
                cout << elem << " ";
            }
            cout << endl;
        }
    }

    Matrix operator+(const Matrix& other) const {
        if (rows != other.rows || cols != other.cols) {
            throw std::invalid_argument("Matrices dimensions do not match for addition.");
        }

        Matrix result(rows, cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                result.data[i][j] = data[i][j] + other.data[i][j];
            }
        }
        return result;
    }
};

int main() {
    int rows, cols;

    cout << "Enter the number of rows and columns for the matrices: ";
    cin >> rows >> cols;

    Matrix mat1(rows, cols);
    Matrix mat2(rows, cols);

    cout << "Input elements for the first matrix:\n";
    mat1.inputMatrix();

    cout << "Input elements for the second matrix:\n";
    mat2.inputMatrix();

    try {
        Matrix result = mat1 + mat2;
        cout << "Resultant matrix after addition:\n";
        result.displayMatrix();
    } catch (const exception& e) {
        cerr << e.what() << endl;
    }

    return 0;
}

