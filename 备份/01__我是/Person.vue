<template>
    <div class="person">
      <h2>姓名：{{name}}</h2>
      <h2>年龄：{{age}}</h2>
      <button @click="changName">修改名字</button>
      <button @click="changAge">年龄+1</button>
      <button @click="showTel">点我查看联系方式</button>
    </div>
  </template>
  
  <script>
  
    // 方法
    function changName(){
      name = '李四'//注意：此时这么修改name页面是不变化的
    }
    function changAge(){
      console.log(age)
      age += 1 //注意：此时这么修改age页面是不变化的
    }
    function showTel(){
      alert(tel)
    }
  </script>