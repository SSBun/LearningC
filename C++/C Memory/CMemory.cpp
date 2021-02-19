//
//  CMemory.c
//  C++
//
//  Created by caishilin on 2021/2/6.
//

#include "CMemory.hpp"
#include <iostream>

// MARK: - Register

/// Registers are the storage devices in the CPU, it's very small and very fast.
/// But it's storage capacity is limited. In a 32-bit CPU, each register can only save 32 bits (4 bytes) data.
/// In a 64-bit CPU, each register can save 64 bits (8 bytes) data.
/// To accomplish complex functions, the modern CPUs are built with dozens or even hundreds of registers.
/// Embedded systems have single function, so the number of registers is small.

// MARK: - Virtual Memory

/// Example:
int globalA = 100, globalB = 200;

void CMemory::checkAddress() {
    printf("&globalA = %#X, &globalB = %#X\n", &globalA, &globalB);
    // output: &globalA = 0X80AC, &globalB = 0X80B0
}

/// Let's think about it, the variables `globalA` and `globalB` are global variables, so them addresses were generated at compile time and then
/// they can't be modified.
/// This will cause some conflicts if there are multiple applications using the same memory address, so what sould we do ?
/// Don't worry, each applications have their own virtual memory address space, the virtual address will be translated to physical address by CPU at running time.
///
///          ┌─────────────────────────────┐
///          │                             │
///          │       Virtual Address       │
///          │                             │
///          └─────────────────────────────┘
///                         │
///                         ▼
///          ┌─────────────────────────────┐
///          │                             │
///          │  Memory Mapping Mechanism   │
///          │                             │
///          └─────────────────────────────┘
///                         │
///                         ▼
///          ┌─────────────────────────────┐
///          │                             │
///          │      Physical Address       │
///          │                             │
///          └─────────────────────────────┘

///  Data Bus & Address Bus
///  ======================

/// Data bus and main fps are the most important performance parameters of a CPU.


