# Thinxtra XKit - Switch to RC4

## Purpose

Change Sigfox settings of the [Wisol WSSFM10R2](http://support.wisol.co.kr) module in your [XKit](https://thinxtra.com/xkit) development kit to Sigfox [Radio Configuration 4](https://build.sigfox.com/sigfox-verified-certification#sigfox-verified-rc4-documents)

## How to use

* Separate the shield from the main board
* Upload this sketch to your Arduino Uno board
* Put the shield back in place within 10 seconds (or reset the board once the shield is there)

## Sigfox RC ?

Sigfox is using slightly different radio configurations depending on the local regulations & available spectrum.

Please check the [Sigfox Build](http://build.sigfox.com) portal for more details.

The RC4 has the following properties :

* 920 MHz Uplink central frequency
* 22 dBm / 100mW power output

It's used in the following countries (as of July 2018) : 

* 🇦🇷 Argentina
* 🇦🇺 Australia
* 🇨🇴 Colombia
* 🇨🇷 Costa Rica
* 🇪🇨 Ecuador
* 🇸🇻 El Salvador
* 🇭🇰 Hong Kong
* 🇲🇾 Malaysia
* 🇳🇿 New Zealand
* 🇵🇦 Panama
* 🇸🇬 Singapore
* 🇹🇼 Taiwan
* 🇹🇭 Thailand
