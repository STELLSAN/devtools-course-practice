// Copyright 2024 Dostavalov Sem

#include "include/djarvis.h"
#include "include/djarvis_app.h"

int main(int argc, char* argv[]) {
  std::vector<std::string> args;
  args.reserve(argc - 1);
  for (int i = 1; i < argc; ++i) {
    args.push_back(argv[i]);
  }

  Application app;

  std::string output = app.run(args);
  std::cout << output << std::endl;

  return 0;
}
