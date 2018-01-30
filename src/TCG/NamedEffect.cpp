#include "NamedEffect.hpp"

namespace TCG {
    using namespace std;

    //CONSTRUCTORS
    NamedEffect::NamedEffect() : Effect(), name() {}
    NamedEffect::NamedEffect(NamedEffect const & namedEffect) : Effect(namedEffect), name(namedEffect.name) {}

    //SETTERS
    void NamedEffect::setName(string name) {
        this->name = name;
    }

    //GETTERS
    string NamedEffect::getName() const {
        return name;
    }
}
