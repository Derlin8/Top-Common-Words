#include "helper.h"

int main(int argc , char** argv ) {
    if (argc > 2) {
        std::istringstream iss(argv[2]);
        int val = 1;
        iss >> val;
        topN(argv[1], val);
    } else {
        topN(argv[1], 10);

    }
}