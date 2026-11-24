#include "Pet.h"

namespace Pet {
namespace {
PetView current = {};
}
void setup() {}
void update() {}
const PetView& view() { return current; }
}
