cmd_arch/x86/oprofile/oprofile.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o arch/x86/oprofile/oprofile.ko arch/x86/oprofile/oprofile.o arch/x86/oprofile/oprofile.mod.o
