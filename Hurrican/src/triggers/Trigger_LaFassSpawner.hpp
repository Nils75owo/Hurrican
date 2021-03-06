#ifndef _TRIGGER_LAFASSSPAWNER_HPP_
#define _TRIGGER_LAFASSSPAWNER_HPP_

#include "GegnerClass.hpp"
#include "enemies/Gegner_Stuff.hpp"

class GegnerLaFassSpawner : public GegnerClass {
  public:
    GegnerLaFassSpawner(int Wert1,
                        int Wert2,  // Konstruktor
                        bool Light);
    void GegnerExplode() override;  // Gegner explodiert
    void DoKI() override;           // Gegner individuell mit seiner
    // eigenen kleinen KI bewegen
};

#endif
