#include "include/Core.hpp"

int main(int argc,char* argv[]) {
    Y::math::ComplexNum numA(2,2);
    Y::math::ComplexNum numB(3,3);

    // (2 + 2i)(3 + 3i)
    // 6 + 6i + 6i + (-1)6
    // 12i

    std::cout << numA.getRealPart() << "," << numA.getImagPart() << " " << numB.getRealPart() << "," << numB.getImagPart() << std::endl;
    numA *= numB; // 0 12
    std::cout << numA.getRealPart() << "," << numA.getImagPart() << std::endl;
    // numA += numB;
    // std::cout << numA.getRealPart() << "," << numA.getImagPart() << std::endl;
    // numA -= numB;
    // std::cout << numA.getRealPart() << "," << numA.getImagPart() << std::endl;
    // numA = numA - numB;
    // std::cout << numA.getRealPart() << "," << numA.getImagPart() << std::endl;

    return 0;
}


