#include "../include/opcode.h"

/*
void excecute_opcode(byte OPCODE) {
    switch(OPCODE) {
        // Load/Store Operations
        case 0xA9: // LDA Immediate
        case 0xA5: // LDA Zero Page
        case 0xB5: // LDA Zero Page,X
            // Call function or execute code for LDA
            break;
        case 0xA2: // LDX Immediate
        case 0xA6: // LDX Zero Page
        case 0xB6: // LDX Zero Page,Y
            // Call function or execute code for LDX
            break;
        case 0xA0: // LDY Immediate
        case 0xA4: // LDY Zero Page
        case 0xB4: // LDY Zero Page,X
            // Call function or execute code for LDY
            break;
        case 0x85: // STA Zero Page
        case 0x95: // STA Zero Page,X
        case 0x8D: // STA Absolute
            // Call function or execute code for STA
            break;
        case 0x86: // STX Zero Page
        case 0x96: // STX Zero Page,Y
        case 0x8E: // STX Absolute
            // Call function or execute code for STX
            break;
        case 0x84: // STY Zero Page
        case 0x94: // STY Zero Page,X
        case 0x8C: // STY Absolute
            // Call function or execute code for STY
            break;

        // Register Transfers
        case 0xAA: // TAX
            // Call function or execute code for TAX
            break;
        case 0xA8: // TAY
            // Call function or execute code for TAY
            break;
        case 0x8A: // TXA
            // Call function or execute code for TXA
            break;
        case 0x98: // TYA
            // Call function or execute code for TYA
            break;

        // Stack Operations
        case 0x48: // PHA
            // Call function or execute code for PHA
            break;
        case 0x08: // PHP
            // Call function or execute code for PHP
            break;
        case 0x68: // PLA
            // Call function or execute code for PLA
            break;
        case 0x28: // PLP
            // Call function or execute code for PLP
            break;
        case 0xBA: // TSX
            // Call function or execute code for TSX
            break;
        case 0x9A: // TXS
            // Call function or execute code for TXS
            break;

        // Logical Operations
        case 0x29: // AND Immediate
        case 0x25: // AND Zero Page
        case 0x35: // AND Zero Page,X
            // Call function or execute code for AND
            break;
        case 0x09: // ORA Immediate
        case 0x05: // ORA Zero Page
        case 0x15: // ORA Zero Page,X
            // Call function or execute code for ORA
            break;
        case 0x49: // EOR Immediate
        case 0x45: // EOR Zero Page
        case 0x55: // EOR Zero Page,X
            // Call function or execute code for EOR
            break;
        case 0x24: // BIT Zero Page
        case 0x2C: // BIT Absolute
            // Call function or execute code for BIT
            break;

        // Arithmetic Operations
        case 0x69: // ADC Immediate
        case 0x65: // ADC Zero Page
        case 0x75: // ADC Zero Page,X
            // Call function or execute code for ADC
            break;
        case 0xE9: // SBC Immediate
        case 0xE5: // SBC Zero Page
        case 0xF5: // SBC Zero Page,X
            // Call function or execute code for SBC
            break;
        case 0xC9: // CMP Immediate
        case 0xC5: // CMP Zero Page
        case 0xD5: // CMP Zero Page,X
            // Call function or execute code for CMP
            break;
        case 0xE0: // CPX Immediate
        case 0xE4: // CPX Zero Page
        case 0xEC: // CPX Absolute
            // Call function or execute code for CPX
            break;
        case 0xC0: // CPY Immediate
        case 0xC4: // CPY Zero Page
        case 0xCC: // CPY Absolute
            // Call function or execute code for CPY
            break;

        // Increments & Decrements
        case 0xE6: // INC Zero Page
        case 0xF6: // INC Zero Page,X
        case 0xEE: // INC Absolute
            // Call function or execute code for INC
            break;
        case 0xE8: // INX
            // Call function or execute code for INX
            break;
        case 0xC8: // INY
            // Call function or execute code for INY
            break;
        case 0xC6: // DEC Zero Page
        case 0xD6: // DEC Zero Page,X
        case 0xCE: // DEC Absolute
            // Call function or execute code for DEC
            break;
        case 0xCA: // DEX
            // Call function or execute code for DEX
            break;
        case 0x88: // DEY
            // Call function or execute code for DEY
            break;

        // Shifts
        case 0x0A: // ASL Accumulator
        case 0x06: // ASL Zero Page
        case 0x16: // ASL Zero Page,X
            // Call function or execute code for ASL
            break;
        case 0x4A: // LSR Accumulator
        case 0x46: // LSR Zero Page
        case 0x56: // LSR Zero Page,X
            // Call function or execute code for LSR
            break;
        case 0x2A: // ROL Accumulator
        case 0x26: // ROL Zero Page
        case 0x36: // ROL Zero Page,X
            // Call function or execute code for ROL
            break;
        case 0x6A: // ROR Accumulator
        case 0x66: // ROR Zero Page
        case 0x76: // ROR Zero Page,X
            // Call function or execute code for ROR
            break;

        // Jumps & Calls
        case 0x4C: // JMP Absolute
        case 0x6C: // JMP Indirect
            // Call function or execute code for JMP
            break;
        case 0x20: // JSR Absolute
            // Call function or execute code for JSR
            break;
        case 0x60: // RTS
            // Call function or execute code for RTS
            break;
        case 0x40: // RTI
            // Call function or execute code for RTI
            break;

        // Branches
        case 0x90: // BCC
        case 0xB0: // BCS
        case 0xF0: // BEQ
        case 0xD0: // BNE
        case 0x30: // BMI
        case 0x10: // BPL
        case 0x50: // BVC
        case 0x70: // BVS
            // Call function or execute code for branch instructions
            break;

        // No default case needed as all possible opcodes are covered

        // Additional cases for other opcodes can be added here
    }
}
*/