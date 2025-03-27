//使用promise
const p=new Promise(function(resolve,reject){
fs.readFile("../前端学习/黑马/毛泽冬.txt",(err,data)=>{
    //后面紧跟的为判断事件
    if(err)reject;
    //如果失败
    resolve(data)
    //如果成功
})    

})
//then
//如果调用的是rejet执行失败
//反则执行成功输出value
p.then(function(value){
    console.log(value)
},function(reason){
    console.log("读取失败")
})