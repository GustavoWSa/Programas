<?php
/*
$idade = 21;

if($idade>=18){
    echo "Voce e maior de 18";
}
else{
    echo "Voce nao e maior de idade";
}
*/
$idade = 15;
$mensagem = $idade < 18 ? 'Você e menor de idade' : 'Você e maior de idade';
echo $mensagem;
