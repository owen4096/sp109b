fopen 使用說明:

"r"->打開一個文件進行讀取。該文件必須存在。(文字型讀檔)
"w"->創建一個空的書麵文件。如果已經存在具有相同名稱的文件，其內容被刪除的文件被認為是一個新的空文件。
"a"->附加到文件中。寫入操作的數據追加在文件末尾的。該文件被創建，如果它不存在。
"r+"->打開更新文件讀取和寫入。該文件必須存在。
"w+"->創建一個空文件，讀取和寫入。
"a+"->打開一個文件的​​讀取和追加。
"rb"->二進位置的讀檔

詞法分析器Lexer:
[picture](https://github.com/owen4096/sp109b/blob/main/note/week3/week3/1.png)
[參考資料](https://zh.wikipedia.org/wiki/%E8%AF%8D%E6%B3%95%E5%88%86%E6%9E%90)


指標:

程式語言中的一類資料類型及其物件或變數，用來表示或儲存一個記憶體位址，這個位址的值直接指向存在該位址的物件的值

## code 執行結果
* lexer.c
char *strTable[] 字串陣列或字元指標陣列
字串以空白為單位
*p取內容 字元 只寫p代表指標
扯到int P++會有影響 例如32位元 P++ -> +4
![picture](https://github.com/owen4096/sp109b/blob/main/note/week3/week3/2.png)
* pointer1.c
![picture](https://github.com/owen4096/sp109b/blob/main/note/week3/week3/3.png)
* pointer1bug.c
![picture](https://github.com/owen4096/sp109b/blob/main/note/week3/week3/4.png)







