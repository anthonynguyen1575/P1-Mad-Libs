#include <iostream>
#include <string>

int main() {
    std::cout << "Give me an adjective: ";
    std::string adjective1;
    std::cin >> adjective1;

    std::cout << "Give me a famous person: ";
    std::string famous;
    std::cin >> famous;

    std::cout << "Give me a verb: ";
    std::string verb;
    std::cin >> verb;

    std::cout << "Give me a country: ";
    std::string country;
    std::cin >> country;

    std::cout << "Give me an emotion: ";
    std::string emotion;
    std::cin >> emotion;

    std::cout << "Give me a place: ";
    std::string place;
    std::cin >> place;

    std::cout << "Give me a plural noun: ";
    std::string pluralNoun1;
    std::cin >> pluralNoun1;

    std::cout << "Give me a length of time: ";
    std::string timeLength;
    std::getline(std::cin >> std::ws, timeLength);

    std::cout << "Give me an adjective: ";
    std::string adjective2;
    std::cin >> adjective2;

    std::cout << "Give me a plural noun: ";
    std::string pluralNoun2;
    std::cin >> pluralNoun2;

    std::cout << "Give me an adjective: ";
    std::string adjective3;
    std::cin >> adjective3;

    std::cout << "Give me a plural food (first letter capitalized): ";
    std::string pluralFood;
    std::cin >> pluralFood;

    std::cout << "Give me a beverage: ";
    std::string beverage;
    std::cin >> beverage;

    std::cout << "Give me a noun: ";
    std::string noun;
    std::cin >> noun;

    std::cout << "Give me a plural noun: ";
    std::string pluralNoun3;
    std::cin >> pluralNoun3;

    std::cout << "Give me a sound: ";
    std::string sound1;
    std::cin >> sound1;

    std::cout << "Give me another sound: ";
    std::string sound2;
    std::cin >> sound2;

    std::cout << "After a(n) " << adjective1 << " presidential election, the American people have elected " << famous << ""
        " to the office of President of the United States. Their first executive order: " << verb << " all of the nation's nuclear weapons. """
        "Unforunately, " << country << " saw this as an act of " << emotion << " and deployed their military to " << place << ". """
        "The stock market crashed. People went without " << pluralNoun1 << " for " << timeLength << ". Some left their homes and took to the road, """ 
        "only to end up " << adjective2 << " on the highway...others hid in underground " << pluralNoun2 << ". Where there had once been the """
        "sound of sirens and jets soaring overhead, there was now a(n) " << adjective3 << " silence. " << pluralFood << " and """ << beverage << 
        " were scarce. Those who had survived would go days one end without seeing another " << noun << ", with only their " << pluralNoun3 <<
        """ to keep them company. Perhaps they were reminded of an old poem: \"This is the way the world ends. Not with a(n) " << sound1 << " but a(n) "
        << sound2 << ".\"";
}