#include "src/include/Core.hpp"

int main(int argc , char* argv[]) {
    
    Y::math::YMEngine* engine = new Y::math::YMEngine;
    engine->m_menu();

    delete engine;
    return 0;
}


