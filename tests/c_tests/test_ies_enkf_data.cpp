#include <ert/util/test_util.hpp>

#include <ert/util/rng.h>

#include <ert/analysis/ies/ies_data.hpp>

void test_create() {
    const int ens_size = 100;
    ies::data::Data data(ens_size, true);
}

int main(int argc, char **argv) { test_create(); }
