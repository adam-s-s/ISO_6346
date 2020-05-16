#include "ISO_6346.h"

int main() {
    // Valid:
    assert(ISO_6346::isValidId("OOLU3456780"));
    assert(ISO_6346::isValidId("CSQU3054383"));
    assert(ISO_6346::isValidId("CSQZ3054387"));
    assert(ISO_6346::isValidId("CSQJ3054386"));
    assert(ISO_6346::isValidId("CSQA3054383", false, false));
    assert(ISO_6346::isValidId("CSIU2000820"));
    assert(ISO_6346::isValidId("DOGU2045518"));
    assert(ISO_6346::isValidId("ECAU1002998"));
    assert(ISO_6346::isValidId("IPXU3392498"));
    assert(ISO_6346::isValidId("SHCU4002932"));
    assert(ISO_6346::isValidId("ECAU1002998"));
    assert(ISO_6346::isValidId("ZCSU2583334"));

    // Invalid:
    //assert(ISO_6346::isValidId("DDEZ1234567"));
    //assert(ISO_6346::isValidId("DDEU1234567"));
    //assert(ISO_6346::isValidId("DDEJ1234567"));
    //assert(ISO_6346::isValidId("AAQU0054381"));
}
