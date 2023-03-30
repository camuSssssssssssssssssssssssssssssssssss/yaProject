#pragma once
#include <iostream>
#include <string_view>
#include <string>
#include <vector>
#include <tuple>
using namespace std;

class Translator {
public:
    void Add(string_view source, string_view target);
    string_view TranslateForward(string_view source) const;
    string_view TranslateBackward(string_view target) const;

    Translator() = default;

private:
    vector<tuple<string_view, string_view>>new_translate;
};