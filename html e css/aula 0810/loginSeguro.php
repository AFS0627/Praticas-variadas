<?php

require_once 'conexao.php';

$usuario = $_POST['usuario'];
$senha = $_POST['senha'];

$stmt = $conexao->prepare("select * from banco.usuarios where usuario = ? and senha = ?");

$stmt->bind_param("ss",$usuario,$senha);
$stmt->execute();
$resposta = $stmt->get_result();


echo "<p>Buscando por '$usuario'...</p><br>";

   //var_dump($resposta);

   if($resposta->num_rows > 0){
     echo "<p>usuario logado!</p>";
   }else{
    echo "<p>usuario ou senha incorretos!</p>";
   }




?>