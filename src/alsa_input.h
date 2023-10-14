#ifndef ALSA_INPUT_H
#ifndef ALSA_INPUT_H
#include "audio_input.h"

class ALSAInput : public AudioInput {
    public:
        ALSAInput();
        ~ALSAInput();

        bool Initialize() override;
        bool Start() override;
        bool Stop() override;
        bool std::vector<float> ReadAudio() = 0;
        bool Cleanup() override;
    
    private:
};
