#include <stdio.h>

#define PATH_MAX  512
#define PATH_MIN  1
#define ERROR_001 "System crash."
#define ERROR_002 "Critical system files are missing."
#define ERROR_003 "Vical."

int main() {
    printf("Ultrasoft[0.0.1]");
    printf(ERROR_001)
    printf(ERROR_002)
    printf(ERROR_003)
    return 0;
}
// void System(data,path) {
//     // System Data:
//     float version = 0.11;
//     char  build[10] = "0.11.0"
//     // System Path: 
//     char System[PATH_MAX] = "[a]:User/Kernel/21c-Kernel/System";
//     char Terminal[PATH_MAX] = "[a]:User/Kernel/21c-Kernel/Terminal";
//     // System
//     return 0;
// }