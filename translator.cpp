#include "translator.h"

void Translator::Add(string_view source, string_view target) {
	new_translate.push_back(make_tuple(source, target));
}

string_view Translator::TranslateForward(string_view source) const {
	for (const auto& index : new_translate) {
		if (source == get<0>(index)) {
			return get<1>(index);
		}
	}
	return "";
}

string_view Translator::TranslateBackward(string_view target) const {
	for (const auto& index : new_translate) {
		if (target == get<1>(index)) {
			return get<0>(index);
		}
	}
	return "";
}

