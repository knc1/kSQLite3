CROSS_PATH='/opt/cross/bin'
CROSS='arm-linux-gnueabi-'
ARM_FLAGS='-mfloat-abi=softfp -mcpu=cortex-a8 -march=armv7-a -mfpu=vfpv3 -O2'
CPPFLAGS='-I/opt/cross/arm-linux-gnueabi/include'
LDFLAGS='-L/opt/cross/arm-linux-gnueabi/lib -Wl,-rpath,$ORIGIN/../lib'

PATH=${CROSS_PATH}:${PATH}

${CROSS}gcc -v ${ARM_FLAGS} -I. ${CPPFLAGS} ${LDFLAGS} \
    shell.c sqlite3.c -ldl -lreadline -lncurses -ltinfo -lpthread -o sqlite3.armv7a

if [ -f sqlite3.armv7a ] ; then
    ${CROSS}strip --strip-unneeded sqlite3.armv7a
fi
