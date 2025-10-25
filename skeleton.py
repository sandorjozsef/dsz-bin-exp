from pwn import *

offset = ...
ret_addr = b"deadbeef"
payload = b"A" * offset + ret_addr

with open("payload.bin", "wb") as f:
    f.write(payload)
     
     