#include "include/Core.hpp"


namespace Y {

    namespace math {

        /// Structs ///

        YMEngine::YMEngine() { 
            running = true;
        }

        void YMEngine::m_menu() {
            while (running) {
                std::cout << "[MAIN MENU]" << std::endl;
                std::cout << "[Q] -> Quaternion"<< std::endl;
                std::cout << "[L] -> Leave"<< std::endl;
                std::cout << "[$$]>>";
                char input = std::cin.get(); std::cin.ignore();
                if ((int)input ) {
                    std::cout << "{!!!} | Invalid Input" << std::endl;
                    return;
                }
                m_menuOptions(input);
            }
        }

        void YMEngine::m_menuOptions(auto &input) {
            switch(tolower(input)) {

                case 'q':
                    quat_menu();
                break;

                case 'l':
                    std::cout << "[GOODBYE]" << std::endl;
                    running = false;
                break;

                default:
                    std::cout << "{!!!} | Invalid Input" << std::endl;
                break;
            }
        }

        void YMEngine::quat_menu() {
            bool running = true;
            while (running) {
                std::cout << "[MAIN MENU]" << std::endl;
                std::cout << "[A] -> Add"<< std::endl;
                std::cout << "[S] -> Subtract"<< std::endl;
                std::cout << "[P] -> Raise to a power" << std::endl;
                std::cout << "[M] -> Multiply"<< std::endl;
                std::cout << "[L] -> Leave"<< std::endl;
                std::cout << "[$$]>>";
                char input;
                std::cin >> input;
                std::cout << std::endl;
                switch (tolower(input)){
                    case 'm':
                    break;

                    case 'l':
                        running = false;
                    break;

                    default:
                        std::cout << "{!!!} | Invalid Input" << std::endl;
                    break;
                }
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