/*
 *  cjalgorithm.m
 *  Typing
 *
 *  Created by Chris Johnson and Michael Dickens.
 *
 */

#include <limits.h>
#include "algorithm.h"

int runCJAlgorithm(char *filename);

int64_t anneal(Keyboard *keybr);
int64_t improveLayout(int64_t evaluationToBeat, Keyboard *keybr);
int smartMutate(Keyboard *k, int numberOfSwaps);

