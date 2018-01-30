#ifndef CARD_HPP_INCLUDED
#define CARD_HPP_INCLUDED

#include <string>

#include "CardTextArea.hpp"

namespace TCG {
    class Card {
    private :
        std::string name;
        std::string imgPath;
        CardTextArea textArea;
    protected :

    public :
        //CONSTRUCTORS
        Card();
        Card(Card const & card);

        //SETTERS
        void setName(std::string name);
        void setImgPath(std::string imgPath);
        void setTextArea(CardTextArea textArea);

        //GETTERS
        std::string getName() const;
        std::string getImgPath() const;
        CardTextArea getTextArea() const;
    };
}

#endif // CARD_HPP_INCLUDED
