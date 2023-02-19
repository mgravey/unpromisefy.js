#include <node.h>

using namespace v8;

// This is the function that will be called when the module is loaded
void unPromised(const FunctionCallbackInfo<Value>& args) {
  // Create a scope to manage memory allocation
  Isolate* isolate = args.GetIsolate();
  HandleScope scope(isolate);

  // Get the resolved promise value and convert it to a non-promise value
  Local<Value> resolved = args[0].As<Promise>()->Result();

  // Return the result as a non-promise value
  args.GetReturnValue().Set(resolved);
}

// This is the function that will be called when the module is loaded
void Init(Local<Object> exports) {
  NODE_SET_METHOD(exports, "unPromised", unPromised);
}

// Define the module name and the function that will be called when the module is loaded
NODE_MODULE(addon, Init)