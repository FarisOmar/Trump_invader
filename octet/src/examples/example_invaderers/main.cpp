////////////////////////////////////////////////////////////////////////////////
//
// (C) Andy Thomason 2012-2014
//
// Modular Framework for OpenGLES2 rendering on multiple platforms.
//
// Invaderers - will space be free of 'em?
//

#include "../../octet.h"

#include "invaderers_app.h"

/// Create a box with octet
int main(int argc, char **argv) {
  // path from bin\Debug to octet directory
  octet::app_utils::prefix(OCTET_PREFIX);

  // set up the platform.
  octet::app::init_all(argc, argv);

  // our application.
  octet::invaderers_app app(argc, argv);
  app.init();

  // open windows
  octet::app::run_all_apps();
}

