//INCLUDES

#include "Card.hpp"

namespace TCG {
    using namespace std;

    //CONSTRUCTORS
    Card::Card() : name(), imgPath(), textArea(){}
    Card::Card(Card const & card) : name(card.name), imgPath(card.imgPath), textArea(card.textArea) {}

    //SETTERS
    void Card::setName(string name) {
        this->name = name;
    }

    void Card::setImgPath(string imgPath) {
        this->imgPath = imgPath;
    }

    void Card::setTextArea(CardTextArea textArea) {
        this->textArea = textArea;
    }

    //GETTERS
    string Card::getName() const {
        return name;
    }

    string Card::getImgPath() const {
        return imgPath;
    }

    CardTextArea Card::getTextArea() const {
        return textArea;
    }
}
