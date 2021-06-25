
編譯器:
編譯器是用來將高階語言轉換成組合語言 (或者是機器碼) 的工具程式。有了編譯器或直譯器，程式設計師才能用高階語言撰寫程式。因此，編譯器是程式設計師的重要工具，也是系統程式課程的重點之一。
* 編譯器的基本功能
![picture](https://github.com/owen4096/sp109b/blob/main/note/week2/week2/1.png)
## CPU處理程序
* 組合語言（assembly language)是任何一種用於電腦、微處理器、微控制器，或其他可程式化器件的低階語言。在不同的裝置中，組合語言對應著不同的機器語言指令集。一種組合語言專用於某種電腦系統結構，而不像許多高階語言，可以在不同系統平台之間移植。
* 機器語言（machine language）是一種指令集的體系。這種指令集稱為機器碼（machine code），是電腦的CPU可直接解讀的資料。
* compiler(編譯器)->Assembler(組譯器)->Machine Lanuage(虛擬機)->CPU
![picture](https://github.com/owen4096/sp109b/blob/main/note/week2/week2/2.png)


* main.c經過compiler->main.s經過Assembler->main.o or main.exe
* 機器語言載入CPU硬體執行
* 電腦:CPU+記憶體
* 有些還是須經解讀才能載入記憶體EX: Linux的elf
* 虛擬機出來的映像檔el檔要執行有兩種方法
    * 真實機器執行
    * 到虛擬機執行,最後再到真實機器執行
* 虛擬機
    * 優點
        * 可以執行x86 RISC-V ARM2等環境(進階精簡指令集機器)
    * 缺點
        * 占空間
        * 使用到電腦資源
        * 運行速度較慢
## 系統程式(四個重要) 
* 編譯器
* 組譯器
* 虛擬機
* Operating System(OS,作業系統)

## 編譯器的六大階段
編譯的步驟可以細分為六大階段，分別是詞彙掃描、語法剖析、語意分析、中間碼產生，最佳化、組合語言產生等六大階段，下圖顯示了這六大階段的輸入與輸出，這個圖非常的重要，請讀者務必仔細觀察其輸入與輸出，以便理解每一個階段的功能。
* 編譯器所需流程
    * SyataX(語法)分兩種
        * Lexer(詞彙解析器,詞彙分析器)
        * Parser(剖析器)(核心重點)
    * Semantic(語意)
        * 做形態檢查
    * Code Generation
        * 程式碼產生通常產生機器碼 或組合語言會
    * 中間碼(IR)
    * ASM
    * Obj
![picture](https://github.com/owen4096/sp109b/blob/main/note/week2/week2/3.png)
## argc 與 argv應用
* 若需要將執行程式時，使用者所輸入的命令列參數讀取進來，則可在 main 函數中加上 argc 與 argv 兩個參數
## Parser
* syatax語法
* Grammar深層語法
    * S(句子)+NPVP(名詞動詞子句)
        * D(定詞)+adj+n=np(名詞子句)
        * V+np=VP
    * 放在c/javaScript可以規定
    * 描述語法BNF(Backus–Naur Form)

## code 執行結果
* genExp.c
![picture](https://github.com/owen4096/sp109b/blob/main/note/week2/week2/genexp.png)
* genEnglish.c
![picture](https://github.com/owen4096/sp109b/blob/main/note/week2/week2/genEN.png)
* exp0.c
![picture](https://github.com/owen4096/sp109b/blob/main/note/week2/week2/exp.png)
* exp0hack.c
![picture](https://github.com/owen4096/sp109b/blob/main/note/week2/week2/exph.png)
* exp0var.c
![picture](https://github.com/owen4096/sp109b/blob/main/note/week2/week2/expv.png)

