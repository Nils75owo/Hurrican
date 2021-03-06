#ifndef _GEGNER_DECKENTURM_HPP_
#define _GEGNER_DECKENTURM_HPP_

#include "GegnerClass.hpp"
#include "Gegner_Stuff.hpp"

class GegnerDeckenturm : public GegnerClass {
  private:
    float Winkel;

  public:
    GegnerDeckenturm(int Wert1,
                     int Wert2,  // Konstruktor
                     bool Light);
    void GegnerExplode() override;  // Gegner explodiert
    void DoKI() override;           // Gegner individuell mit seiner eigenen kleinen KI bewegen
};

#endif
