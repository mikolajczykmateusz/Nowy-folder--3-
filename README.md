Program wyznacza liczbę Pi za pomocą metody Monte Carlo.


Mamy koło o promieniu 1 wpisane w kwadrat w boku 2. Aby oszacować liczbę Pi, należy policzyć liczbę punktów, które losowo trafiły w koło. Można ja obliczyć:

Pole koła = π * r^2

Pole kwadratu = (2r)^2

Stosunek pola koła dop pola kwadratu wynosi:

π/4

zatem π = 4 * Pole koła / Pole kwadratu


Deklarujemy zmienną całkowitą n, która oznacza liczbę losowanych punktów, zmienne zmiennoprzecinkowe x i y oznaczające współrzędne losowanego punktu, które losowane są za pomocą generatora liczb pseudolosowych oraz k jako licznik punktów zawartych w kole o promieniu 1.
W pętli sprawdzamy, czy wylosowany punkt leży w kole o promieniu 1. Jeśli tak, k zwiększamy o 1, aż otrzymamy zadeklarowaną liczbę punktów.
Obliczamy przybliżoną wartość liczby Pi i wypoisujemy jako zmienna p.
