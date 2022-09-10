#include "include/Quaternion.hpp"
using namespace Y::math;

namespace Y {

    namespace math {

        // structs //

        /////////////

        // classes //

        Quaternion::Quaternion() {
            real = 0;
            i = 0;
            j = 0;
            k = 0;
            vecPart.x = 0;
            vecPart.y = 0;
            vecPart.z = 0;
        }

        Quaternion::Quaternion(int real , int i , int j , int k) {
            this->real = real;
            this->i = i;
            this->j = j;
            this->k = k;
            vecPart.x = i;
            vecPart.y = j;
            vecPart.z = k;
        }

        Quaternion Quaternion::operator+(Quaternion &other) {
            Quaternion newQ;
            newQ.setReal(real + other.getReal());
            newQ.setI(i + other.getI());
            newQ.setJ(j + other.getJ());
            newQ.setK(k + other.getK());
            return newQ;
        }

        Quaternion Quaternion::operator-(Quaternion &other) {
            Quaternion newQ;
            newQ.setReal(real - other.getReal());
            newQ.setI(i - other.getI());
            newQ.setJ(j - other.getJ());
            newQ.setK(k - other.getK());
            return newQ;
        }

        Quaternion Quaternion::operator*(Quaternion &other) {
            Quaternion newQ;
            int hold1 , hold2 , hold3 , hold4 , hold5 , hold6 , hold7 , hold8 , hold9 , hold10 , hold11 , hold12 , hold13 , hold14 , hold15 , hold16; 
            hold1 = real * other.getReal();
            hold5 = i * other.getI() * (-1);
            hold9 = j * other.getJ() * (-1);
            hold13 = k * other.getK() * (-1);
            newQ.setReal(hold1 + hold5 + hold9 + hold13);
            hold2 = real * other.getI() ;
            hold6 = i * other.getReal();
            hold10 = j * other.getK();
            hold14 = k * other.getJ() * (-1);
            newQ.setI(hold2 + hold6 + hold10 + hold14);
            hold3 = real * other.getJ();
            hold7 = i * other.getK() * (-1);
            hold11 = j * other.getReal();
            hold15 = k * other.getI();
            newQ.setJ(hold3 + hold7 + hold11 + hold15);
            hold4 = real * other.getK();
            hold8 = i * other.getJ();
            hold12 = j * other.getI() * (-1);
            hold16 = k * other.getReal();
            newQ.setK(hold4 + hold8 + hold12 + hold16);
            return newQ;
        }

        void Quaternion::operator+=(Quaternion &other) {
            real += other.getReal();
            i += other.getI();
            j += other.getJ();
            k += other.getK();
            return;
        }

        void Quaternion::operator-=(Quaternion &other) {
            real -= other.getReal();
            i -= other.getI();
            j -= other.getJ();
            k -= other.getK();
            return;
        }

        void Quaternion::operator*=(Quaternion &other) {
            int hold1 , hold2 , hold3 , hold4 , hold5 , hold6 , hold7 , hold8 , hold9 , hold10 , hold11 , hold12 , hold13 , hold14 , hold15 , hold16; 
            hold1 = real * other.getReal();
            hold5 = i * other.getI() * (-1);
            hold9 = j * other.getJ() * (-1);
            hold13 = k * other.getK() * (-1);
            real = hold1 + hold5 + hold9 + hold13;
            hold2 = real * other.getI() ;
            hold6 = i * other.getReal();
            hold10 = j * other.getK();
            hold14 = k * other.getJ() * (-1);
            i = hold2 + hold6 + hold10 + hold14;
            hold3 = real * other.getJ();
            hold7 = i * other.getK() * (-1);
            hold11 = j * other.getReal();
            hold15 = k * other.getI();
            j = hold3 + hold7 + hold11 + hold15;
            hold4 = real * other.getK();
            hold8 = i * other.getJ();
            hold12 = j * other.getI() * (-1);
            hold16 = k * other.getReal();
            k = hold4 + hold8 + hold12 + hold16;
            return;
        }

