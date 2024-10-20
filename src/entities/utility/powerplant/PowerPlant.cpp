#include "PowerPlant.h"

PowerPlant::PowerPlant() {}
PowerPlant::~PowerPlant() {}

PowerPlant::PowerPlant(int electricity, int water, std::string symbol, int radius, int localEffect, int globalEffect, int width, int height, int revenue, Size size, int xPos, int yPos, int buildTime) : Utility(electricity, water, symbol, radius, localEffect, globalEffect, width, height, revenue, size, xPos, yPos, buildTime)
{
    setOutput(20); //TODO - change value
}

void PowerPlant::update()
{
    //TODO
}

Entity* PowerPlant::clone()
{
    Entity* e = new PowerPlant(electricityConsumption, waterConsumption, symbol, effectRadius, localEffectStrength, globalEffectStrength, width, height, revenue, size, xPosition, yPosition, state->getBuildTime());
    return e;
}