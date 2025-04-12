/*

    Copyright (c) 2025 Ultrasoft. All rights reserved.
    Unauthorized use, reproduction, or distribution is prohibited.

*/

#include <stdio.h>
#include <stdbool.h>

/* System Path */
#define PATH_MAX 512
#define PATH_MIN 1
#define BOOTLOAD[PATH_MAX] "(A):Bootloader/"
#define USERPATH[PATH_MAX] "(A):User/"
#define SYSTEM[PATH_MAX]   "(A):System/"
#define HERDER[PATH_MAX]   "(A):Herder/"
#define TERMINAL[PATH_MAX] "(A):Terminal/"

/* System Error */
#define ERROR_001 "System crash."
#define ERROR_002 "Critical system files are missing."
#define ERROR_003 "Vical."