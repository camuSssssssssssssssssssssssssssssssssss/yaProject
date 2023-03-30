#include <cassert>
#include <string>
#include "translator.h"

using namespace std;

void TestSimple() {
    Translator translator;

    translator.Add(string_view("okno"s), string_view("window"s));
    translator.Add(string_view("stol"s), string_view("table"s));

    assert(translator.TranslateForward("okno"s) == "window"s);
    assert(translator.TranslateBackward("table"s) == "stol"s);
    assert(translator.TranslateForward("table"s) == ""s);
}

int main() {
    TestSimple();
    return 0;
}

