<?php

require_once 'conexao.php';

$usuario = $_POST['usuario'];
$senha = $_POST['senha'];



echo "<p>Buscando por '$usuario'...</p><br>";



$sql = "select * from banco.usuarios where usuario = '$usuario' and senha = '$senha'";

   $resposta = $conexao->query($sql);

   //var_dump($resposta);

   if($resposta->num_rows > 0){
     echo "<p>usuario logado!</p>";
   }else{
    echo "<p>usuario ou senha incorretos!</p>";
   }




?>