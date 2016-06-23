#pragma once

#include "cpu/cpu.h"
#include "video/screen.h"
#include "video/video.h"

class Gameboy {
public:
    Gameboy(Screen& inScreen, Cartridge cartridge);

    void run();

private:
    Screen& screen;
    MMU mmu;
    CPU cpu;
    Video video;
};
