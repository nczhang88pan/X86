cmd_arch/x86/crypto/aes-x86_64.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o arch/x86/crypto/aes-x86_64.ko arch/x86/crypto/aes-x86_64.o arch/x86/crypto/aes-x86_64.mod.o
