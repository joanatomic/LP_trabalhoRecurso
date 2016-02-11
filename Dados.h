#ifndef DADOS_H
#define	DADOS_H

#define TAM_NOME_PRODUTO 20
#define TAM_NOME 30
#define TAM_PASS 20
#define TAM_RUA 25
#define NR_MAX_PRODUTOS 50
#define NR_MAX_ENCOMENDAS 10

#ifdef	__cplusplus
extern "C" {
#endif

    typedef struct produto {
        unsigned int codigo_produto;
        char produto [TAM_NOME_PRODUTO];
        unsigned int quantidade;
        float preco_unitario;
    } Produto;

    typedef struct local_entrega {
        unsigned porta;
        char nome_rua[TAM_RUA];
        unsigned int codigo_postal1;
        unsigned int codigo_postal2;
        float latitude;
        float longitude;
    } Local_Entrega;

    typedef enum estado {
        ENTREGUE = 1,
        PENDENTE
    } Estado_encomenda;

    typedef struct encomenda {
        Produto produto[NR_MAX_PRODUTOS];
        Local_Entrega local_de_entrega;
        Estado_encomenda estado_encomenda;
    } Encomenda;

    typedef struct cliente {
        char nome[TAM_NOME];
        unsigned int nif;
        unsigned int nr_cartaocredito;
        unsigned int nr_telefone;
        unsigned int nr_telemovel;
        char password[TAM_PASS];
        Encomenda encomendas[NR_MAX_ENCOMENDAS];
    } Cliente;

    typedef enum funcao {
        TRATAMENTO_DE_ENCOMENDAS = 1,
        ENTREGA_DE_ENCOMENDAS
    } Funcao;

    typedef struct funcionario {
        unsigned short codigo_funcionario;
        char nome[TAM_NOME];
        Funcao funcao_funcionario;
    } Funcionario;

#ifdef	__cplusplus
}
#endif

#endif	/* DADOS_H */

