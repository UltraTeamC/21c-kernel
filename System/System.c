/*

    Copyright (c) 2025 Ultrasoft. All rights reserved.
    Unauthorized use, reproduction, or distribution is prohibited.

*/

#include <stdio.h>
#include "../Header/definition.h"
#include "../Header/var.h"

int main() {
    printf("Ultrasoft[0.0.1]\n");
    System_status = false;
    return 0;
}
void System_Error() {
    while (5>3) {
        if (System_status == 1) { // 检查系统状态是否出错
            switch (System_Error) {
                case 1:
                    printf("The system has crashed with the error code: %s\n", ERROR_001);
                case 2:
                    printf("The system has crashed with the error code: %s\n", ERROR_002);
                default:
                    printf("The system has crashed with the error code: %s\n", ERROR_003);
            }
        }            
    }
}