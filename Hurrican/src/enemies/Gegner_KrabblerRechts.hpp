#ifndef _GEGNER_KRABBLERRECHTS_HPP_
#define _GEGNER_KRABBLERRECHTS_HPP_

#include "GegnerClass.hpp"
#include "enemies/Gegner_Stuff.hpp"

class GegnerKrabblerRechts : public GegnerClass {
  private:
    float ShotDelay;  // Schussverzögerung

  public:
    GegnerKrabblerRechts(int Wert1,
                         int Wert2,  // Konstruktor
                         bool Light);
    void GegnerExplode() override;  // Gegner explodiert
    void DoKI() override;           // Gegner individuell mit seiner eigenen kleinen KI bewegen
};

#endif
