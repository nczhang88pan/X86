cmd_arch/x86/lib/inat.o := gcc -Wp,-MD,arch/x86/lib/.inat.o.d  -nostdinc -isystem /usr/lib/gcc/x86_64-linux-gnu/4.9/include -I./arch/x86/include -Iarch/x86/include/generated/uapi -Iarch/x86/include/generated  -Iinclude -I./arch/x86/include/uapi -Iarch/x86/include/generated/uapi -I./include/uapi -Iinclude/generated/uapi -include ./include/linux/kconfig.h -D__KERNEL__ -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -std=gnu89 -mno-sse -mno-mmx -mno-sse2 -mno-3dnow -mno-avx -m64 -falign-jumps=1 -falign-loops=1 -mno-80387 -mno-fp-ret-in-387 -mpreferred-stack-boundary=3 -mtune=generic -mno-red-zone -mcmodel=kernel -funit-at-a-time -maccumulate-outgoing-args -DCONFIG_X86_X32_ABI -DCONFIG_AS_FXSAVEQ=1 -DCONFIG_AS_SSSE3=1 -DCONFIG_AS_CRC32=1 -DCONFIG_AS_AVX=1 -DCONFIG_AS_AVX2=1 -pipe -Wno-sign-compare -fno-asynchronous-unwind-tables -fno-delete-null-pointer-checks -O1 --param=allow-store-data-races=0 -Wframe-larger-than=1024 -fstack-protector -Wno-unused-but-set-variable -fno-omit-frame-pointer -fno-optimize-sibling-calls -fno-var-tracking-assignments -g -gdwarf-4 -pg -mfentry -DCC_USING_FENTRY -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -Werror=implicit-int -Werror=strict-prototypes -Werror=date-time -DCC_HAVE_ASM_GOTO    -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(inat)"  -D"KBUILD_MODNAME=KBUILD_STR(inat)" -c -o arch/x86/lib/.tmp_inat.o arch/x86/lib/inat.c

source_arch/x86/lib/inat.o := arch/x86/lib/inat.c

deps_arch/x86/lib/inat.o := \
  arch/x86/include/asm/insn.h \
    $(wildcard include/config/x86/64.h) \
    $(wildcard include/config/x86/32.h) \
  arch/x86/include/asm/inat.h \
  arch/x86/include/asm/inat_types.h \
  arch/x86/lib/inat-tables.c \

arch/x86/lib/inat.o: $(deps_arch/x86/lib/inat.o)

$(deps_arch/x86/lib/inat.o):
