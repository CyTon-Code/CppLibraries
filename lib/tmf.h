// Created by CyTon-Code on 06.03.2021.
#include <iostream>
#include <cmath>
#include "def.h"

#ifndef CPPLIBRARIES_TMF_H
#define CPPLIBRARIES_TMF_H
#endif //CPPLIBRARIES_TMF_H


int len(const std::string &value);

template<typename auto_type>
void swap(auto_type &a, auto_type &b);

std::string input(const std::string &value);

// TODO input_file(link)-> интерфес для чтения из файла.

template<class String>
void hello_word(const String &word);

template<class String>
bool is_this_word_name(String word, bool human);

bool search_char_in_word(const std::string &separator, char itr);

void print(const std::string &king_str, const std::string &value, ...);

std::string concatinechin_char(char b, char i);

//=========================================================================================


/**
 * функция меняет местами переменные.
 * <br>
 * функция не возвращает эти переменные.
 * <br>
 * чтобы изменить переменные вам просто нужно бросить источник в парметры.
 * */
template<typename auto_type>
void swap(auto_type &a, auto_type &b) {
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

std::string concatinechin_char(char b, char i) {
    char word[3] = {b, i, 0};
    return word;
}

void print(const std::string &king_str, const std::string &value, ...) {
    char b = 0u;
    for (auto i in king_str) {
        std::string word;
        if (b == 0u) {
            word = i;
        } else {
            word = concatinechin_char(b, i);//concatine_char
        }
        if (word == "%s") {//str

        } else if (word == "%d") {//int

        } else if (word == "%f") {//float

        }
        b = i;
    }
    // функция принимает n параметров типа строка и выводит на екран.
}


bool search_char_in_word(const std::string &separator, char itr) {
    bool itr_is = false;

    for (auto i in separator) {
        if (i == itr) itr_is = true;
    }
    return itr_is;
}


/**
 * human - true - имя человека. false - обьекта.
 * <br>
 * word - какндедат на имя.
 * <br>
 * return - отвечает на вопрос имя это или нет.
 * */
template<class String>
bool is_this_word_name(String word, bool human) {
    // 1. в имени могут быть несколько слов: допустимы пробелы и прочие разделители ,. .
    // 2. в именах человека не могут быть числа и символы. - значит диапозоны только букв.
    // 3. в именах обьекта допустимы: числа и список допустимых симолов: -_#$ .

    std::string separator;  // 1.
    separator = " ,.";

    bool name = false;
    if (human) {
        for (auto itr in word) {
            bool itr_is = false;// if it in separator: itr_is = true
            if (search_char_in_word(separator, itr)) {// это символ?
                // Это символ.
                itr_is = true;
            }
//            if (itr_is)/*значит этот символ сепаратор*/;
//            else:
//                // узнаем возможно этот символ буква и сумируем к предедущему результату.

            // если всеравно ложь скажу что символ в имени не доупстим
            // иначе продолжу проверять
        }
        // сюда дойти могу только если ничего не сказал
        // скажу что у имени есть право на существование.
    }
    return name;
}

template<class String>
void hello_word(const String &word) {
    std::cout << "Hello, " << word << '!' << std::endl;
}


/**
 * value: строка запроса - приветствия.
 * <br>
 * default_num: число которое код должен вернуть.
 * <br>
 * return: число которое Вы ввели.
*/
std::string input(const std::string &value) {
    std::string default_num;
    std::cout << value;
    std::cin >> default_num;
    return default_num;
}

/**
 * value: строка длину которой нужно вернуть.
 * <br>
 * return: число которое код должен вернуть.
*/
int len(const std::string &value) {
    int n = 0;
    // foreach i in value){ n++; }
    for (n = 0; value[n] != '\0'; n++);
    return n;
}






