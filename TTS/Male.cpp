#include "Male.h"
#include <iostream>

void Male::setSpeech() {
	if (SUCCEEDED(hr)) {
		std::cout << "Please enter Text:\n";

		std::cin.ignore(1, '\n');

		getline(std::wcin, input);

	}

	hr = pVoice->Speak(input.c_str(), 0, NULL);

}

void Male::outSpeech() {
	pVoice->Release();

	/* delete after outputting to speaker */
	pVoice = NULL;
	::CoUninitialize();
}

void Male::byeSpeech() {

}
