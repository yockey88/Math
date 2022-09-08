#include "include/Core.hpp"

int main(int argc,char* argv[]) {
    
    std::unique_ptr<Y::math::YMEngine> mEngine = std::make_unique<Y::math::YMEngine>();
    mEngine->m_menu();

    return 0;
}


