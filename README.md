# Requests
[![Documentation](https://img.shields.io/badge/docs-online-informational?label=Docs&style=flat&link=https://gavrilikhin-d.github.io/Requests/)](https://gavrilikhin-d.github.io/Requests/)
[![Build](https://github.com/gavrilikhin-d/Requests/actions/workflows/build.yml/badge.svg?branch=master)](https://github.com/gavrilikhin-d/Requests/actions/workflows/build.yml)
[![License](https://img.shields.io/github/license/gavrilikhin-d/Requests?label=License)](https://github.com/gavrilikhin-d/Requests/blob/master/LICENSE)

Requests is a ["Python Requests"](https://github.com/psf/requests)-like C++ header-only library for sending HTTP requests. The library is inspired a lot by the [Cpr](https://github.com/whoshuu/cpr) project, yet tries to be even more simple.

Sending a `GET` request is nothing more than:
```c++
#include "requests.hpp"

int main()
{
  auto r = requests::get("https://api.github.com/user", requests::auth{"user", "pass"});

  r.status_code;             // 200
  r.headers["content-type"]; // "application/json; charset=utf8"
  r.text;                    // "{\"type\":\"User\"..."

  return 0;
}
```

## Documentation

Documentation can be found [here](https://gavrilikhin-d.github.io/requests/). Work in progress.

## Dependencies

- `cURL`
- Compiler that supports `C++20`

## Contributing
Please fork this repository and contribute back using [pull requests](https://github.com/gavrilikhin-d/Requests/pulls). Features can be requested using [issues](https://github.com/gavrilikhin-d/Requests/issues). All code, comments, and critiques are greatly appreciated.
