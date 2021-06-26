# 第十一週
## 生產者消費者問題
* [生產者消費者問題](https://zh.wikipedia.org/wiki/%E7%94%9F%E4%BA%A7%E8%80%85%E6%B6%88%E8%B4%B9%E8%80%85%E9%97%AE%E9%A2%98)
* 生產者消費者問題（英語：Producer-consumer problem），也稱有限緩衝問題（Bounded-buffer problem），是一個多進程同步問題的經典案例。該問題描述了共享固定大小緩衝區的兩個進程——即所謂的「生產者」和「消費者」——在實際運行時會發生的問題。生產者的主要作用是生成一定量的數據放到緩衝區中，然後重複此過程。與此同時，消費者也在緩衝區消耗這些數據。該問題的關鍵就是要保證生產者不會在緩衝區滿時加入數據，消費者也不會在緩衝區中空時消耗數據。
## semaphore
* [semaphore](https://zh.wikipedia.org/wiki/%E4%BF%A1%E5%8F%B7%E9%87%8F)
* 號誌（英語：semaphore）又稱為旗號，是一個同步物件，用於保持在0至指定最大值之間的一個計數值。當執行緒完成一次對該semaphore物件的等待（wait）時，該計數值減一；當執行緒完成一次對semaphore物件的釋放（release）時，計數值加一。當計數值為0，則執行緒等待該semaphore物件不再能成功直至該semaphore物件變成signaled狀態。semaphore物件的計數值大於0，為signaled狀態；計數值等於0，為nonsignaled狀態.
* 號誌的概念是由荷蘭電腦科學家艾茲赫爾·戴克斯特拉（Edsger W. Dijkstra）發明的[1]，廣泛的應用於不同的作業系統中。在系統中，給予每一個行程一個號誌，代表每個行程目前的狀態，未得到控制權的行程會在特定地方被強迫停下來，等待可以繼續進行的訊號到來。如果號誌是一個任意的整數，通常被稱為計數號誌（Counting semaphore），或一般號誌（general semaphore）；如果號誌只有二進位的0或1，稱為二進位號誌（binary semaphore）。
## riscv
* [riscv下載](https://github.com/riscv/riscv-gnu-toolchain?fbclid=IwAR0HV13KK6JINGAxT-4bFcHsZG6LQPMBGaUJdq28IIvQ8ZLyFQ46Y1KMU1I)

## code 執行結果
* producerConsumer.c
![picture](https://github.com/owen4096/sp109b/blob/main/note/week11/week11/1.png)
* philospher.c
![picture](https://github.com/owen4096/sp109b/blob/main/note/week11/week11/2.png)


