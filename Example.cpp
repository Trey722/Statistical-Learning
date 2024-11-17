#include <iostream>
#include <Eigen/Dense> 

int main() {
    // Create a 3x3 matrix using Eigen
    Eigen::Matrix3d A;
    A << 1, 2, 3,
         4, 5, 6,
         7, 8, 9;

    // Print the matrix
    std::cout << "Matrix A:" << std::endl;
    std::cout << A << std::endl;

    // Check if the matrix is invertible (determinant should not be 0)
    if (A.determinant() != 0) {
        // Compute the inverse of the matrix
        Eigen::Matrix3d A_inv = A.inverse();
        std::cout << "Inverse of Matrix A:" << std::endl;
        std::cout << A_inv << std::endl;
    } else {
        std::cout << "Matrix A is singular and cannot be inverted!" << std::endl;
    }

    return 0;
}

