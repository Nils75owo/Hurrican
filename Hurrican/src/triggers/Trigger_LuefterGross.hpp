#ifndef _TRIGGER_LUEFTERGROSS_HPP_
#define _TRIGGER_LUEFTERGROSS_HPP_

#include "GegnerClass.hpp"
#include "enemies/Gegner_Stuff.hpp"

class GegnerLuefterGross : public GegnerClass {
  public:
    GegnerLuefterGross(int Wert1,
                       int Wert2,  // Konstruktor
                       bool Light);
    void GegnerExplode() override;  // Gegner explodiert
    void DoKI() override;           // Gegner individuell mit seiner
    // eigenen kleinen KI bewegen
    void DoDraw() override;
};

#endif
