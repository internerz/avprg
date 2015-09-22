#include <math.h>
#include "sinus.h"

const float pi = 3.1415926f;

Sinus::Sinus()
: index(0)
, amplitude(0)
, frequence(0)
{}

Sinus::~Sinus(void)
{
}

float Sinus::getValue(){
    float value = amplitude * sin(2 * pi * index / frequence);
    index++;
    return value;
}

void Sinus::setAmplitude(float amplitude) {
    this->amplitude = amplitude;
}

void Sinus::setFrequence(int frequence) {
    this->frequence = frequence;
}
