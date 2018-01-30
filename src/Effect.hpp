#ifndef EFFECT_HPP_INCLUDED
#define EFFECT_HPP_INCLUDED

#include <string>

namespace TCG {
    class Effect {
    private :
        std::string description;
    protected :

    public :
        //CONSTRUCTORS
        Effect();
        Effect(Effect const & effect);

        //SETTERS
        void setDescription(std::string description);

        //GETTERS
        std::string getDescription() const;

    };
}

#endif // EFFECT_HPP_INCLUDED
