#ifndef AUDIO_INPUT_H
#define AUDIO_INPUT_H
#include<vector>

class AudioInput {
    public:
        virtual ~AudioInput() {}

        virtual bool Initialize() = 0;
        virtual bool Start() = 0;
        virtual bool Stop() = 0;
        virtual std::vector<float> ReadAudio() = 0;
        virtual bool Cleanup() = 0;
};

#endif
