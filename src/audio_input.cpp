#ifndef AUDIO_INPUT_H
#define AUDIO_INPUT_H
#include<vector>

class AudioInput {
    virtual ~AudioInput() {}

    virtual bool Initialize() = 0;
    virtual bool Start() = 0;
    virtual bool Stop() = 0;
    virtual std::vector<float> ReadAudio() = 0; 
    virtual void Cleanup() = 0;
};
#endif
