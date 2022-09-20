#include "include/Core.hpp"


namespace Y {

    namespace math {

        /// Structs ///

        YMEngine::YMEngine() { 
            running = true;
        }

        void YMEngine::m_menu()  {
            while (running) {
                std::cout << "[MAIN MENU]" << std::endl;
                std::cout << "[Q] -> Quit"<< std::endl;
                auto input = std::cin.get(); std::cin.ignore();
                if (typeid(input) == typeid(char)) {
                    std::cout << "{!!!} | Invalid Input" << std::endl;
                } else {
                    m_menuOptions(input);
                }
            }
        }

        void YMEngine::m_menuOptions(auto &input) {
            switch(tolower(input)) {
                case 'q':
                    std::cout << "[GOODBYE]" << std::endl;
                    running = false;
                break;

                default:
                    std::cout << "{!!!} | Invalid Input" << std::endl;
                break;
            }
        }

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