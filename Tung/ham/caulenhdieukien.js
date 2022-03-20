// đây là phần code của ngôn ngữ javascript
// CÂU LỆNH ĐIỀU KIỆN IF - ELSE


/*
Bài 1 :  Lan đang phân vân có nên đi học hay không , nếu trời mưa thì sẽ không đi , nếu trời nắng sẽ đến trường 

var a="mưa" , b="nắng";
var c ="nắng";                                  //c là biến phụ thuộc điều kiện , bài toán sẽ chạy dựa vào c 
if(c==a){
    alert("vì "+a+" nên Lan không đi học");
}if( c==b){
    alert("vì "+b+" nên Lan phải đi học");
}else{
    alert("không rõ thời tiết");
}

*/
/* Bài 2 : Tâm muốn mua ô tô , nếu anh ấy có hơn 100 ngàn thì sẽ mua , nếu không có thì không mua 
var c = 99000 ; 
if(c>=100000){
    alert("Tâm sẽ mua ô tô vì anh ấy có "+c+" ngàn");
}else{
    alert("Tam sẽ không mua ô tô vì anh ấy có "+c+" ngàn");
*/

/* Bài 3 : Cho một cái hộp có chiều cao là 1,5dm , chiều rộng là 1,1 dm , chiều dài là 2m ;
a, tính thể tích của hộp
b, nếu thể tích cái hộp nhỏ hơn 3 vạn cm3 thì nuôi được cá , còn không thì nuôi đươc mèo

*/


var chieucao=15 , chieurong = 11 , chieudai = 200 ;

var thetich =chieudai*chieurong*chieucao;
alert("Thể tích hình hộp là : "+thetich + " cen-ti-met khối")

/*
var a=5 , b=10 , c=4;

if(a<b){
    if(a<c){
        alert(a+" nhỏ hơn "+ b + " và "+c);
    }else{
        // code nếu ko thõa mãn điều kiện của if;
        alert(a+" nhỏ hơn "+ b + " và lớn hơn "+c);
    }
}else{
    //code chạy nếu không thỏa mãn điều kiện của if
}
*/































// var a = 12 , b=10, c=15 , d =20 ;

// if(a<b || a<c  ){
//     alert("a nhỏ nhất");
// }
// else{
//     alert("a nhỏ hơn b");
// }