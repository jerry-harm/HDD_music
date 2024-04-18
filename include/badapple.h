#include "pitches.h"
#include "play.h"

float music1[][2] = {
    {NOTE_A4,0.5}, {NOTE_B4,0.5}, {NOTE_C5,0.5},{NOTE_D5,0.5},{NOTE_E5,1},{NOTE_A5,0.5},{NOTE_G5,0.5},
    {NOTE_E5,1},{NOTE_A4,1},{NOTE_E5,0.5},{NOTE_D5,0.5},{NOTE_C5,0.5},{NOTE_B4,0.5},
    {NOTE_A4,0.5}, {NOTE_B4,0.5}, {NOTE_C5,0.5},{NOTE_D5,0.5},{NOTE_E5,1},{NOTE_D5,0.5},{NOTE_C5,0.5}
    };

float music2[][2]={
    {NOTE_B4,0.5},{NOTE_A4,0.5}, {NOTE_B4,0.5},{NOTE_C5,0.5},{NOTE_B4,0.5},{NOTE_A4,0.5},{NOTE_GS5,0.5},{NOTE_B4,0.5}
};

float music3[][2]={
    {NOTE_B4,1},{NOTE_C5,1},{NOTE_D5,1},{NOTE_E5,1}
};

float music4[][2]={
    {NOTE_G5,0.5},{NOTE_A5,0.5},{NOTE_E5,0.5},{NOTE_D5,0.5},{NOTE_E5,1},{NOTE_D5,0.5},{NOTE_E5,0.5}
};

float music5[][2]={
    {NOTE_D5,0.5},{NOTE_C5,0.5},{NOTE_B4,0.5},{NOTE_G4,0.5},{NOTE_A4,1},{NOTE_G4,0.5},{NOTE_A4,0.5},
    {NOTE_B4,0.5},{NOTE_C5,0.5},{NOTE_D5,0.5},{NOTE_E5,0.5},{NOTE_A4,1},{NOTE_E5,0.5},{NOTE_G5,0.5}
};

float music6[][2]={
    {NOTE_G5,0.5},{NOTE_A5,0.5},{NOTE_E5,0.5},{NOTE_D5,0.5},{NOTE_E5,1},{NOTE_A5,0.5},{NOTE_C7,0.5},
    {NOTE_C6,0.5},{NOTE_B5,0.5},{NOTE_A5,0.5},{NOTE_G5,0.5},{NOTE_E5,1},{NOTE_D5,0.5},{NOTE_E5,0.5},
    {NOTE_D5,0.5},{NOTE_C5,0.5},{NOTE_B4,0.5},{NOTE_G4,0.5},{NOTE_A4,1},{NOTE_E5,0.5},{NOTE_G5,0.5},
};

void badapple(){
    play(music1,20);
    play(music2,8);
    play(music1,20);
    play(music3,4);
    play(music4,7);
    play(music4,7);
    play(music5,14);
    play(music4,7);
    play(music4,7);
    play(music5,14);
    play(music4,7);
    play(music4,7);
    play(music5,14);
    play(music4,7);
    play(music6,21);
}