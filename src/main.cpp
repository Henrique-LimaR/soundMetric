#include<iostream>

#include "audio_input.h"
#include "alsa_input.h"

using namespace std;
int main() {
    ALSAInput audioInput;

    if(!audioInput.Initialize()){
        std::cerr << "failed to initialize audio input" << endl; 
        return 1;
    }

    if(!audioInput.Start()){ 
        std::cerr << "failed to start capturing audio" << endl; 
        return 1;
    }

    audioInput.Stop();
    audioInput.Cleanup();
    return 0;
};
