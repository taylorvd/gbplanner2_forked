libdir=@LIB_INSTALL_DIR@
includedir=@INCLUDE_INSTALL_ROOT_DIR@

Name: Yaml-cpp0.5
Description: A YAML parser and emitter for C++
Version: @YAML_CPP_VERSION@
Requires:
Libs: -L${libdir} -lyaml-cpp0.5
Cflags: -I${includedir}
