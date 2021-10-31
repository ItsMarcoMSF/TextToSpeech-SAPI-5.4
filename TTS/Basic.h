#pragma once
#include <sapi.h>
#include <string>
#include <iostream>

class Basic
{
protected:
	int choice;
	ISpVoice* pVoice;
	HRESULT hr, a;
	std::wstring input;

public:
	Basic() {
		pVoice = NULL;

		input = L"";

		a = CoInitializeEx(NULL, COINIT_APARTMENTTHREADED);
		if (FAILED(a)) {
			std::cout << "ERROR: FAILED INIT\n";
			exit(1);
		}

		hr = CoCreateInstance(CLSID_SpVoice, NULL, CLSCTX_ALL, IID_ISpVoice, (void**)&pVoice);
	}

	virtual void setSpeech();

	virtual void byeSpeech();

	virtual void outSpeech();
	
	virtual ~Basic() {
		::CoUninitialize();
		delete pVoice;
	}

};

