#ifndef NAMEDEFFECT_HPP_INCLUDED
#define NAMEDEFFECT_HPP_INCLUDED

#include <string>

#include "Effect.hpp"

namespace TCG {
    class NamedEffect : public Effect{
    private :
        std::string name;
    protected :

    public :
        //CONSTRUCTORS
        NamedEffect();
        NamedEffect(NamedEffect const & namedEffect);

        //SETTERS
        void setName(std::string name);

        //GETTERS
        std::string getName() const;
    };
}

#endif // NAMEDEFFECT_HPP_INCLUDED
