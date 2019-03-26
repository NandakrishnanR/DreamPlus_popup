#!/bin/sh
# This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.9.0/Targets/Android/build.sh.
# WARNING: Changes might be lost if you edit this file directly.
set -e
cd "`dirname "$0"`"

##if #(JDK.Directory:IsSet)
export JAVA_HOME="/Library/Java/JavaVirtualMachines/jdk1.8.0_201.jdk/Contents/Home"
##endif

./gradlew assembleDebug "$@"

##if !#(LIBRARY:Defined)
ln -sf app/build/outputs/apk/app-debug.apk DreamPlus-popup.apk
##endif
