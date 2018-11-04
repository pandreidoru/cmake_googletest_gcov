# CMake & GoogleTest & GCOV

This is a cmake C++ project template configured for unit testing (googletest) and code coverage (gcov, lcov).

## Projects used

- Unit testing
  - [googletest](https://github.com/pandreidoru/cpp_googletest_coverage/tree/master/lib/googletest)
- Code coverage
  - [cmake-modules](https://github.com/bilke/cmake-modules)
  - [gcov](https://gcc.gnu.org/onlinedocs/gcc/Gcov.html)
  - [lcov](http://ltp.sourceforge.net/coverage/lcov.php)

## Project structure

```
.
├── CMakeLists.txt
├── inc
│   └── cub.h
├── lib
│   ├── cmake-modules
│   └── googletest
├── README.md
├── src
│   ├── CMakeLists.txt
│   ├── cub.cc
│   └── main.cpp
└── test
    ├── inc
    └── src
        ├── CMakeLists.txt
        └── cub_test.cc
```

- The [googletest](https://github.com/pandreidoru/cpp_googletest_coverage/tree/master/lib/googletest) and [cmake-modules](https://github.com/bilke/cmake-modules) projects were added to this repository via [git-subtree](https://github.com/apenwarr/git-subtree), so you can easily update these repository

```Bash
cd projectdir
git subtree pull --squash --prefix=lib/cmake-modules git@github.com:bilke/cmake-modules.git master
git subtree pull --squash --prefix=lib/googletest git@github.com:google/googletest.git master
```

## Note

- The output of the code coverage (executed with `gcov`) can be seen by opening the following file in a web browser

  > cmake-build-debug/test_coverage/index.html