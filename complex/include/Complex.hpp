#ifndef COMPLEX_HPP
#define COMPLEX_HPP

#include "../../include/Core.hpp"

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
                ComplexNum(float a , float b);
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