#pragma once

#include <atlas/meter/id.h>
#include <nan.h>

bool tagsFromObject(v8::Isolate* isolate, const v8::Local<v8::Object>& object,
                    atlas::meter::Tags* tags);

atlas::meter::IdPtr idFromValue(
    const Nan::FunctionCallbackInfo<v8::Value>& info, int argc);
