#ifndef _GEGNER_STARSMALL_HPP_
#define _GEGNER_STARSMALL_HPP_

#include "GegnerClass.hpp"
#include "Gegner_Stuff.hpp"

class GegnerStarSmall : public GegnerClass {
  public:
    GegnerStarSmall(int Wert1,
                    int Wert2,  // Konstruktor
                    bool Light);
    void GegnerExplode() override;  // Gegner explodiert
    void DoKI() override;           // Gegner individuell mit seiner eigenen kleinen KI bewegen
};

#endif
