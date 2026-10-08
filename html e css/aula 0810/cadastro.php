<?php 
$nome = $_GET['nome'] ?? "";
$idade = $_GET['idade'] ?? 0;

var_dump($nome);
var_dump($idade);

echo "<p>$nome de $idade anos foi cadastrado.</p>"

?>
