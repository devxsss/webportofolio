function handler(ev){
alert(ev.data.foo);

}
$(document).ready($("#click").on("click",function(){
var text=$(this).text();
alert(text);
$(this).text("wish you like it").css({color:"green", background:"blue"});
})
);

$("p").on("click",{foo:"bar"},handler);

$(document).ready(function(){
$('.box-slider-content').slick(
{dots:false,
  infinite:true,
  speed:300,
  slidesToScroll: 1,
  	autoplay: true,
  	autoplaySpeed: 2000,
    responsive: [
   {
     breakpoint: 768,
     settings: {
       slidesToShow: 1
     }
   }
  ]
}
);


$('.center').slick({
  infinite: true,
  slidesToShow: 3,
  slidesToScroll: 3
});
});
