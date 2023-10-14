#include "audio_input.h"
#include "alsa_input.h"

class audio_layer {
    private:

}

int main() {
    AudioInput* audioInput = nullptr;
    audioInput = new ALSAInput();
    
    if(audioInput->Initialize()){
        audioInput->Start();
        audioInput->Stop();
        audioInput->Cleanup();
    }
    
    delete audioInput;
    return 0;
};
