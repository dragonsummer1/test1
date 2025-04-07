<template>
<div>
  <h1>您好</h1>
  <person></person>

</div>


</template>
<script lang="ts">
import person  from './components/person.vue';
//调用person
export default{
  name:"App",
  components:{person}//注册person
}

</script>
<style>
.app{
  background-color: #ddd;
  box-shadow: 0 0 10px;
  border-radius: 10px;
  padding:20px
}
</style>