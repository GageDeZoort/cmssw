#include "L1Trigger/CSCTriggerPrimitives/interface/CSCPatternBank.h"

const int CSCPatternBank::alct_pattern_envelope[CSCConstants::MAX_WIRES_IN_PATTERN] = {
    0, 0, 0, 1, 1, 2, 3, 3, 4, 4, 4, 5, 5, 5};

const int CSCPatternBank::alct_keywire_offset[2][CSCConstants::MAX_WIRES_IN_PATTERN] = {
    //Keywire offset for ME1 and ME2
    {-2, -1, 0, -1, 0, 0, 0, 1, 0, 1, 2, 0, 1, 2},

    //Keywire offset for ME3 and ME4
    {2, 1, 0, 1, 0, 0, 0, -1, 0, -1, -2, 0, -1, -2}};

const int CSCPatternBank::alct_pattern_mask_open[CSCConstants::NUM_ALCT_PATTERNS][CSCConstants::MAX_WIRES_IN_PATTERN] = {
    // Accelerator pattern
    // For beam-halo muons or displaced muons from long-lived particles
    {0, 0, 1, 0, 1, 1, 1, 0, 1, 0, 0, 1, 0, 0},

    // Collision pattern A
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},

    // Collision pattern B
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}};

const int CSCPatternBank::alct_pattern_mask_r1[CSCConstants::NUM_ALCT_PATTERNS][CSCConstants::MAX_WIRES_IN_PATTERN] = {
    // Accelerator pattern
    {0, 0, 1, 0, 1, 1, 1, 0, 1, 0, 0, 1, 0, 0},

    // Collision pattern A
    {0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 1, 1, 0},

    // Collision pattern B
    {0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 1, 1, 0}};

const int CSCPatternBank::clct_pattern_offset[CSCConstants::MAX_HALFSTRIPS_IN_PATTERN] = {
    -5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5,  -2, -1, 0,  1,  2, 0, -2, -1, 0, 1,
    2,  -4, -3, -2, -1, 0, 1, 2, 3, 4, -5, -4, -3, -2, -1, 0, 1, 2,  3,  4, 5};

const int CSCPatternBank::clct_pattern[CSCConstants::NUM_CLCT_PATTERNS][CSCConstants::MAX_HALFSTRIPS_IN_PATTERN + 2] = {
    {999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999,
     999,  // pid=0: no pattern found
     999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999,
     999, 999, 999, 999, 999, 999, 999, 999, 999, -1,  0},
    //-------------------------------------------------------------
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1,
     2,  // pid=1: layer-OR trigger
     3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, -1, 11},
    //-------------------------------------------------------------
    {999, 999, 999, 999, 999, 999, 999, 999, 0,   0,   0,   999, 999, 999, 1, 1,
     2,  // pid=2: right-bending (large)
     3,   3,   3,   999, 999, 4,   4,   4,   999, 999, 999, 999, 999, 999, 5, 5,
     5,   999, 999, 999, 999, 999, 999, 999, 999, 0,   11},
    //-------------------------------------------------------------
    {0,   0,   0,   999, 999, 999, 999, 999, 999, 999, 999, 1, 1, 999, 999, 999,
     2,  // pid=3: left-bending (large)
     999, 999, 3,   3,   3,   999, 999, 999, 999, 999, 999, 4, 4, 4,   999, 999,
     999, 999, 999, 999, 999, 999, 5,   5,   5,   1,   11},
    //-------------------------------------------------------------
    {999, 999, 999, 999, 999, 999, 999, 0,   0,   0,   999, 999, 999, 999, 1,   1,
     2,  // pid=4: right-bending (medium)
     3,   3,   999, 999, 999, 4,   4,   4,   999, 999, 999, 999, 999, 999, 999, 5,
     5,   5,   999, 999, 999, 999, 999, 999, 999, 0,   9},
    //-------------------------------------------------------------
    {999, 0,   0,   0,   999, 999, 999, 999, 999, 999, 999, 1, 1, 999, 999, 999,
     2,  // pid=5: left-bending (medium)
     999, 999, 999, 3,   3,   999, 999, 999, 999, 999, 999, 4, 4, 4,   999, 999,
     999, 999, 999, 999, 999, 5,   5,   5,   999, 1,   9},
    //-------------------------------------------------------------
    {999, 999, 999, 999, 999, 999, 0,   0,   0,   999, 999, 999, 999, 1,   1,   999,
     2,  // pid=6: right-bending (medium)
     999, 3,   3,   999, 999, 999, 999, 4,   4,   999, 999, 999, 999, 999, 999, 999,
     5,   5,   5,   999, 999, 999, 999, 999, 999, 0,   7},
    //-------------------------------------------------------------
    {999, 999, 0,   0,   0,   999, 999, 999, 999, 999, 999, 999, 1,   1,   999, 999,
     2,  // pid=7: left-bending (medium)
     999, 999, 3,   3,   999, 999, 999, 999, 999, 999, 4,   4,   999, 999, 999, 999,
     999, 999, 999, 999, 5,   5,   5,   999, 999, 1,   7},
    //-------------------------------------------------------------
    {999, 999, 999, 999, 999, 0,   0,   0,   999, 999, 999, 999, 999, 1,   1,   999,
     2,  // pid=8: right-bending (small)
     999, 3,   3,   999, 999, 999, 999, 4,   4,   4,   999, 999, 999, 999, 999, 999,
     999, 5,   5,   5,   999, 999, 999, 999, 999, 0,   5},
    //-------------------------------------------------------------
    {999, 999, 999, 0, 0,   0,   999, 999, 999, 999, 999, 999, 1,   1,   999, 999,
     2,  // pid=9: left-bending (small)
     999, 999, 3,   3, 999, 999, 999, 999, 999, 4,   4,   4,   999, 999, 999, 999,
     999, 999, 999, 5, 5,   5,   999, 999, 999, 1,   5},
    //-------------------------------------------------------------
    {999, 999, 999, 999, 0,   0,   0,   999, 999, 999, 999, 999, 999, 1,   999, 999,
     2,  // pid=A: straight-through
     999, 999, 3,   999, 999, 999, 999, 999, 4,   4,   4,   999, 999, 999, 999, 999,
     999, 999, 5,   5,   5,   999, 999, 999, 999, 0,   3}
    // pid's=B-F are not yet defined
};

const CSCPatternBank::CLCTPatterns CSCPatternBank::clct_pattern_run3_ = {
    // pid 0
    {
        {0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1},
        {0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0},
        {0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0},
        {0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0},
        {0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0},
        {1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11},
    },
    // pid 1
    {
        {1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 11},
    },
    // pid 2
    {
        {0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0},
        {0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0},
        {0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0},
        {0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0},
        {0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0},
        {0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 7},
    },
    // pid 3
    {
        {0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0},
        {0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 7},
    },
    // pid 4
    {{0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0},
     {0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0},
     {0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0},
     {0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0},
     {0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0},
     {0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 3}}};
