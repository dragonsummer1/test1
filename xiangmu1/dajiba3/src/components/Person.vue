<template>
<div class="person"><
<h2>当前求和{{ sum }}</h2>
<button @click="add">点我sum+1</button>
<hr>
<img v-for="(dog,index) in doglist" :src="dog" :key="index">
<!-- 遍历数组进行图片的展示 -->
 <button @click="getdog()">再来一只狗</button>
</div>





</template>
<script lang="ts" setup name="Person1">
import {ref,reactive} from 'vue'
import  axious from 'axios'
//数据
let sum =ref(0)
let doglist=reactive([
    'https://imagines.dog.ceo/breads/pembroke/n02113023_4373.jpg'
])
async function getdog() {
    try{let result=await axious.get('https://dog.ceo/api/bread/pembroke/images/random')
console.log(result.data)
    }catch{

    }
}

function  add(){
    sum.value+=1  
}
</script>
<style scoped>
img{
    height: 100px;
}


</style>