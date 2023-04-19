#include <stdio.h>
#include <stdlib.h>

void boasvindas(){
    printf("Bem vindo ao Genio Quiz de Schuster, o que deseja fazer?\n");
}
void menu()
{
    printf("1) Jogar\n2) Sair\n");

}
void iniciado_anime(){
    printf("O jogo foi iniciado com o tema selecionado, terá um total de 10 perguntas e apenas 1 tentativa para cada, caso errar o jogo encerará\n");
}
void iniciado_hv(){
    printf("O jogo foi iniciado com o tema selecionado, terá um total de 6 perguntas e apenas 1 tentativa para cada, caso errar o jogo encerará\n");
}
void errado(){
    printf("Errado!!!");
}
int main()
{
    int jogo;
    int tema;
    char p1;
    char p2;
    char p3;
    char p4;
    char p5;
    char p6;
    int p7;
    char p8;
    int p9;
    char p10;
    printf("Para iniciar o jogo escolha um tema de seu gosto, caso deseje sair pressione 0:\n1)Animes\n2)Heróis\n3)Vilões\n");
    scanf("%d",&tema);
    
    switch(tema){
        case 1:{
            boasvindas();
            menu();
            scanf("%d",&jogo);
            
            switch(jogo){
                case 1:{
                    iniciado_anime();
                    printf("1)No Dragon Ball, existem quantas 'Esferas do Dragão'?\na)3\nb)7\nc)6\nd)9\n");
                    scanf(" %c",&p1);
                    switch(p1){
                        case 'b':{
                            printf("2)Qual é o nome da Bijū selada dentro de Naruto?\na)Shikaku\nb)Son Goku\nc)Kurama\nd)Gamaken\n");
                            scanf(" %c",&p2);
                            switch(p2){
                                case 'c':{
                                    printf("3)Quantas espadas o 'Roronoa Zoro' de One Piece usava?\na)3\nb)5\nc)2\nd)7\n");
                                    scanf(" %c",&p3);
                                    switch(p3){
                                        case 'a':{
                                            printf("4)Quantas vezes Kuririn morreu? (em todo anime)?\na)7\nb)4\nc)8\nd)5\n");
                                            scanf(" %c",&p4);
                                            switch(p4){
                                                case 'b':{
                                                    printf("5)Complete a frase 'É mais de...'\na)9000\nb)8000\nc)10000\nd)7000\n");
                                                    scanf(" %c",&p5);
                                                    switch(p5){
                                                        case 'b':{
                                                            printf("6)Na primeira temporada de Kimetsu no Yaiba, quantos espadachins passam na seleção?\na)2\nb)6\nc)7\nd)4\n");
                                                            scanf(" %c",&p6);
                                                            switch(p6){
                                                                case 'd':{
                                                                    printf("7)Em Tokyo Ghoul, quantos eram os membros da Anteiku? ");
                                                                    scanf("%d",&p7);
                                                                    switch(p7){
                                                                        case 8:{
                                                                            printf("8)Com quantos anos Itachi se tornou lider da ANBU?\na)13\nb)15\nc)21\nd)9\n");
                                                                            scanf(" %c",&p8);
                                                                            switch(p8){
                                                                                case 'a':{
                                                                                    printf("9)Qual o máximo de personalidades que Kaneki obteve? ");
                                                                                    scanf("%d",&p9);
                                                                                    switch(p9){
                                                                                        case 7:{
                                                                                            printf("10)Quantos anos tem Satoru Gojo?\na)21\nb)48\nc)32\nd)28\n");
                                                                                            scanf(" %c",&p10);
                                                                                            switch(p10){
                                                                                                case 'd':
                                                                                                    printf("Parabens, você chegou ao fim!!!!");
                                                                                                return 0;
                                                                                                
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                        
                                                                    }
                                                                }
                                                            }
                                                        }
                                                        
                                                    }
                                                }
                                                
                                            }
                                        }
                                        
                                    }
                                }
                                
                            }
                            
                        }
                        default:
                         errado();
                        break;
                    }
                    
                }
                case 2:{
                    printf("Saindo...");
                    
                }return 0;
            }
        }break;
        case 2:{
            boasvindas();
            menu();
            scanf("%d",&jogo);
            
            switch(jogo){
                case 1:{
                    iniciado_hv();
                    printf("1)Quantos são os membros fundadores da Liga da Justiça?\na)10\nb)5\nc)9\nd)8\n");
                    scanf(" %c",&p1);
                    switch(p1){
                        case 'd':{
                            printf("2)No universo cinematográfico da Marvel, quantas armaduras Tony Stark possui?\na)48\nb)51\nc)56\nd)40\n");
                            scanf(" %c",&p2);
                            switch(p2){
                                case 'b':{
                                    printf("3)Com quantos anos de idade Bruce Wayne eve seus pais assassinados após um assalto?\na)10\nb)8\nc)14\nd)11\n");
                                    scanf(" %c",&p3);
                                    switch(p3){
                                        case 'b':{
                                            printf("4)Em qual periodo historico se passa o filme Captão Amériica: O Primeiro Vingador?\na)Guerra Fria\nb)Primeira Guerra Mundial\nc)Guerra do Golfo\nd)Segunda Guerra Mundial\n");
                                            scanf(" %c",&p4);
                                            switch(p4){
                                                case 'd':{
                                                    printf("5)Quem é o pai de Peter/Mercurio(X-Men)?\na)Charles Xavier\nb)Magneto\nc)Deadpool\nd)Logan/Wolverine\n");
                                                    scanf(" %c",&p5);
                                                    switch(p5){
                                                        case 'b':{
                                                            printf("6)Quantos olhos o Ciclope tem?\na)2\nb)1\n");
                                                            scanf(" %c",&p6);
                                                            switch(p6){
                                                                case 'a':
                                                                    printf("Parabens, você chegou ao fim!!!!");
                                                                return 0;
                                                            }
                                                        }
                                                        
                                                    }
                                                }
                                                
                                            }
                                        }
                                        
                                    }
                                }
                                
                            }
                            
                        }
                        default:
                         errado();
                    }
                    
                }
                case 2:{
                    printf("Saindo...");
                    
                }break;
            }
        }break;
        case 3:{
            boasvindas();
            menu();
            scanf("%d",&jogo);
            
            switch(jogo){
                case 1:{
                    iniciado_hv();
                    printf("1)Qual foi a frase mais marcante do Coringa? \na)'A loucura é como a gravidade, só precisa de um empurrãozinho'\nb)'Porque está tão sério?'\nc)'Não podemos confiar em ninguém hoje em dia'\nd)'Somos dois lados da mesma moeda'\n");
                    scanf(" %c",&p1);
                    switch(p1){
                        case 'b':{
                            printf("2)Verdade ou Mentira: O personagem da Marvel, Deadpool, foi inspirado no personagem do Exterminador.\na)Verdade\nb)Mentira\n");
                            scanf(" %c",&p2);
                            switch(p2){
                                case 'a':{
                                    printf("3)Jack Kirby modelou o caráter de um dos vilões mais famosos, Darkseid, sobre o de:\na)Thanos\nb)Napoleão Bonaparte\nc)Apocalypse\nd)H**tler\n");
                                    scanf(" %c",&p3);
                                    switch(p3){
                                        case 'd':{
                                            printf("4)Verdade ou Mentira: Lex Luthor já foi presidente dos Estados Unidos.\na)Verdade\nb)Mentira\n");
                                            scanf(" %c",&p4);
                                            switch(p4){
                                                case 'a':{
                                                    printf("5)Qual desses vilões o Magneto aprisionou?\na)Caveira Vermelha\nb)Sinistro\nc)Apocalipse\nd)Fanático\n");
                                                    scanf(" %c",&p5);
                                                    switch(p5){
                                                        case 'a':{
                                                            printf("6)Qual o nome do poço que traz imortalidade ao Ra’s Al Ghul?\na)Poço da Juventude\nb)Poço de Krypton\nc)Poço de Lazaro\nd)Poço da Imortalidade\n");
                                                            scanf(" %c",&p6);
                                                            switch(p6){
                                                                case 'c':
                                                                    printf("Parabens, você chegou ao fim!!!!");
                                                                return 0;
                                                            }
                                                        }
                                                        
                                                    }
                                                }
                                                
                                            }
                                        }
                                        
                                    }
                                }
                                
                            }
                            
                        }
                        default:
                         errado();
                    }
                    
                }
                case 2:{
                    printf("Saindo...");
                    
                }break;
            }
        }break;
        default:{
            printf("Por favor insira um tema válido\n");
        }
        
    }

    
    
    
    return 0;
}



