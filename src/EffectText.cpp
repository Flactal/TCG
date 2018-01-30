#include "EffectText.hpp"

namespace TCG {
    using namespace std;

    //CONSTRUCTORS
    EffectText::EffectText() : CardTextArea(), effects(list<Effect>()) {}
    EffectText::EffectText(EffectText const & effectText) : CardTextArea(effectText), effects(list<Effect>()) {}

    //SETTERS
    void EffectText::setEffects(list<Effect> effects) {
        this->effects = effects;
    }

    //GETTERS
    list<Effect> EffectText::getEffects() const {
        return effects;
    }
}
