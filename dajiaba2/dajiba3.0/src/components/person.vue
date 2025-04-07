<template>
<div class="person">
<h2>姓名{{ name }}</h2>
<h2>年龄{{ age }}</h2>
<h2>地址{{ add }}</h2>
<button @click="changename">改变名字</button>
<button @click="changeage">改变年龄</button>
<button @click="tel">电话号</button>
</div>

</template>

<script lang="ts" setup>
//使用set up 语法糖使用后系统会自动返回值不需要return

//3.0 ref可用于改变对象如果想要变量变化就要用ref进行套住
let name=ref("zhaojiabo")
let age=ref(15)
let add="黑龙江省五常市"
let num=18834767834
//方法
//单纯的这样不会改变主页面单值
function changename(){
name.value='zjb'
//。value用于操作界面x想改变哪个值直接就。value后面加改变的值
console.log(name)
}
function changeage(){
age.value+=1
}
function tel(){
    alert(num)
}


//3.0响应式数据
import {ref}  from 'vue'



</script>

<style>

.person{
  background-color: skyblue;
  box-shadow: 0 0 10px;
  border-radius: 10px;
  padding:20px
}


</style>