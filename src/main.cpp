#include <iostream>
#include "Card.hpp"

using namespace std;
using namespace TCG;

int main()
{
    Card firstCard;

    firstCard = Card();
    firstCard.setName("PremiereCarte");
    firstCard.setImgPath("/Img/PremiereCarte.jpg");

    CardTextArea cardTextArea = CardTextArea();
    cardTextArea.setText("Some text to display.");

    Effect haste = Effect();
    haste.setDescription("Peut attaquer lors du tour durant lequel il a ete invoque.");
    Effect divineShield = Effect();
    divineShield.setDescription("Bloque la première source de degat.");
    Effect battleCry = Effect();
    battleCry.setDescription("Do Something when played.");

    list<Effect> effects = list<Effect>();
    effects.push_back(haste);
    effects.push_back(divineShield);
    effects.push_back(battleCry);

    EffectText effectText = EffectText();
    effectText.setEffects(effects);

    firstCard.setTextArea(effectText);

    cout << firstCard.getName() << endl;
    cout << "Hello world!" << endl;
    return 0;
}
