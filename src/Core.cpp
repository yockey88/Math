#include "../include/Core.hpp"


namespace Y {

    namespace math {

        /// Structs ///

        YMEngine::YMEngine() { 
            running = true;
        }

        void YMEngine::m_menu()  {
            while (running) {
                std::cout << "[MAIN MENU]" << std::endl;
                std::cout << "[S] -> Solve Equation" << std::endl;
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
                case 's':
                    runEqnSolver();
                break;

                case 'q':
                    std::cout << "[GOODBYE]" << std::endl;
                    running = false;
                break;

                default:
                    std::cout << "{!!!} | Invalid Input" << std::endl;
                break;
            }
        }

        void YMEngine::runEqnSolver() {
            std::string eqn;
            std::cout << "[ENTER EQN] | ";
            std::cin >> eqn; std::cin.ignore();
            auto [a , b , c , d , op1 , op2] = parseEqnLine(eqn);
            auto [posRt , negRt] = solveQuadratic(a , b , c , d , op1 , op2);
            std::cout << posRt << "," << negRt << std::endl;
            if (posRt != -1.0f && negRt != -1.0f) {
                std::cout << "[EQN] " << eqn << std::endl;
                std::cout << "[ROOTS OF EQN] {" << posRt << " , " << negRt << "}" << std::endl;
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