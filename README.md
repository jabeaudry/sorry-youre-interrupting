# Sorry, You're Interrupting

A showcase of fever dreams, but experienced while being fully in control. This installation prototype was created with `TouchDesigner`, the `Arduino Uno R3` and the `NodeMCU ESP8266`. 

<img width="674" alt="image" src="https://user-images.githubusercontent.com/56971054/165434211-66877b09-e792-4a13-9242-fc19a5281426.png">




## The Installation

<img width="205" alt="image" src="https://user-images.githubusercontent.com/56971054/165434768-fbec6bf0-98b0-46a3-bc9f-eb9d7eebb899.png">

<b>Sorry, you're Interruptupting</b> is not a dream you wish to disturb. The exhibition was imagined as a soundproof room, where each wall presents a dream sequence. It can be a walk in the city, a daily routine, etc. The screens project a normal video, unless the viewers move. The images become distorted with every movement and react to anyone's presence. The dream space tries to hide its content when the viewer interferes too closely. Due to the COVID-19 pandemic, the exhibition was presented as a prototype on a television screen. Only one of the four walls could be presented.

## The Visuals
<img width="300" alt="image" src="https://user-images.githubusercontent.com/56971054/165434975-acb097b0-5fae-4101-886e-e6cfa6cff64d.png"><img width="234" alt="image" src="https://user-images.githubusercontent.com/56971054/165435006-3fed2441-5835-434d-ad10-a060d67b4642.png">

Using TouchDesigner, four videos are cast on independent grids that move based on the texture created by a PBR MAT. The movement is also dictated by the input received from three sensors.


## The Sensors
<img width="353" alt="image" src="https://user-images.githubusercontent.com/56971054/165433103-aa7795ff-77ee-4d38-a183-e75f3f1bfa46.png">
The <code> ultrasonic sensor</code>, on the left, measures the viewer's distance and returns an integer. The closer the viewer comes to a specific screen, the more the image will grow and prevent the user from seeing the bigger picture.<br><br>

The `PIR motion sensor`, on the right, returns a boolean when it senses movement. The screens will ripple with noise, making it harder to distinguish what is being watched.

<img width="294" alt="image" src="https://user-images.githubusercontent.com/56971054/165433744-39eb6902-a257-4a4e-9a87-f05900959752.png">
The <code>heart-rate sensor</code>, which is connected to the ESP8266 microprocessor, returns an integer that represents the BPMs. The screens will register heart rate variations. The more the heart-beat varies, the longer the image will distort.

