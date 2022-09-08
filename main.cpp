#include "include/Core.hpp"

int main(int argc,char* argv[]) {
    
    // (x - 2)(x + 3)
    // (x^2 + x - 6)
    std::unique_ptr<Y::math::YMEngine> mEngine = std::make_unique<Y::math::YMEngine>();
    mEngine->m_menu();

    return 0;
}


