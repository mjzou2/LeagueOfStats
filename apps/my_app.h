// Copyright (c) 2020 CS126SP20. All rights reserved.

#ifndef FINALPROJECT_APPS_MYAPP_H_
#define FINALPROJECT_APPS_MYAPP_H_

#include <cinder/app/App.h>
#include <curl/curl.h>
#include <nlohmann/json.hpp>

namespace myapp {

class MyApp : public cinder::app::App {
 public:
  MyApp();
  void setup() override;
  void update() override;
  void draw() override;
  void keyDown(cinder::app::KeyEvent) override;
  template <typename C>
  void printText(const std::string& text, const C& color, const cinder::ivec2& size,
                 const cinder::vec2& loc);
  std::string read_buffer;
  std::string download(const std::string& url);
};

}  // namespace myapp

#endif  // FINALPROJECT_APPS_MYAPP_H_
