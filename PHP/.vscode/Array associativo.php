<?php
$conta1= [
    'titular' => "Gustavo",
    'saldo' => '100'
];
$conta2= [
    'titular' => "Thiago",
    'saldo'   => '1000'
];
$conta3= [
    'titular' => "Victor",
    'saldo'   => "2000"
];

$conta_bancaria = [
    12345678910 => $conta1,
    13235524234 => $conta2,
    54343432323 => $conta3];

foreach ($conta_bancaria as $cpf=> $conta){
    echo $cpf . PHP_EOL;
}