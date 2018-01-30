#include "CardTextArea.hpp"

namespace TCG {
    using namespace std;

    //CONSTRUCTORS
    CardTextArea::CardTextArea() : text() {}
    CardTextArea::CardTextArea(CardTextArea const & textArea) : text(textArea.text) {}

    //SETTERS
    void CardTextArea::setText(string text) {
        this->text = text;
    }

    //GETTERS
    string CardTextArea::getText() const {
        return text;
    }
}
