# Linux Kernel Development

## Resources

[Linux Kernel Documentation](https://www.kernel.org/doc/html/latest/index.html)

[kernelnewbies.org](https://kernelnewbies.org/)

[A Beginner’s Guide to Linux Kernel Development (LFD103)](https://training.linuxfoundation.org/training/a-beginners-guide-to-linux-kernel-development-lfd103/)

## Build a kernel from source

1. Clone kernel source tree  
    [Working with linux-next](https://www.kernel.org/doc/man-pages/linux-next.html)  
    `linux-next` must be used if you intend on contributing code upstream  

    ```
    git clone -- depth 1 git://git.kernel.org/pub/scm/linux/kernel/git/next/linux-next.git
    ```

    use `git pull --unshallow` to undo shallow fetch

2. Configure
3. Build kernel
4. Install modules
5. Set up GRUB
6. Reboot with new kernel

## Kernel scripts

Display maintainers for a subsystem
```
scripts/get_maintainer.pl --nogit -f <subsystem>
```

Configuration diff tool
```
scripts/diffconfig .config.old .config
```

## Raspberry Pi

### Raspberry Pi OS specific commands

[Raspberry Pi OS Kernel Documentation](https://github.com/raspberrypi/documentation/blob/develop/documentation/asciidoc/computers/linux_kernel/about-kernel.adoc)  
[Update Documentation](https://github.com/raspberrypi/documentation/blob/develop/documentation/asciidoc/computers/os/updating.adoc)

Full upgrade including stable kernel
```
sudo apt update && sudo apt full-upgrade
```

Kernel build dependencies
```
sudo apt install bc bison flex libssl-dev make libncurses5-dev
```

Required to compile modules
```
sudo apt install linux-headers-rpi-v8
```

Install gcc, GNU make
```
sudo apt install -y build-essential
```

Reboot is required if a new kernel was installed during upgrade
```
sudo reboot
```

### Non-Raspberry Pi OS commands

```
sudo apt update && sudo apt upgrade -y
```

Kernel headers required to compile modules

```
sudo apt install -y linux-headers-raspi
```

Install gcc, GNU make
```
sudo apt install -y build-essential
```