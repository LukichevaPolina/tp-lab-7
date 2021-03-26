//// Copyright 2021 Lukicheva Polina
#ifndef _COMMON_H_
#define _COMMON_H_

typedef size_t coord_t;

struct Pair
{
	coord_t x; // 0..M-1
	coord_t y; // 0..N-1
};

const size_t N = 20;
const size_t M = 50;
const size_t STONE_LIFE = 100;
const size_t PREY_LIFE = 20;
const size_t PREDATOR_LIFE = 15;

#endif
