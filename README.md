# Sample Cpp project

This project demonstrates the usage of some common c++ tools for a project.

- [Catch](https://github.com/philsquared/Catch) for testing
- [Doxygen](http://www.stack.nl/~dimitri/doxygen/) for documentation
- Clang-format should be used to comform to the [Google C++ Style Guide](https://google.github.io/styleguide/cppguide.html)
- [cpplint.py](https://github.com/google/styleguide/tree/gh-pages/cpplint) is included to further conform to the style guide

When you build the project everything will be build in the bin directory. The bin and docs directories are excluded from git in the .gitignore file.

```
cd bin/
cmake ../
make
```

## Doxygen

Doxygen runs with the configuration set in the Doxyfile. For this project running Doxygen from the root of the directory tree will generate the docs in the docs directory.

```
./Doxygen
```

## Catch.h

A separate test executable is built in the CMakeList.txt. You can run the tests by running the test executable in the bin directory. You can see all the tests written in the test directory.
