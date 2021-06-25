## 作業系統
* [作業系統](https://www.slideshare.net/ccckmit/10-73472927)
## 多工
* 具備同時執行多個程式的能力
  * 具備多工能力的作業系統
    * windows UNIX/Linux Mac OSX等系統
  * 不具備多工能力的作業系統
    * DOS
## 協同式多工
* 又稱偽多工，看似向多工其實只要有一個程式當掉就會導致系統失效
## 單行程與多工比較圖
![pic3](https://github.com/owen4096/sp109b/blob/main/note/week10/week10/1.png)
## 行程行為模式
* 使用CPU
* 使用輸出入裝置
* 利用輸出入裝置切換行程
![pic4](https://github.com/owen4096/sp109b/blob/main/note/week10/week10/2.png)
## 行程狀態轉化圖
![pic5](https://github.com/owen4096/sp109b/blob/main/note/week10/week10/3.png)
## 排程問題
![pic6](https://github.com/owen4096/sp109b/blob/main/note/week10/week10/4.png)
## 記憶體管理
* C語言中的記憶體分配與回收函數
  * 分配: malloc()
  * 回收: free()
* 記憶體管理單元 (MMU)
  * 重定位暫存器
![pic7](https://github.com/owen4096/sp109b/blob/main/note/week10/week10/5.png)
* 基底界線暫存器
![pic8](https://github.com/owen4096/sp109b/blob/main/note/week10/week10/6.png)
* 分段機制
![pic9](https://github.com/owen4096/sp109b/blob/main/note/week10/week10/7.png)
* 分頁機制
![pic10](https://github.com/owen4096/sp109b/blob/main/note/week10/week10/8.png)
## 死結 (deadlock)
* 兩個以上的運算單元，雙方都在等待對方停止執行，以取得系統資源，但是沒有一方提前退出時，就稱為死結。
![PIC11](https://github.com/owen4096/sp109b/blob/main/note/week10/week10/9.png)
* P1、P2兩個process都需要資源才能繼續執行。P1擁有資源R2、還需要額外資源R1才能執行；P2擁有資源R1、還需要額外資源R2才能執行，兩邊都在互相等待而沒有任何一個可執行。
## 實體位址
* [實體位置](https://zh.wikipedia.org/wiki/%E7%89%A9%E7%90%86%E5%9C%B0%E5%9D%80)
* 在電腦科學中，實體位址（英語：physical address），也叫實位址（real address）、二進位位址（binary address），它是在位址匯流排上，以電子形式存在的，使得資料匯流排可以存取主記憶體的某個特定儲存單元的記憶體位址。

## 邏輯位址
* [邏輯位址](https://zh.wikipedia.org/wiki/%E9%80%BB%E8%BE%91%E5%9C%B0%E5%9D%80)
* 邏輯位址，在電腦架構中是指應用程式角度看到的記憶體單元（memory cell）、儲存單元（storage element）、網路主機（network host）的位址。 邏輯位址往往不同於實體位址（physical address），通過位址翻譯器（address translator）或對映函式可以把邏輯位址轉化為實體位址。

## code 執行結果
* race.c
![picture](https://github.com/owen4096/sp109b/blob/main/note/week10/week10/19.png)
* norace.c
![picture](https://github.com/owen4096/sp109b/blob/main/note/week10/week10/10.png)
* deadlock.c
![picture](https://github.com/owen4096/sp109b/blob/main/note/week10/week10/11.png)


