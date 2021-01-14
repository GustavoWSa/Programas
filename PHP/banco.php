<?php
$contas= [
    '123.456.789-10' => [
        'titular' => 'Gustavo',
        'saldo' => 1000
    ],
    '123.456.789-11' => [
        'titular' => "Thiago",
        'saldo' => 900
    ],
    '123.456.789-12' => [
        'titular' => "Victor",
        'saldo' => 1100
    ]
    ];
function sacar(array $conta, float $valor){
    if($valor>$conta['saldo']){
        echo "Saldo insuficiente";
    }
    else{
        $conta['saldo']-=$valor;
    }
    return $conta;
}
function depositar(array $conta,float $valor){
    $conta['saldo']+=$valor;
    return $conta;
}
$contas['123.456.789-10']=sacar
    ($contas['123.456.789-10'],100);

$contas['123.456.789-10']= depositar
    ($contas['123.456.789-10'],500);   
    
foreach($contas as $cpf => $conta){
    echo $conta['titular']," com o cpf $cpf " ,"tem o saldo de ", $conta['saldo'], PHP_EOL;
}    