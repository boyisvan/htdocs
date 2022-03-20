// bài tập : yêu cầu người dùng nhập tuổi từ bàn phím , nếu tuổi của họ bằng 11 thì in ra màn hình là " bạn đang học lớp 5 ";

// function tuoi(){
//     var tuoi = prompt("nhập tuổi của bạn : ");
//     if(tuoi==11){
//         alert("bạn đang học lớp 5 ");
//     }
//     if(tuoi==11){
//         alert("bạn đang học lớp 5 ");
//     }
//     else{
//         alert("bạn không học lớp 5 ");
//     }
// }
// tuoi();

// bài tập : yêu cầu người dùng nhập tuổi từ bàn phím , nếu tuổi của họ nhỏ hơn 11 thì in ra màn hình "bạn đang học tiểu hoc";
//nếu nó nhỏ hơn 16 thì in ra màn hình ( bạn học trung học ) ; lớn hơn 16 in ra màn hình bạn là người lớn ;
function tuoi(){
    var tuoi = prompt("nhập tuổi của bạn : ");
    if(tuoi<=11){
        alert("bạn đang học tiểu học  ");
    }
    if(tuoi>11  && tuoi <=15 ){
        alert("bạn học trung học ")
    }
    if(tuoi>15){
        alert("bạn là người lớn");
    }
    
}
tuoi();

//Bài 3 :  nhập thời tiết từ bàn phím , nếu mưa thì nghỉ , nếu nắng thì đi học , không rõ thì đi chơi ;

// var a="mưa" , b="nắng";
// var c =prompt("nhập tthời tiết: ") ;                                 //c là biến phụ thuộc điều kiện , bài toán sẽ chạy dựa vào c 
// if(c==a){
//     alert("vì mưa nên Lan không đi học");
// }if( c==b){
//     alert("vì "+b+" nên Lan phải đi học");
// }else{
//     alert("không rõ thời tiết");
// }

