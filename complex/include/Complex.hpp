#ifndef COMPLEX_HPP
#define COMPLEX_HPP

#include "../../include/Core.hpp"

#include<fstream>

namespace Y {

    namespace math {

        /// Structs ///

        ///////////////////////
        /// End of Structs ///
        /////////////////////

        /// Classes ///

        class ComplexNum {
            int real , imag;

            public:
                ComplexNum();
                ComplexNum(int a , int b);

                ComplexNum operator+(ComplexNum &other);
                ComplexNum operator-(ComplexNum &other);
                ComplexNum operator*(ComplexNum &other);
                void operator+=(ComplexNum &other);
                void operator-=(ComplexNum &other);
                void operator*=(ComplexNum &other);
                friend std::ostream& operator<<(std::ostream &os , const ComplexNum &cm);

                inline void setReal(int real) { this->real = real; }
                inline void setImag(int imag) { this->imag = imag; }

                inline int getRealPart() const { return real; }
                inline int getImagPart() const { return imag; }
        };

        ///////////////////////
        /// End of Classes ///
        /////////////////////



        /// Functions ///

        /////////////////////////
        /// End of Functions ///
        ///////////////////////

    } // end of math

} // End of Y

#endif /* Complex.hpp */