// var database=firebase.database();
// var ref=database.ref().child("humidity");
// var ref1=database.ref().child("soil_moisture");
// var ref2=database.ref().child("temperature");
// ref.on('value',function(datasnapshot){
//     console.log(datasnapshot.val());
// });
// ref1.on('value',function(datasnapshot){
//     console.log(datasnapshot.val());
// });
// ref2.on('value',function(datasnapshot){
//     console.log(datasnapshot.val());
// });

var database=firebase.database();
var ref=database.ref().child("coordinate1/longitude");
// var ch=ref.ref().child("longitude");
var ref1=database.ref().child("coordinate1/latitude");
// var ref2=database.ref().child("temperature");
ref.on('value',function(datasnapshot){
    console.log(datasnapshot.val());
});
ref1.on('value',function(datasnapshot){
    console.log(datasnapshot.val());
});

// ch.on('value',function(datasnapshot){
//     console.log(datasnapshot.val());
// })
    // ref1.on('value',function(datasnapshot){
    //     console.log(datasnapshot.val());
    // });
    // ref2.on('value',function(datasnapshot){
    //     console.log(datasnapshot.val());
// });











// function gotData(data){
//     var valu=data.val();
//     console.log("humidity:"+data.val());
// }

// function errData(err){
//     console.log("error!");
//     console.log(err);
// }
