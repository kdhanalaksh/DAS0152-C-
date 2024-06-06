#include <iostream>

class Matrix {
private:
    int rows;
    int cols;
    int** data;

public:
    Matrix(int numRows, int numCols) : rows(numRows), cols(numCols) {
        data = new int*[rows];
        for (int i = 0; i < rows; ++i) {
            data[i] = new int[cols];
        }
    }
    ~Matrix() {
        for (int i = 0; i < rows; ++i) {
            delete[] data[i];
        }
        delete[] data;
    }
    void inputMatrix() {
        std::cout << "Enter the elements of the matrix:" << std::endl;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                std::cout << "Enter element (" << i + 1 << "," << j + 1 << "): ";
                std::cin >> data[i][j];
            }
        }
    }
    void displayMatrix() const {
        std::cout << "Matrix:" << std::endl;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                std::cout << data[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }
    Matrix add(const Matrix& m) const {
        if (rows != m.rows || cols != m.cols) {
            std::cerr << "Matrices should have same dimensions for addition!" << std::endl;
            exit(1);
        }

        Matrix result(rows, cols);

        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                result.data[i][j] = data[i][j] + m.data[i][j];
            }
        }

        return result;
    }
};

int main() {
    int rows, cols;

    std::cout << "Enter the number of rows and columns of the matrices: ";
    std::cin >> rows >> cols;

    Matrix matrix1(rows, cols);
    Matrix matrix2(rows, cols);
    matrix1.inputMatrix();
    matrix2.inputMatrix();
    std::cout << "Matrix 1:" << std::endl;
    matrix1.displayMatrix();
    std::cout << std::endl;
    std::cout << "Matrix 2:" << std::endl;
    matrix2.displayMatrix();
    std::cout << std::endl;
    Matrix sumMatrix = matrix1.add(matrix2);
    std::cout << "Sum of the matrices:" << std::endl;
    sumMatrix.displayMatrix();

    return 0;
}

