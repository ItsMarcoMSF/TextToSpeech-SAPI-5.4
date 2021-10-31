#include "Female.h"
#include <iostream>

void Female::setSpeech() {
	if (SUCCEEDED(hr)) {
		std::cout << "Please enter Text:\n";
		
		std::cin.ignore(1, '\n');

		getline(std::wcin, input);

	}

	hr = pVoice->Speak((L"<voice required='Gender = Female;'>" + input).c_str(), 0, NULL);

}

void Female::outSpeech() {
	pVoice->Release();

	/* delete after outputting to speaker */
	pVoice = NULL;
	::CoUninitialize();
}

void Female::byeSpeech() {
	if (SUCCEEDED(hr)) {
		hr = pVoice->Speak(L"<voice required='Gender = Female;'> Goodbye", 0, NULL);
	}
}