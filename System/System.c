#include <stdio.h>
#include <stdbool.h>
#include "../Header/definition.h"
#include "../Header/var.h"

bool check_memory() {
    // 内存检查逻辑
    printf("[CHECK] Memory check...");
    // 这里添加实际的内存检查代码
    return true;
}

bool check_cpu() {
    // CPU检查逻辑
    printf("[CHECK] CPU check...");
    // 这里添加实际的CPU检查代码
    return true;
}

bool check_disk() {
    // 磁盘检查逻辑
    printf("[CHECK] Disk check...");
    // 这里添加实际的磁盘检查代码
    return true;
}

void system_post() {
    printf("Starting system POST (Power-On Self-Test)\n");
    
    bool tests_passed = true;
    
    // 执行各项检查
    if (!check_memory()) {
        printf("FAILED\n");
        System_status = 1;
        System_Error = 1;
        tests_passed = false;
    } else {
        printf("OK\n");
    }
    
    if (!check_cpu()) {
        printf("FAILED\n");
        System_status = 1;
        System_Error = 2;
        tests_passed = false;
    } else {
        printf("OK\n");
    }
    
    if (!check_disk()) {
        printf("FAILED\n");
        System_status = 1;
        System_Error = 3;
        tests_passed = false;
    } else {
        printf("OK\n");
    }
    
    if (tests_passed) {
        printf("All system checks passed. Starting system...\n");
        System_status = 0;
    } else {
        printf("System checks failed. Entering error state...\n");
        System_Error();
    }
}

int main() {
    printf("Ultrasoft[0.0.1]\n");
    system_post();  // 执行开机自检
    return 0;
}