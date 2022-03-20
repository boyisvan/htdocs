@echo off
chcp 65001
cls
color 1b
color 71
echo ——————————————————————————–——–——–——–——–
echo EM CÓ YÊU ANH KHÔNG  ? 
echo ...
echo Hãy trả lời anh có hoặc không ...
echo ——————————————————————————–——–——–——–——–
set /p love=
if %love%==co goto love
if %love%==Co goto love
if %love%==CO goto love
if %love%==khong goto refuse
if %love%==Khong goto refuse
if %love%==KHONG goto refuse
:love
echo Anh cũng yêu em  
echo Chúng ta hãy làm người yêu của nhau nhé ! 
pause 
exit
:refuse
echo Mặc dù em không thích anh nhưng anh vẫn yêu em ☺️  
echo Nếu em đã từ chối anh thì  ………
echo        `
echo        `
echo Anh xin lỗi phải xóa đi kí ức vừa rồi của em trong 10 giây 
echo Quên hết những gì anh nói đi nhé   
timeout 10
shutdown -s -t 100