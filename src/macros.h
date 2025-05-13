#ifndef MACROS_H
#define MACROS_H

#define METHOD_NO_ARGS(type, name) _method_##type##_##name(struct type *object)
#define METHOD(type, name, ...) _method_##type##_##name(struct type *object, __VA_ARGS__)
#define CONSTRUCTOR_NO_ARGS(type) _constructor_##type(struct type *object)
#define CONSTRUCTOR(type, ...) _constructor_##type(struct type *object, __VA_ARGS__)

#endif