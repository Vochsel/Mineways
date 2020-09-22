/*
Copyright (c) 2014, Eric Haines
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

* Redistributions of source code must retain the above copyright notice, this
list of conditions and the following disclaimer.

* Redistributions in binary form must reproduce the above copyright notice,
this list of conditions and the following disclaimer in the documentation
and/or other materials provided with the distribution.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
THE POSSIBILITY OF SUCH DAMAGE.
*/

#pragma once

#include <stdlib.h>

void PrecomputeBiomeColors();
int ComputeBiomeColor(int biome, int elevation, int isGrass);
int BiomeSwampRiverColor(int color);


#define FOREST_BIOME				 4
#define SWAMPLAND_BIOME				 6
#define FOREST_HILLS_BIOME			18
#define BIRCH_FOREST_BIOME			27
#define BIRCH_FOREST_HILLS_BIOME	28
#define ROOFED_FOREST_BIOME			29

#define MESA_BIOME					37
#define MESA_PLATEAU_F_BIOME		38
#define MESA_PLATEAU_BIOME			39


typedef struct Biome {
    const char* name;
    float temperature;
    float rainfall;
    unsigned int grass;	// r,g,b, NOT multiplied by alpha
    unsigned int foliage;	// r,g,b, NOT multiplied by alpha
} Biome;

extern Biome gBiomes[];
