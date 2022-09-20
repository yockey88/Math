#ifndef CORE_HPP
#define CORE_HPP

#include "../../complex/include/Complex.hpp"
#include "../../complex/include/Quaternion.hpp"

#include<string>
#include<iostream>
#include<iomanip>
#include<cmath>
#include<algorithm>
#include<memory>
#include<vector>
#include<fstream>
#include<utility>
#include<cassert>

namespace Y {

    namespace math {

        /// Structs ///

        struct YMEngine {
            YMEngine();

            bool running;

            void m_menu();
            void m_menuOptions(auto &input);
            void quat_menu();
        };

        ///////////////////////
        /// End of Structs ///
        /////////////////////



        /// Classes ///

        ///////////////////////
        /// End of Classes ///
        /////////////////////



        /// Functions ///

        /////////////////////////
        /// End of Functions ///
        ///////////////////////

    } // End of math

} // End of Y

#endif /* Core.hpp */