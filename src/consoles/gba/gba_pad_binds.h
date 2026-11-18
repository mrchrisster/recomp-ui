#pragma once
#include "pad_binds.h"
static const char* const kGbaPadKeys[] = {
    "up", "down", "left", "right", "a", "b", "l", "r", "start", "select"
};
static const char* const kGbaPadDefaults[] = {
    "dpup", "dpdown", "dpleft", "dpright", "a", "b",
    "leftshoulder", "rightshoulder", "start", "back"
};
static const RuiPadSpec kGbaPadSpec = {
    kGbaPadKeys, kGbaPadDefaults, 10, 4, 15, 0, NULL, NULL, 0
};
