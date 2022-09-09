#include "include/Complex.hpp"

namespace Y {

    namespace math {

        /// Structs ///

        ///////////////////////
        /// End of Structs ///
        /////////////////////

        /// Classes ///

        ComplexNum::ComplexNum() {
            real = 0;
            imag = 0;
        }

        ComplexNum::ComplexNum(int a , int b) {
            real = a;
            imag = b;
        }

        ComplexNum ComplexNum::operator+(ComplexNum &other){
            ComplexNum hold;
            hold.setReal(real + other.getRealPart());
            hold.setImag(imag + other.getImagPart());

            return hold;
        }

        ComplexNum ComplexNum::operator-(ComplexNum &other) {
            ComplexNum hold;
            hold.setReal(real - other.getRealPart());
            hold.setImag(imag - other.getImagPart());

            return hold;
        }

        ComplexNum ComplexNum::operator*(ComplexNum &other) {
            ComplexNum hold;
            // a1*a2 + a1*b2*i + a2*b1*i + b1*b2*(-1)
            int hold1 = real * other.getRealPart(); // real
            int hold2 = real * other.getImagPart(); // imaginary
            int hold3 = imag * other.getRealPart();
            int hold4 = imag * other.getImagPart() * -1; // real
            hold.setReal(hold1 + hold4);
            hold.setImag(hold2 + hold3);
            return hold;
        }

        void ComplexNum::operator+=(ComplexNum &other) {
            real += other.getRealPart();
            imag += other.getImagPart();
        }

        void ComplexNum::operator-=(ComplexNum &other) {
            real -= other.getRealPart();
            imag -= other.getImagPart();
        }

        void ComplexNum::operator*=(ComplexNum &other) {
            int hold1 = real * other.getRealPart();
            int hold2 = real * other.getImagPart();
            int hold3 = imag * other.getRealPart();
            int hold4 = imag * other.getImagPart() * -1;
            real = hold1 + hold4;
            imag = hold2 + hold3;
        }

        std::ostream& operator<<(std::ostream &os , const ComplexNum &cm) {
            if (cm.getRealPart() != 0 && cm.getImagPart() != 0) {
                os << cm.getRealPart();
                if (cm.getImagPart() < 0) {
                    os << "-";
                } else if (cm.getImagPart() > 0 ) {
                    os << "+";
                }
                os << cm.getImagPart() << "i";
            } else if (cm.getRealPart() != 0 && cm.getImagPart() == 0) {
                os << cm.getRealPart();
            } else if (cm.getRealPart() == 0 && cm.getImagPart() != 0) {
                os << cm.getImagPart() << "i";
            } else {
                os << 0;
            }
            return os;
        }

        ///////////////////////
        /// End of Classes ///
        /////////////////////

        /// Functions ///

        /////////////////////////
        /// End of Functions ///
        ///////////////////////

    } // end of math

} // End of Y