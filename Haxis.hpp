#ifndef EASY_CPP_H
#define EASY_CPP_H

#include <algorithm>
#include <cmath>
#include <cstring>
#include <fstream>
#include <iostream>
#include <random>
#include <string>
#include <vector>

namespace hxs {

template <typename T> void print(T var) { std::cout << var << std::endl; }

template <typename T> T input() {
  T var;
  std::cin >> var;
  return var;
}

template <typename T> T input(std::string prompt) {
  std::cout << prompt;
  return input<T>();
}

inline void file_write(std::string filename, std::string text) {
  std::ofstream file(filename, std::ios_base::out);
  if (file.is_open()) {
    file << text;
    file.close();
  }
}

inline std::string file_read(std::string filename) {
  std::ifstream file(filename);
  std::string full_text = "";
  std::string line;
  if (file.is_open()) {
    while (std::getline(file, line)) {
      full_text += line + "\n";
    }
    file.close();
  } else {
    std::cout << "Error, cannot open file:" << filename << std::endl;
  }
  return full_text;
}

inline bool even_num(int var) {
  bool ev;
  if (var % 2 == 0) {
    ev = true;
  } else {
    ev = false;
  }
  return ev;
}

inline bool even_inv(int var) {
  bool iv;
  if (var % 2 == 0) {
    iv = false;
  } else {
    iv = true;
  }
  return iv;
}

template <typename T> void print_arr(T *arr, int len) {
  for (int i = 0; i < len; i++) {
    std::cout << *(arr + i) << " " << std::endl;
  }
}

template <class T> class Arrays {
private:
  std::vector<T> ar;

public:
  Arrays(T *a, int len) : ar(a, a + len) {}

  void get_arr() {
    for (const auto &item : ar) {
      std::cout << item << " " << std::endl;
    }
  }
};

inline void todo() {
  print("Life isn't fair, what's the point of life if it's all crap");
}

inline int get_random(int min, int max) {
    static std::random_device rd;
    static std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(min, max);
    return dist(gen);
}

inline float rev(float a) {
  return a = -a;
}

inline double powrev(double a, double b) {
  return 1.0 / std::pow(a, b);
}

inline bool eif_int(int a, const std::string& b, int c) {
  bool var;
  if (b == "==") {
    if (a == c ) {
      var = true;
    }
    else {
      var = false;
    }
  }
  else if (b == ">") {
    if (a > c) {
      var = true;
    }
    else {
      var = false;
    }
  }
  else if (b == "<") {
    if (a < c) {
      var = true;
    }
    else {
      var = false;
    }
  }
  else if (b == ">=") {
    if (a >= c) {
      var = true;
    }
    else {
      var = false;
    }
  }
  else if (b == "<=") {
    if (a <= c) {
      var = true;
    }
    else {
      var = false;
    }
  }
  else if (b == "!=") {
    if (a != c) {
      var = true;
    }
    else {
      var = false;
    }
  }
  else {
    var = false;
  }
  return var;
}
} // namespace hxs

#endif
