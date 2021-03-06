#ifndef _TRIGGER_LUEFTERKLEIN_HPP_
#define _TRIGGER_LUEFTERKLEIN_HPP_

#include "GegnerClass.hpp"
#include "enemies/Gegner_Stuff.hpp"

class GegnerLuefterKlein : public GegnerClass {
  public:
    GegnerLuefterKlein(int Wert1,
                       int Wert2,  // Konstruktor
                       bool Light);
    void GegnerExplode() override;  // Gegner explodiert
    void DoKI() override;           // Gegner individuell mit seiner
    // eigenen kleinen KI bewegen
    void DoDraw() override;
};

#endif
