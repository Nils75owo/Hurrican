#ifndef _GEGNER_SCHLEIMALIEN_HPP_
#define _GEGNER_SCHLEIMALIEN_HPP_

#include "GegnerClass.hpp"
#include "enemies/Gegner_Stuff.hpp"

class GegnerSchleimAlien : public GegnerClass {
  private:
    float Size;

  public:
    GegnerSchleimAlien(int Wert1, int Wert2, bool Light);
    void GegnerExplode() override;  // Gegner explodiert
    void DoKI() override;           // Gegner individuell mit seiner eigenen kleinen KI bewegen
    void DoDraw() override;         // Gegner individuell rendern
};

#endif
