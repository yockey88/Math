#include "src/include/Core.hpp"

int main(int argc , char* argv[]) {
    
    std::unique_ptr<Y::math::YMEngine> engine = std::make_unique<Y::math::YMEngine>();
    engine->m_menu();

    return 0;
}


