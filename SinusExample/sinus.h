#ifndef SINUS_H
#define SINUS_H

class Sinus{
public:
    Sinus();
    ~Sinus();
    float getValue();
    void setAmplitude(float amplitude);
    void setFrequence(int frequence);
private:
    int index;
    float amplitude;
    int frequence;
};

#endif
