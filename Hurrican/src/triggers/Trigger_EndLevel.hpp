#ifndef _TRIGGER_ENDLEVEL_HPP_
#define _TRIGGER_ENDLEVEL_HPP_

#include "GegnerClass.hpp"
#include "enemies/Gegner_Stuff.hpp"

class GegnerEndLevel : public GegnerClass {
  public:
    GegnerEndLevel(int Wert1,
                   int Wert2,  // Konstruktor
                   bool Light);
    void GegnerExplode() override;  // Gegner explodiert
    void DoKI() override;           // Gegner individuell mit seiner
    // eigenen kleinen KI bewegen
};

#endif
