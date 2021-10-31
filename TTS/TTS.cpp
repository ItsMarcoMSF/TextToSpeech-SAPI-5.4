// TTS.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include "Basic.h"
#include "Female.h"
#include "Male.h"

#include <iostream>

int main() {
    
    Basic* tts1 = NULL;

    int choice;

    tts1 = new Male;

    do {
        std::cout << "Enter 1 to output in Male Voice, 2 to output in Female Voice, 3 to Exit program!\n";
        std::cin >> choice;

        switch (choice) {
        case 1:
            tts1 = new Male;
            tts1->setSpeech();
            tts1->outSpeech();

            delete tts1;
            break;

        case 2:
            tts1 = new Female;
            tts1->setSpeech();
            tts1->outSpeech();

            delete tts1;
            break;

        case 3:
            tts1 = new Female;
            tts1->byeSpeech();
            tts1->outSpeech();

            delete tts1;
            break;

        default:
            std::cout << "Please Enter a Valid Number (1, 2, 3)!\n";
            break;
        }

    } while (choice != 3);


    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu


