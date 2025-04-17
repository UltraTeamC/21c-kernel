#ifndef VAR_H
#define VAR_H

#include "definition.h"
#include <stdbool.h>

typedef struct {
    int status_code;         // 系统状态码
    int error_code;         // 错误代码
    char error_message[256]; // 错误信息
    bool is_initialized;    // 系统是否已初始化
} SystemStatus;

extern SystemStatus system_status;

/* 系统路径常量 */
extern const char BOOTLOAD[PATH_MAX];      // 添加分号
extern const char USERPATH[PATH_MAX];      // 添加分号
extern const char SYSTEM[PATH_MAX];        // 添加分号
extern const char HEADER[PATH_MAX];        // 添加分号
extern const char TERMINAL[PATH_MAX];      // 添加分号

/* 系统状态常量 */
#define SYSTEM_VERSION "0.0.1"            // 添加系统版本定义

#endif // VAR_H