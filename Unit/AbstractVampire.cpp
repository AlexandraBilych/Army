#include "AbstractVampire.h"

#define DEBUG 1

AbstractVampire::AbstractVampire() {
    if ( DEBUG ) {
        std::cout << "CONSTRUCTOR AbstractVampire" << std::endl;
    }
    isVampire = false;
}

bool AbstractVampire::getIsVampire() const {
    return isVampire;
}

void AbstractVampire::setIsVampire(bool value) {
    isVampire = value;
}
