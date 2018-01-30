#ifndef CARDTEXTAREA_HPP_INCLUDED
#define CARDTEXTAREA_HPP_INCLUDED

#include <string>

namespace TCG {
    class CardTextArea {
    private :
        std::string text;
    protected :

    public :
        //CONSTRUCTORS
        CardTextArea();
        CardTextArea(CardTextArea const & textArea);

        //SETTERS
        void setText(std::string text);

        //GETTERS
        std::string getText() const;
    };
}

#endif // CARDTEXTAREA_HPP_INCLUDED
