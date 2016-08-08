FROM debian:jessie
RUN apt-get update -qy
RUN apt-get install -y dfu-programmer build-essential avrdude gcc-avr binutils-avr avr-libc

