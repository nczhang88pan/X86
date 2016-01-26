cmd_arch/x86/purgatory/setup-x86_64.o := gcc -Wp,-MD,arch/x86/purgatory/.setup-x86_64.o.d  -nostdinc -isystem /usr/lib/gcc/x86_64-linux-gnu/4.9/include -I./arch/x86/include -Iarch/x86/include/generated/uapi -Iarch/x86/include/generated  -Iinclude -I./arch/x86/include/uapi -Iarch/x86/include/generated/uapi -I./include/uapi -Iinclude/generated/uapi -include ./include/linux/kconfig.h -D__KERNEL__   -D__ASSEMBLY__ -m64 -DCONFIG_X86_X32_ABI -DCONFIG_AS_FXSAVEQ=1 -DCONFIG_AS_SSSE3=1 -DCONFIG_AS_CRC32=1 -DCONFIG_AS_AVX=1 -DCONFIG_AS_AVX2=1  -Wa,-gdwarf-2  -mfentry -DCC_USING_FENTRY -DCC_HAVE_ASM_GOTO            -c -o arch/x86/purgatory/setup-x86_64.o arch/x86/purgatory/setup-x86_64.S

source_arch/x86/purgatory/setup-x86_64.o := arch/x86/purgatory/setup-x86_64.S

deps_arch/x86/purgatory/setup-x86_64.o := \

arch/x86/purgatory/setup-x86_64.o: $(deps_arch/x86/purgatory/setup-x86_64.o)

$(deps_arch/x86/purgatory/setup-x86_64.o):
