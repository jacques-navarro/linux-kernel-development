# Linux Kernel Development

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