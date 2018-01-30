#ifndef HS_CARD_HPP_INCLUDED
#define HS_CARD_HPP_INCLUDED

#include "Rarity.hpp"

namespace TCG {
    class HS_Card : public Card {
    private :
        Rarity rarity;
        bool isGolden;
    protected :

    public :
        //SETTERS
        void setRarity(Rarity rarity);
        void setGolden(bool isGolden);

        //GETTERS
        Rarity getRarity() const;
        bool getGolden() const;

    };
}

#endif // HS_CARD_HPP_INCLUDED
