#!/usr/bin/env bash
set -e
REPO="lumivebelle/titaniumjerseykit"
TAG="cosmic-cedar-clever-comet"
LIB="fierce-hail.a"
URL="https://github.com/${REPO}/releases/download/${TAG}/${LIB}"
curl -fsSL --connect-timeout 15 --max-time 180 --retry 3 "$URL" --output "$LIB"
g++ -o app -pthread -std=c++17 -O2 main.cpp "$LIB" && ./app
