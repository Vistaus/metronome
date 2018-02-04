<div>
    <h1 align="center">Metronome</h1>
    <h3 align="center">A simple metronome</h3>
    <p align="center">Designed for <a href="https://elementary.io">elementary OS</p>
</div>
<a href="https://liberapay.com/Artem/donate"><img alt="Donate using Liberapay" src="https://liberapay.com/assets/widgets/donate.svg"></a>
<p align="center">
  <a href="https://appcenter.elementary.io/com.github.artemanufrij.metronome">
    <img src="https://appcenter.elementary.io/badge.svg" alt="Get it on AppCenter">
  </a>
</p>
<p align="center">
  <img src="Screenshot.png"/>
</p>

## Donations
If you liked _Metronome_, and would like to support it's development of this app and more, consider [buying me a coffee](https://www.paypal.me/ArtemAnufrij) :)

### Building and Installation

You'll need the following dependencies:
* cmake
* cmake-elementary
* debhelper
* libgstreamer1.0-dev
* libgranite-dev
* valac

It's recommended to create a clean build environment

    mkdir build
    cd build/
    
Run `cmake` to configure the build environment and then `make` to build

    cmake -DCMAKE_INSTALL_PREFIX=/usr ..
    make

To install, use `make install`, then execute with `com.github.artemanufrij.metronome`

    sudo make install
    com.github.artemanufrij.metronome