        std::ostream& operator<<(std::ostream &os , const Quaternion &q) {
            if (q.getReal() != 0 && q.getI() != 0 && q.getJ() != 0 && q.getK() != 0) {
                os << q.getReal();
                if (q.getI() > 0) {
                    os << "+";
                }
                os  << q.getI() << "i";
                if (q.getJ() > 0) {
                    os << "+";
                }
                os  << q.getJ() << "j";
                if (q.getK() > 0) {
                    os << "+";
                }
                os  << q.getK() << "k";
            } else if (q.getReal() != 0 && q.getI() != 0 && q.getJ() != 0 && q.getK() == 0) {
                os << q.getReal();
                if (q.getI() > 0) {
                    os << "+";
                }
                os  << q.getI() << "i";
                if (q.getJ() > 0) {
                    os << "+";
                }
                os  << q.getJ() << "j";
            } else if (q.getReal() != 0 && q.getI() != 0 && q.getJ() == 0 && q.getK() != 0) {
                os << q.getReal();
                if (q.getI() > 0) {
                    os << "+";
                }
                os  << q.getI() << "i";
                if (q.getK() > 0) {
                    os << "+";
                }
                os  << q.getK() << "k";
            } else if (q.getReal() != 0 && q.getI() == 0 && q.getJ() != 0 && q.getK() != 0) {
                os << q.getReal();
                if (q.getJ() > 0) {
                    os << "+";
                }
                os  << q.getJ() << "j";
                if (q.getK() > 0) {
                    os << "+";
                }
                os  << q.getK() << "k";
            } else if (q.getReal() == 0 && q.getI() != 0 && q.getJ() != 0 && q.getK() != 0) {
                os << q.getI();
                os << "i";
                if (q.getJ() > 0) {
                    os << "+";
                }
                os  << q.getJ() << "j";
                if (q.getK() > 0) {
                    os << "+";
                }
                os  << q.getK() << "k";
            } else if (q.getReal() != 0 && q.getI() != 0 && q.getJ() == 0 && q.getK() == 0) {
                os << q.getReal();
                if (q.getI() > 0) {
                    os << "+";
                }
                os  << q.getI() << "i";
            } else if (q.getReal() != 0 && q.getI() == 0 && q.getJ() != 0 && q.getK() == 0) {
                os << q.getReal();
                if (q.getJ() > 0) {
                    os << "+";
                }
                os  << q.getJ() << "j";
            } else if (q.getReal() == 0 && q.getI() != 0 && q.getJ() != 0 && q.getK() == 0) {
                os << q.getI();
                os << "i";
                if (q.getJ() > 0) {
                    os << "+";
                }
                os  << q.getJ() << "j";
            } else if (q.getReal() != 0 && q.getI() == 0 && q.getJ() == 0 && q.getK() != 0) {
                os << q.getReal();
                if (q.getK() > 0) {
                    os << "+";
                }
                os << q.getK() << "k";
            } else if (q.getReal() == 0 && q.getI() != 0 && q.getJ() == 0 && q.getK() != 0) {
                os << q.getI();
                os << "i";
                if (q.getK() > 0) {
                    os << "+";
                }
                os  << q.getK() << "k";
            } else if (q.getReal() == 0 && q.getI() == 0 && q.getJ() != 0 && q.getK() != 0) {
                os << q.getJ();
                os << "j";
                if (q.getK() > 0) {
                    os << "+";
                }
                os  << q.getK() << "k";
            } else if (q.getReal() != 0 && q.getI() == 0 && q.getJ() == 0 && q.getK() == 0) {
                os << q.getReal();
            } else if (q.getReal() == 0 && q.getI() != 0 && q.getJ() == 0 && q.getK() == 0) {
                os << q.getI();
                os << "i";
            }  else if (q.getReal() == 0 && q.getI() == 0 && q.getJ() != 0 && q.getK() == 0) {
                os << q.getJ();
                os << "j";
            } else if (q.getReal() == 0 && q.getI() == 0 && q.getJ() == 0 && q.getK() != 0) {
                os << q.getK();
                os << "k";
            }
            return os;
        }

        /////////////

        // functions //

        //////////////

    } // End of math

} // End of Y