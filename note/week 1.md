如何更改環境變數:  
控制台=>系統=>進階系統選項=>環境變數=>更改環境變數的PATH  

./        執行……(目前函式庫底下)  
:         觸發後面接的東西 all:(TARGET) 以all觸發(TARGET)  
gcc  -c   只編譯不連結 .o檔 結合成函式庫  
gcc  -S   轉換為組合語言 .s檔  
g++      編譯c++  
ar       函式庫壓縮程式  
-L       Location 連結位置  

Makefile特殊符號  
$@ : 該規則的目標文件 (Target file)  
$* : 代表 targets 所指定的檔案，但不包含副檔名  
$< : 依賴文件列表中的第一個依賴文件 (Dependencies file)  
$^ : 依賴文件列表中的所有依賴文件  
$? : 依賴文件列表中新於目標文件的文件列表  

?= 語法 : 若變數未定義，則替它指定新的值。  
:= 語法 : make 會將整個 Makefile 展開後，再決定變數的值。  

git add -A  
git commit -m "註解"  
git push origin mian(master)  

git pull --rebase  