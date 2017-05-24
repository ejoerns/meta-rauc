LICENSE = "LGPLv2.1"
LIC_FILES_CHKSUM = "file://COPYING;md5=4fbd65380cdd255951079008b364516c"

SUMMARY = "hawkBit client for RAUC"

SRC_URI = "git://github.com/rauc/rauc-hawkbit.git;protocol=https"

PV = "0.0+git${SRCPV}"
SRCREV = "${AUTOREV}"

S = "${WORKDIR}/git"

inherit setuptools3

RDEPENDS_${PN} += "python3-aiohttp python3-gbulb"
