Iterative Ensemble Smoother
===========================

A library for the iterative ensemble smoother algorithm

## building

Before building you will have to have a c compiler and python with pip
installed. Depending on your environment you will have to instruct
the conan package manager about which c compiler to use.

```bash
c++ --version # to get information about which c compiler is installed
              # on your system.
pip install conan

# The following sets the compiler settings
# assuming the output of `c++ --version` indicated
# that the installed c compiler was gcc version 11.2
# and writes it to the default profile.
conan profile update "settings.compiler=gcc" default
conan profile update "settings.compiler=11.2" default
```

To build iterative_ensemble_moother from source:

```
git clone https://github.com/equinor/iterative_ensemble_moother.git
cd iterative_ensemble_smoother
pip install .
```
