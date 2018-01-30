#ifndef EFFECTTEXT_HPP_INCLUDED
#define EFFECTTEXT_HPP_INCLUDED

#include <list>

#include "CardTextArea.hpp"
#include "Effect.hpp"

namespace TCG {
    class EffectText : public CardTextArea {
    private :
        std::list<Effect> effects;
    protected :

    public :
        //CONSTRUCTORS
        EffectText();
        EffectText(EffectText const & effectText);

        //SETTERS
        void setEffects(std::list<Effect> effects);

        //GETTERS
        std::list<Effect> getEffects() const;
    };
}

#endif // EFFECTTEXT_HPP_INCLUDED
