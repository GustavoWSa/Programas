<?php
$conta1=[
    'titular' => 'Gustavo',
    'saldo' => 1000
];
$conta2=[
    'titular' => "Thiago",
    'saldo' => 10000
];
$conta3=[
    'titular' => "Victor",
    'saldo' => 1000
];
$contasbancarias= [$conta1, $conta2, $conta3];
$contasbancarias= [
    12345678910=> $conta1,
    12345678913=> $conta2,
    12234534555=> $conta3
];
//print($conta1['saldo']);
foreach($contasbancarias as $cpf => $conta){
    print($conta['titular']." com o cpf:".$cpf . " tem o saldo de ". $conta[ 'saldo']. PHP_EOL);
}