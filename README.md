

*experimental*: This project is not yet ready for production.


## ModSecurity v3 Build for Windows

### About

This is an experimental repository to provide you the means to compile
ModSecurity on Visual Studio. It also contains an example on how to run
ModSucurity inside C#. The example is just an sketch. The
*libModSecurityManaged* project needs to be filled with some code in order
to export the library the real library functionalities.

ModSecurity itself is not yet ready to be compiled on Windows, there are
some platform dependent stuff which was _ugly_ removed in order to make
the compilation pass.

Regression and Unit tests are available, but not producing useful result
yet.


### How to Build

1. Update all git submodules

```bash
cd project_folder
git submodule init
git submodule update
cd ModSecurity
git submodule init
git submodule update
```

2. Build the external dependencies

2.1. yajl

```bash
cd project_folder/external
build_yajl
```

2.2. pcre


Download pcre-9.43.zip

Extract the content to project_folder\pcre-8.43
```bash
cd project_folder/external
build_pcre
```

3. Apply patch to make ModSecurity compile on windows

```bash
cd project_folder/ModSecurity
patch -p1 < ../make_it_compile.patch
```

4. Open the solution in Visual Studio and compile with *Debug|Win32*.

### Author

Felipe Zimmerle <felipe@zimmerle.org>
