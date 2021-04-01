# Requests

[![Build](https://github.com/gavrilikhin-d/requests/actions/workflows/build.yml/badge.svg?branch=master)](https://github.com/gavrilikhin-d/requests/actions/workflows/build.yml)

C++ Requests is a [Python Requests](https://github.com/psf/requests) alike library for sending HTTP requests. The library is much inspired by the [Cpr](https://github.com/whoshuu/cpr) project, yet uses Boost instead of cURL. Our library supports HTTPs requests and allows you not to worry about certificates.

Sending `GET` request is nothing more than:
```c++
#include <requests/requests.hpp>

int main()
{
  Requests::Response r = Requests::get("https://api.github.com/user", Requests::Auth{"user", "pass"});
  
  r.status_code;             // 200
  r.headers["content-type"]; // "application/json; charset=utf8"
  r.encoding;                // "utf-8"
  r.text;                    // "{\"type\":\"User\"..."
  r.json();                  // {"disk_usage": 368627, "private_gists": 484, ...}
  
  return 0;
}
```

## Documentation

Documentaion can be found [here](https://gavrilikhin-d.github.io/requests/). Work in progress.

## Dependencies

Requests deliberately uses most modern `C++20` features, hence it requires lastest `gcc-11` compiler.

It also requires:
- `Boost 1.75` or greater.
- `OpenSSL`

Note: Neither  `gcc-11` nor `Boost 1.75` can be installed through `apt`. You must install them from source.

## Install

1. Download sources
```
git clone https://github.com/gavrilikhin-d/requests
```
2. Build project
```
mkdir build
cd build
cmake ..
cmake --build .
```
3. Install
```
cmake --install .
```
