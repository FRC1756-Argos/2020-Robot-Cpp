# 2020-Robot-Cpp

[![CI](https://github.com/FRC1756-Argos/2020-Robot-Cpp/actions/workflows/ci.yml/badge.svg)](https://github.com/FRC1756-Argos/2020-Robot-Cpp/actions/workflows/ci.yml) [![Format](https://github.com/FRC1756-Argos/2020-Robot-Cpp/actions/workflows/format.yml/badge.svg)](https://github.com/FRC1756-Argos/2020-Robot-Cpp/actions/workflows/format.yml) [![Documentation](https://github.com/FRC1756-Argos/2020-Robot-Cpp/actions/workflows/doxygen.yml/badge.svg)](https://github.com/FRC1756-Argos/2020-Robot-Cpp/actions/workflows/doxygen.yml)

C++ port of [FRC1756-Argos/2020-Robot](https://github.com/FRC1756-Argos/2020-Robot)


## Project Setup

### Pre-Commit

This project uses [pre-commit](https://pre-commit.com/) to check code formatting before accepting commits.

First install the prerequisites:

* python3 (with pip) - [instructions](https://realpython.com/installing-python/)
* wpiformat - `pip install wpiformat`
* pre-commit - `pip install pre-commit`

Then initialize:

```
pre-commit install
```

You'll now have style and formatting checks run prior to each commit!
