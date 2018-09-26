#ifndef V8RUN_H
#define V8RUN_H
extern "C" {
#include <ngx_config.h>
#include <ngx_core.h>
#include <ngx_http.h>
#include <nginx.h>
}

#include "v8.h"
#include <string>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
using namespace v8;

class V8Run {
private:
  // Create a stack-allocated handle scope.
//  HandleScope handle_scope;
  // Create a new context.
//  Persistent<Context> context;

public:

  V8Run(){
      // Initialize V8.
      v8::V8::InitializeICU();
      //v8::Platform *platform = v8::platform::CreateDefaultPlatform();
      //v8::V8::InitializePlatform(platform);
    // string rst = "(null)";
      std::unique_ptr<v8::Platform> platform = v8::platform::NewDefaultPlatform();
      v8::V8::InitializePlatform(platform.get());

      V8::Initialize();
  }
  ~V8Run(){
    // Dispose the persistent context.
//    context.Dispose();
  }

};

#endif // V8RUN_H
