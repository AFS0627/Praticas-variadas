<?php

require_once 'conexao.php';

$termo = $_GET['termo'];

//$elementos = ['cachorro','gato','coelho'];

echo "<p>Buscando por '$termo'...</p><br>";

//if (in_array($termo, $elementos)){
 //   echo "<p>termo encontrado!</p>";
//}else{echo "<p>termo não encontrado!</p>";}

$sql = "select * from elementos.termos where termo = '$termo'";

   $resposta = $conexao->query($sql);

   var_dump($resposta);

   if($resposta->num_rows > 0){
     echo "<p>termo encontrado!</p>";
   }else{
    echo "<p>termo não encontrado!</p>";
   }


?>