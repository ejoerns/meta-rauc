require rauc.inc

PR = "r0"

SRC_URI = " \ 
  git://github.com/rauc/rauc.git;protocol=https;branch=master \
  "

PV = "1.6+git${SRCPV}"
S = "${WORKDIR}/git"

SRCREV = "080ad9e75ee4fa36a6093dac29e3d12fec87a167"

DEFAULT_PREFERENCE = "-1"

PACKAGECONFIG[streaming] = "--enable-streaming,--enable-streaming=no,libnl"

PACKAGECONFIG:class-target ??= "service network streaming json nocreate gpt"
