#include "common.h"

extern u8 gLifeCount;
extern u8 D_80165238;
extern s8 D_80165239;
extern s8 D_8016523A;
extern s8 D_8016523B;
extern s8 D_8016523C;
extern u8 D_8016523D;
extern u8 D_80165241;
extern s8 D_80165244;
extern s8 D_80165245;
extern s8 D_8016523F;
extern s8 D_80165240;

#pragma GLOBAL_ASM("asm/nonmatchings/code/76640/func_80084120.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/76640/func_800841E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/76640/func_8008424C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/76640/func_800842C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/76640/func_800843CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/76640/func_80084430.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/76640/func_80084BD8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/76640/func_80085424.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/76640/func_800857B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/76640/func_80085804.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/76640/func_80085884.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/76640/func_80085B34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/76640/func_80085D54.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/76640/func_80086AD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/76640/func_80086D50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/76640/func_80086E70.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/76640/func_80086ECC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/76640/func_80087694.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/76640/func_80087994.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/76640/func_80087B1C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/76640/func_80087C58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/76640/func_80087D70.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/76640/func_80087E14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/76640/func_80088094.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/76640/func_800880E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/76640/func_80088134.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/76640/func_80088184.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/76640/func_800881D4.s")

void func_80088248(s32 arg0) {
    if (arg0 > 0) {
        gLifeCount += arg0;
        if ((s32) gLifeCount >= 99) {
            gLifeCount = 99;
        }
    }
    else if (gLifeCount != 0) {
        gLifeCount += arg0;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/76640/func_800882C8.s")

void func_80088338(void) {
    gLifeCount = D_80165238;
    D_80165244 = D_80165239;
    D_80165245 = D_8016523A;
    D_8016523F = D_8016523B;
    D_80165240 = D_8016523C;
    D_80165241 = D_8016523D;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/76640/func_800883A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/76640/func_80088694.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/76640/func_8008884C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/76640/func_800889A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/76640/func_80088A88.s")
