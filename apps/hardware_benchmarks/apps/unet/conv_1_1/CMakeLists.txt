add_executable(conv_process process.cpp)
halide_use_image_io(conv_process)

halide_generator(conv.generator SRCS conv_generator.cpp)

set(LIB conv)
halide_library_from_generator(${LIB}
  GENERATOR conv.generator)

target_link_libraries(conv_process PRIVATE ${LIB})
