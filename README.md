# Resumo

## Struct

```cpp
struct nome_do_struct{
    int membro1;
    int membro2;
    char membro3;
}
```

O struct é a definição de um novo tipo variável, que, por sua vez é composto por outras variáveis. Ele serve pra agrupar as informações de um objeto.

```cpp
struct quarto{
    int num;
    char categoria;
    char status;
}
```

No exemplo, temos a definição do que é um quarto: Cada quarto tem um número, a categoria e o status. Com o struct, a gente junta essas informações, pra que a gente conheça cada quarto.

A gente vê que, por enquanto, não estamos falando de um quarto específico, mas sim do que é ser um quarto. Com isso, quando você tiver um quarto, você vai conseguir deixar todas as informações dele no mesmo lugar.

## Typedef

Sem o typedef, teríamos que toda vez falar `struct` antes de quarto, o typedef serve pra podermos chamar o struct quarto de apenas quarto.

## Alocação dinâmica

A alocação dinâmica é quando você só busca espaço na memória quando precisa.

Basicamente, você quer pedir pro computador: "Me vê tantos espaços pra mim!" e como resposta, ele vai te apontar um lugar que ele encontrou pra você guardar a sua informação.

```cpp
ponteiro = malloc(espaco_precisa)
```

Como você não tem certeza se vai ter o espaço que você precisa, você precisa ver se deu certo. O jeito de fazer isso é comparando com o NULL, que é o valor inicial do ponteiro.

Se você já tinha um ponteiro antes, que é o jeito como é utilizado no exemplo, você precisa passar esse ponteiro tbm.
