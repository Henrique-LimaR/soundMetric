#include <iostream>
#include <sndfile.h>

int main() {
    const char* filename = "PNS.wav"; // Replace with the path to your audio file

    // Initialize the Libsndfile pointers and the SF_INFO structure.
    SNDFILE* sndfile;
    SF_INFO sfinfo;

    // Open the audio file for reading.
    sndfile = sf_open(filename, SFM_READ, &sfinfo);

    if (!sndfile) {
        std::cerr << "Error: Unable to open the audio file." << std::endl;
        return 1;
    }

    // Display some information about the audio file.
    std::cout << "File Format: " << sfinfo.format << std::endl;
    std::cout << "Sample Rate: " << sfinfo.samplerate << " Hz" << std::endl;
    std::cout << "Channels: " << sfinfo.channels << std::endl;
    std::cout << "Frames (Total Samples): " << sfinfo.frames << std::endl;

    // Read and process the audio data (example: print the first 10 samples).
    const int numSamplesToRead = 10;
    float audioData[numSamplesToRead];

    sf_count_t bytesRead = sf_readf_float(sndfile, audioData, numSamplesToRead);

    if (bytesRead < numSamplesToRead) {
        std::cerr << "Error or end of file reached." << std::endl;
        return 1;
    }

    // Print the first 10 samples.
    std::cout << "First " << numSamplesToRead << " samples: ";
    for (int i = 0; i < numSamplesToRead; ++i) {
        std::cout << audioData[i] << " ";
    }
    std::cout << std::endl;

    // Close the audio file.
    sf_close(sndfile);

    return 0;
};
