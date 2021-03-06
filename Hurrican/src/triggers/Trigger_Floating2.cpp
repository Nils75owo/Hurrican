// --------------------------------------------------------------------------------------
// Die mittlere schwebende Plattform
//
// Geht ein Stück nach unten, wenn der Hurri draufhopst
// Je schneller die Fallgeschwindigkeit beim aufkommen, desto weiter geht sie nach unten
// --------------------------------------------------------------------------------------

#include "Trigger_Floating2.hpp"
#include "stdafx.hpp"

// --------------------------------------------------------------------------------------
// Konstruktor
// --------------------------------------------------------------------------------------

GegnerFloating2::GegnerFloating2(int Wert1, int Wert2, bool Light) {
    Handlung = GEGNER::LAUFEN;
    BlickRichtung = DirectionEnum::RECHTS;
    Energy = 100;
    Value1 = Wert1;
    Value2 = Wert2;
    if (Value1 == 0)
        Value1 = 16;
    ChangeLight = Light;
    Destroyable = false;
    AnimCount = 0.0f;
    playeron = false;
}

// --------------------------------------------------------------------------------------
// Floating2 KI
// --------------------------------------------------------------------------------------

void GegnerFloating2::DoKI() {
    BlickRichtung = DirectionEnum::RECHTS;

    playeron = false;

    for (int p = 0; p < NUMPLAYERS; p++)
        if (Player[p].AufPlattform == this)
            playeron = true;

    PlattformTest(GegnerRect[GegnerArt]);

    // Spieler in diesem Frame auf die Plattform gehopst ?
    //
    for (int p = 0; p < NUMPLAYERS; p++)
        if (Player[p].AufPlattform == this && playeron == false) {
            playeron = true;

            // Plattform dopst kurz runter
            //
            if (ySpeed == 0.0f) {
                Value2 = static_cast<int>(yPos);
                ySpeed = static_cast<float>(Player[p].yspeed) / 3.0f;
                yAcc = -3.0f;
            }
        }

    // Plattform wieder an Ausgangspos ?
    //
    if (ySpeed < 0.0f && static_cast<int>(yPos) <= Value2) {
        ySpeed = 0.0f;
        yAcc = 0.0f;
        yPos = static_cast<float>(Value2);
    }

    // Counter für Partikel runterzählen
    //
    AnimCount -= Timer.sync(1.0f);

    // Partikel erzeugen und counter wieder hochsetzen
    //
    if (AnimCount <= 0.0f) {
        AnimCount = 0.15f;
        PartikelSystem.PushPartikel(xPos + 5.0f, yPos + 9.0f, FLOATSMOKE);
        PartikelSystem.PushPartikel(xPos + 92.0f, yPos + 9.0f, FLOATSMOKE);

        PartikelSystem.PushPartikel(xPos + 45.0f, yPos + 12.0f, FLOATSMOKE);
        PartikelSystem.PushPartikel(xPos + 49.0f, yPos + 12.0f, FLOATSMOKE);
    }
}

// --------------------------------------------------------------------------------------
// Floating2 explodiert (nicht)
// --------------------------------------------------------------------------------------

void GegnerFloating2::GegnerExplode() {}
