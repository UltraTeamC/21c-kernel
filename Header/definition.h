/*
    Copyright (c) 2025 Ultrasoft. All rights reserved.
    Unauthorized use, reproduction, or distribution is prohibited.
*/

#include <stdio.h>
#include <stdbool.h>

/* System Path */
#define PATH_MAX 512
#define PATH_MIN 1

/* System Error Codes */
// Memory related errors
#define ERROR_MEMORY_INIT    "内存初始化失败"
#define ERROR_MEMORY_ALLOC   "内存分配失败"
#define ERROR_MEMORY_ACCESS  "内存访问错误"

// CPU related errors
#define ERROR_CPU_FEATURE    "CPU特性检查失败"
#define ERROR_CPU_FREQUENCY  "CPU频率异常"
#define ERROR_CPU_TEMP       "CPU温度过高"

// Disk related errors
#define ERROR_DISK_READ      "磁盘读取失败"
#define ERROR_DISK_WRITE     "磁盘写入失败"
#define ERROR_DISK_SPACE     "磁盘空间不足"

/* System Status Codes */
#define STATUS_OK            0
#define STATUS_WARNING       1
#define STATUS_ERROR         2
#define STATUS_CRITICAL      3