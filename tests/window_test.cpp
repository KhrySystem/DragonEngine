#include <cstdio>

#include <dragon/core.hpp>
#include <dragon/graphics.cpp>

DgEngine engine;

DgResult initEngine() {
    DgResult r;
    DgEngineCreateInfo cci{};
    DgGraphicsEngineCreateInfo gci{};

    r = dgInitGraphicsEngine(engine, cci, gci);
    r = dgInitEngine(engine, cci);
    if(r == DG_SUCCESS) return DG_SUCCESS;
    printf("dgInitEngine failed with error code 0x%x", r);
    abort(r);
}

int main(void) {
}