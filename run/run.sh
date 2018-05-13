#!/bin/sh

../build/gps.out finistere.csv finistere.dot Douarnenez LaTorche
dot -Tsvg -o finistere.svg finistere.dot
display finistere.svg

