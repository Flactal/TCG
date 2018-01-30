#include "Effect.hpp"

namespace TCG {
    using namespace std;

    //CONSTRUCTORS
    Effect::Effect() : description() {}
    Effect::Effect(Effect const & effect) : description(effect.description) {}

    //SETTERS
    void Effect::setDescription(string description) {
        this->description = description;
    }

    //GETTERS
    string Effect::getDescription() const {
        return description;
    }

}
