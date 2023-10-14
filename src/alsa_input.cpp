#ifndef ALSA_INPUT_H
#define ALSA_INPUT_H
#include "audio_input.h"

class ALSAInput : public AudioInput {
    private:
        ALSAInput();
        ~ALSAInput();

        bool Initialize() override; 
        bool Start() override;
        bool Stop() override;
        std::vector<float> ReadAudio() override;
        void Cleanup() override;

    // ALSA-specific memebers and functions
};
#endif
