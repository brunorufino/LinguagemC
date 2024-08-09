#include<conio2.h>
#include<stdlib.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<stdio.h>
#define TF 40

struct aluno{int ra; char nome[40];};
struct date{int dia,mes,ano;};
struct cursos{char nome[40]; int cod,vagas,tipo; date data;};
struct alunocurso{int ra,cod;};



char menu(){ int k=4; int l=3;
          //return toupper(getch());
          char qtd = 'A',tecla;
           int x=2,y=4; 
           
            do{
                k =4; l= 3;
                textbackground(15);
                 system("cls");
                textcolor(0);
                gotoxy(30,1); printf("- Menu Principal \n");
                gotoxy(l,k); printf(" Cadastrar  Alunos \n");k++;l++;
                gotoxy(l,k); printf(" Cadastrar Disciplinas  \n");k++;l++;
                gotoxy(l,k); printf(" Matricula \n"); k++;l++;
                gotoxy(l,k) ;printf(" Alterar \n");k++;l++;
                gotoxy(l,k) ;printf(" Cancelar \n");k++;l++;
                gotoxy(l,k); printf(" Relatorios \n");k++;l++;
                gotoxy(l,k); printf(" Excluir",1);k++;l++;
                switch(qtd)
                {
                           case 'A':
                                gotoxy(3,4);
                                textbackground(11);
                                printf(" Cadastrar  Alunos ");
                        break; 
                           case'B': 
                                 gotoxy(4,5);
                                 textbackground(11);
                                 printf(" Cadastrar Disciplinas  ");
                           break;
                           case'C': 
                                 gotoxy(5,6);
                                 textbackground(11);
                                  printf(" Matricula ");
                           break;
                           case'D': 
                                 gotoxy(6,7);
                                 textbackground(11);
                                  printf(" Alterar ");
                           break;
                            case'E': 
                                 gotoxy(7,8);
                                 textbackground(11);
                                  printf(" Cancelar  ");
                           break;
                            case'F': 
                                 gotoxy(8,9);
                                 textbackground(11);
                                 printf(" Relatorios ");
                           break;
                           case'G': 
                                 gotoxy(9,10);
                                 textbackground(11);
                                 printf(" Excluir ");
                           break;
                                      
                }
                fflush(stdin);
                tecla = getch();
                if(tecla == -32)
                {
                fflush(stdin);
                 tecla = getch();
                 }
                 if(qtd < 'G'&& tecla == 80)
                 {   
                    y++; qtd++;
                 }
                  else
                    if(qtd >'A' && tecla == 72)
                    {
                         y--; qtd--;
                    }                       
            }            
            while(tecla!=13);
            textbackground(15);
            textcolor(0);
            return qtd;
            
       }
int buscaNOME(aluno reg[TF], int TL, char chave[40]){
   int i=0; while(i<TL && strcmp(reg[i].nome,chave)!=0)  
                       i++;
              if(i<TL)
                    return i;
              else
                    return -1;      
}       
char menuAlterar(){
     int k=4; int l=3;
          
          //return toupper(getch());
          char qtd = 'A',tecla;
           int x=2,y=4; 
           
            do{
                k =4; l= 3;
                textbackground(15);
                 system("cls");
                textcolor(0);
                gotoxy(30,1); printf("- Menu Alteracao -");
                gotoxy(l,k); printf(" Alterar Alunos   ");k++;l++;
                gotoxy(l,k); printf(" Alterar Disciplinas  ");k++;l++;
                gotoxy(l,k); printf(" Alterar Matricula "); k++;l++;
                gotoxy(l,k); printf(" Voltar ");
                
                switch(qtd)
                {
                           case 'A':
                                gotoxy(3,4);
                                textbackground(11);
                                printf(" Alterar   Alunos ");
                        break; 
                           case'B': 
                                 gotoxy(4,5);
                                 textbackground(11);
                                 printf(" Alterar Disciplinas  ");
                           break;
                           case'C': 
                                 gotoxy(5,6);
                                 textbackground(11);
                                  printf(" Alterar Matricula ");
                           break;
                           case'D': gotoxy(6,7);
                                     textbackground(11); printf(" Voltar "); break;
                                            
                }
                fflush(stdin);
                tecla = getch();
                if(tecla == -32)
                {
                fflush(stdin);
                 tecla = getch();
                 }
                 if(qtd < 'D'&& tecla == 80)
                 {   
                    y++; qtd++;
                 }
                  else
                    if(qtd >'A' && tecla == 72)
                    {
                         y--; qtd--;
                    }                       
            }            
            while(tecla!=13 && tecla!=27);
            textbackground(15);
            textcolor(0);
            //if(tecla==27)
            //qtd=0;
            //printf("AQUI: %c",qtd);
            return qtd;
            getch();
  }          
char menuExcluir(){
     int k=4; int l=3;
          //return toupper(getch());
          char qtd = 'A',tecla;
           int x=2,y=4; 
           
            do{
                k =4; l= 3;
                textbackground(15);
                 system("cls");
                textcolor(0);
                gotoxy(30,1); printf("- Menu Alteracao -");
                gotoxy(l,k);  printf(" Excluir Alunos   ");k++;l++;
                gotoxy(l,k);  printf(" Excluir Disciplinas  ");k++;l++;
                gotoxy(l,k);  printf(" Excluir pelo Nome " );k++;l++;
                gotoxy(l,k);  printf(" Voltar ");
                
                switch(qtd)
                {
                           case 'A':
                                gotoxy(3,4);
                                textbackground(11);
                                printf(" Excluir   Alunos ");
                        break; 
                           case'B': 
                                 gotoxy(4,5);
                                 textbackground(11);
                                 printf(" Excluir Disciplinas  ");
                           break;
                           case'C': gotoxy(5,6);
                                     textbackground(11); printf(" Excluir pelo Nome ");
                                      break;
                           case'D': gotoxy(6,7);
                                     textbackground(11); printf("Voltar "); break;          
                                            
                }
                fflush(stdin);
                tecla = getch();
                if(tecla == -32)
                {
                fflush(stdin);
                 tecla = getch();
                 }
                 if(qtd < 'D'&& tecla == 80)
                 {   
                    y++; qtd++;
                 }
                  else
                    if(qtd >'A' && tecla == 72)
                    {
                         y--; qtd--;
                    }                       
            }            
            while(tecla!=13 && tecla!=27);
            textbackground(15);
            textcolor(0);
            //if(tecla==27)
            //qtd=0;
            //printf("AQUI: %c",qtd);
            return qtd;
            getch();
  }    
     
int buscaCODM(alunocurso reg[TF] , int TL, int cod){
      int i=0; while(i<TL && reg[i].cod != cod)
                             i++;
              if(i<TL)
                 return i;
              else
                 return -1;                  
    }         
   
int buscaALUNOCURSO(alunocurso reg[TF], int TL , int ra, int cod){
  int i=0; while(i<TL && !(reg[i].ra == ra && reg[i].cod == cod))
                         i++;
                  if(i<TL)
                      return i;
                  else
                      return -1;           
} 
int buscaRA(aluno reg[TF], int TL , int ra){
  int i=0; while(i<TL && reg[i].ra != ra)   
                   i++;
              if(i<TL)
                 return i;
              else
                 return -1;         
}
int buscaRAM(alunocurso reg[TF], int TL, int ra){
    int i=0; while(i<TL && reg[i].ra != ra)
                      i++;   
              if(i<TL)
                 return i;
              else
                 return -1;   
}

int buscaCOD(cursos reg[TF], int TL, int cod){
     int i=0; while(i<TL && reg[i].cod != cod)
                           i++;
            if(i<TL)
                return i;
             else
                return -1;      
}
void cont(alunocurso reg[TF], cursos reg1[TF] , int TL_curso , int ra,  int TL, int &CONTC, int &CONTP){
  int i=0 , pos;   
      while(i<TL){
            if(reg[i].ra == ra)
            {
                pos = buscaCOD(reg1,TL_curso,reg[i].cod);
             if(reg1[pos].tipo == 1)
                  CONTC++;
               else
                  CONTP++;
                } 
                
                i++;   
            }                              
}
int buscaCODRA(alunocurso reg[TF], int TL, int ra , int cod){
      int i=0; while(i<TL && !(reg[i].ra == ra && reg[i].cod == cod)) 
                                  i++;
        if(i<TL) 
           return i;
        else
           return -1;   
    
}
char menuRelatorio(){
     int k=4; int l=3;
          
          //return toupper(getch());
          char qtd = 'A',tecla;
           int x=2,y=4; 
           
            do{
                k =4; l= 3;
                textbackground(15);
                 system("cls");
                textcolor(0);
                gotoxy(30,1); printf("- Menu Relatorios -");
                gotoxy(l,k); printf(" Relatorio de Alunos Cadastrados   ");k++;l++;
                gotoxy(l,k); printf(" Relatorios de Disciplinas Cadastradas   ");k++;l++;
                gotoxy(l,k); printf(" Relatorio de Alunos Matriculados  "); k++;l++;
                gotoxy(l,k); printf(" Voltar ");
                
                switch(qtd)
                {
                           case 'A':
                                gotoxy(3,4);
                                textbackground(11);
                                printf("Relatorio de Alunos Cadastrados ");
                        break; 
                           case'B': 
                                 gotoxy(4,5);
                                 textbackground(11);
                                 printf(" Relatorios de Disciplinas Cadastradas  ");
                           break;
                           case'C': 
                                 gotoxy(5,6);
                                 textbackground(11);
                                  printf(" Relatorio de Alunos Matriculados ");
                           break;
                           case'D': gotoxy(6,7);
                                     textbackground(11); printf(" Voltar "); break;
                                            
                }
                fflush(stdin);
                tecla = getch();
                if(tecla == -32)
                {
                fflush(stdin);
                 tecla = getch();
                 }
                 if(qtd < 'D'&& tecla == 80)
                 {   
                    y++; qtd++;
                 }
                  else
                    if(qtd >'A' && tecla == 72)
                    {
                         y--; qtd--;
                    }                       
            }            
            while(tecla!=13 && tecla!=27);
            textbackground(15);
            textcolor(0);
            //if(tecla==27)
            //qtd=0;
            //printf("AQUI: %c",qtd);
            return qtd;
            getch();
  }    
     
     
     

void cadastrarALUNO(aluno reg[TF], int &TL){
      system("cls");gotoxy(30,1);printf("-Cadastro de Alunos "); char aux[40]; int ra;  
      gotoxy(5,4);printf("Informe o Nome do Aluno : ");
       fflush(stdin);gets(aux);
      
       while(strcmp(aux,"\0")!=0){
       gotoxy(5,5);printf("Informe o RA : ");
       scanf("%d",&ra);
         if(buscaRA(reg,TL,ra)!=-1)
             do{ printf("Esse ra ja foi cadastrado \n");
                 printf("Informe o RA : "); scanf("%d",&ra);
               }while(buscaRA(reg,TL,ra)!=-1);                            
               strcpy(reg[TL].nome,aux);                   
               reg[TL].ra = ra; TL++; system("cls");
              gotoxy(5,4); printf("Informe o Nome do Aluno : "); fflush(stdin); gets(aux);
      }
         
}
    
void cadastrarCURSO(cursos reg[TF], int &TL){
   system("cls"); gotoxy(30,1); printf("Cadastro de Cursos,Palestras \n"); char aux[40]; int cod;     
     gotoxy(4,4);printf("Informe o Nome da Disciplina : "); fflush(stdin); gets(aux);
     
       while(strcmp(aux,"\0")!=0){
        gotoxy(4,5); printf("Informe o codigo : "); scanf("%d",&cod);
           if(buscaCOD(reg,TL,cod)!=-1)
             do{ printf("esse codigo ja foi cadastrado \n");
                 printf("informe  o codigo novamente : "); scanf("%d",&cod);
               }while(buscaCOD(reg,TL,cod)!=-1); 
                   reg[TL].cod = cod;
                  gotoxy(4,6); printf("Informe o tipo : "); scanf("%d",&reg[TL].tipo);
                  gotoxy(4,7); printf("Informe a Quantidade de Vagas : "); scanf("%d",&reg[TL].vagas); 
                  gotoxy(4,8); printf("Informe a Data [dd mm aa] : "); scanf("%d%d%d",&reg[TL].data.dia,&reg[TL].data.mes,&reg[TL].data.ano);
                   TL++;    system("cls");
                   gotoxy(4,4); printf("Informe o Nome da Disciplina :  "); fflush(stdin); gets(aux);            
       }
        
}
void Matricula(aluno reg[TF], cursos reg1[TF], alunocurso reg2[TF], int TL_aluno, int TL_curso, int &TL){
     system("cls");printf("-Matriculas \n");int ra, cod; 
     printf("Informe o RA : "); scanf("%d",&ra);
     date aux;
     
     int flag=0;
      while(ra>0 && TL<TF){
		flag=0;
        if(buscaRA(reg,TL_aluno,ra)==-1)
           do{
              printf("esse ra nao esta cadastrado \n");
              printf("Informe o RA novamente : "); scanf("%d",&ra);                                 
            }while(buscaRA(reg,TL_aluno,ra)==-1);
             printf("Informe o cod Curso/Palestra: "); scanf("%d",&cod);
             
             if(buscaCOD(reg1,TL_curso,cod)==-1)
               do{ printf("esse codigo nao esta cadastrado \n");
                   printf("informe o codigo novamente : "); scanf("%d",&cod);
                 }while(buscaCOD(reg1,TL_curso,cod)==-1);   
                
                if(buscaCODRA(reg2,TL,ra,cod)!=-1){
                     printf("Esse Aluno ja esta cadastrado nesse curso \n");
                }
                else {
				int pos = buscaCOD(reg1, TL_curso, cod);                   
		          for(int i=0; i<TL; i++){
		          	if(reg2[i].ra == ra){
		          		int codAluDisc = reg2[i].cod;
		          		int pos2 = buscaCOD(reg1, TL_curso, codAluDisc);
		      			aux.dia = reg1[pos2].data.dia;
		      			aux.mes = reg1[pos2].data.mes;
		      			aux.ano = reg1[pos2].data.ano;
                          if(reg1[pos].data.dia == aux.dia && reg1[pos].data.mes == aux.mes && reg1[pos].data.ano == aux.ano) 
		          	       flag = 1;		
		          	 }
		          	 
		          }
		          if(flag == 1){
		          	 printf("Voce ja esta cadastrado em um curso nesse mesmo dia :( \n");
		          }else{ int CONTC=0,CONTP=0;
                        cont(reg2,reg1,TL_curso,ra,TL,CONTC,CONTP);
                          
                          if(reg1[pos].tipo == 1 && CONTC < 2 || reg1[pos].tipo == 2 && CONTP< 3)
                          { 
                                 if(reg1[pos].vagas > 0){
 		          	 reg2[TL].ra = ra ; reg2[TL].cod = cod; TL++; reg1[pos].vagas--;
		          	  printf("Cadastrado com sucesso !!!!!! \n");
                    }else
                           printf(" Nao ha vagas disponiveis !!!!\n");
                          }
                          else
                             printf("Voce ja cadastrou 2 cursos ou 3 palestras \n");
		          }
                }
                 printf("Informe o RA : "); scanf("%d",&ra);    
      }
       
}
void AlterarMatricula(aluno reg[TF], cursos reg1[TF], alunocurso reg2[TF], int TL_aluno, int TL_curso, int TL){
         int ra,cod; int pos=0,pos1=0,pos2; clrscr();
          
            printf("Informe o ra : "); scanf("%d",&ra);
              if(ra > 0){
                         pos = buscaRA(reg,TL_aluno,ra);
                          if(pos!=-1){
                                        printf("\nInforme o Codigo \n"); scanf("%d",&cod);
                                           pos1= buscaCOD(reg1,TL_curso,cod);
                                            if(pos1!=-1){
                                                 pos2=buscaCODRA(reg2,TL,ra,cod);                
                                                       if(pos2!=-1){
                                                                     printf("Deseja Fazer essa Alteracao ? [S/N]\n");        
                                                                      if(toupper(getch())=='S'){      
                                                                               printf("Informe o RA : ");
                                                                               scanf("%d",&reg2[pos2].ra);
                                                                               printf("\nInforme o Codigo : ");
                                                                               scanf("%d",&reg2[pos2].cod);
                                                                               }
                                                                    }
                                                                else
                                                                  printf("Esse Aluno nao esta cadastrado \n");                                                         
                                                         }
                                             else
                                                 printf("Codigo nao existe \n");            
                                      }  
                                      else
                                        printf("RA nao esta cadastrado ");
                    }
                                       getch();
}
void excluiAluno(aluno reg[TF], alunocurso reg1[TF],cursos reg2[TF], int &TL_aluno, int &TL, int TL_curso){
      int ra,pos,pos2,cod=0;  clrscr();
      
      if(TL_aluno==0){gotoxy(15,3); textcolor(RED);
          printf("Nao possui Alunos cadastrados no sistema \n");}
          else{ textcolor(0);
          printf("Informe o RA : "); scanf("%d",&ra);
            pos =buscaRA(reg,TL_aluno,ra);
              if(pos==-1)
                   printf("Esse aluno nao foi cadastrado \n");
              else{
                     int i=0;
                       for(i=pos;i<TL_aluno-1;i++)
                             reg[i] = reg[i+1];
                             
                               TL_aluno--;
                               
                                printf("Aluno Excluido com Sucesso !! \n");
                                for(i=0;i<TL;i++)
                                     if(ra == reg1[i].ra){
                                        for(int y=i;y<TL-1;y++)
                                             reg1[y] = reg1[y+1];           
                                             TL--;
                             ///devolvendo a vaga
                                             cod = reg1[i].cod;
                                             pos2 = buscaCOD(reg2,TL_curso,cod);
                                              reg2[pos2].vagas++;
                            ///devolvendo a vaga                                    
                                     }
                   }
              }
                   getch();
}
void excluirDisciplina(cursos reg[TF], alunocurso reg1[TF], int &TL_curso, int &TL){
      int cod,pos=0; clrscr();
        if(TL_curso == 0){gotoxy(15,3); textcolor(RED);
                          printf("Nao possui Disciplinas cadastradas no sistema \n");
                    }
         else{   textcolor(0);        
            printf("Informe o codigo : "); scanf("%d",&cod);
              pos=buscaCOD(reg,TL_curso,cod);
               
                if(pos==-1)
                    printf("Essa Disciplina nao esta cadastrada \n");
                else{
                       int i=0;
                         for(i=pos;i<TL_curso-1;i++)
                                reg[i] = reg[i+1];
                                 TL_curso--;
                                 
                                   printf("Disciplina Excluida com Sucesso !! \n");
                                     
                                      for(i=0;i<TL;i++)
                                          if(cod == reg1[i].cod){
                                                 for(int y=i;y<TL-1;y++)
                                                      reg1[y] = reg1[y+1];
                                                       TL--;
                                                 }
                     } 
               }   
                getch();
}
void excluirNOME(aluno reg[TF], alunocurso reg1[TF], cursos reg2[TF], int &TL_aluno, int &TL,int TL_curso){
     char aux[40]; int ra,pos,pos2,cod;clrscr();
              if(TL_aluno == 0){ gotoxy(15,3); textcolor(RED);
                  printf("Nao possui alunos cadastrados no sistema \n");}
               else{ textcolor(0);  
               printf("Informe o Nome : "); gets(aux);
                  if(strcmp(aux,"\0")!=0){
                         pos = buscaNOME(reg,TL_aluno,aux);                 
                                if(pos==-1)
                                      printf("Nao existe alunos com esse nome ;( \n");
                                else{
                                       for(int i=pos;i<TL_aluno-1;i++)
                                             reg[i] = reg[i+1];
                                             TL_aluno--;
                                               printf("Aluno Excluido com Sucesso !!!\n");
                                            for(int i=0;i<TL;i++)
                                                 if(reg1[i].ra == reg[pos].ra){
                                                     for(int y=i;y<TL-1;y++)            
                                                           reg1[y] = reg1[y+1];
                                                           TL--;           
     
                                                           cod = reg1[i].cod;
                                                           pos2 = buscaCOD(reg2,TL_curso,cod);
                                                           reg2[pos2].vagas++;
                                                 }
                                                               
                                     }                           
                  }
     }
           getch();
}
void cancelar (alunocurso reg[TF], aluno reg1[TF] ,cursos reg2[TF] , int TL_aluno, int TL_curso, int &TL ){
   clrscr(); char aux; int ra;  printf("Informe o Ra do aluno \n"); scanf("%d",&ra);
             int cod;         printf("Informe  o nome do curso \n"); scanf("%d",&cod);  
     
               
    int pos =  buscaRA(reg1,TL_aluno,ra);
      
      
       if(pos!=-1){
            
         int pos1 =  buscaCOD(reg2,TL_curso,cod);
          
            if(pos1 != -1){
                  
                    int pos2=buscaCODRA(reg,TL,ra,cod);
                    
                     if(pos2 != -1)
                      {
                             printf(" Voce tem Certeza de que Deseja Cancelar a Inscriaco?\n");
                              if(toupper(getch())== 'S'){
                            for(int i=pos2;i<TL-1;i++){
                                 reg[i] = reg[i+1];
                            }
                               printf("Cancelamento Efetuado com sucesso ");
                               TL--; reg2[pos1].vagas++;
                                                        }
                        }
                      else
                        printf("Voce nao esta cadastrado nesse curso \n");        
                
                    }
                else
                    printf("Essa disciplina nao existe \n");    
                   
                } 
            else
              printf("Esse RA  nao existe \n");    
         getch();      
}
void relatorioMatricula(alunocurso reg[TF], int TL){
   clrscr();
  if(TL==0){ textcolor(RED);gotoxy(30,2);   
    printf("Nao tem Alunos Matriculados \n");
           }  
  else
  {   
       for(int i=0;i<TL;i++)
             printf("RA  : %d \t\t Cod Curso : %d",reg[i].ra,reg[i].cod);
   }
  
      getch();
}
void relatorioCursos(cursos reg[TF], int TL){
      clrscr();
     if(TL==0){ gotoxy(30,2); textcolor(RED);
         printf("Nao possui Disciplinas Cadastrados \n");}
     else{
           for(int i=0;i<TL;i++)
               printf("%s \t%d\t\t%d\t\t%d/%d/%d",reg[i].nome,reg[i].cod,reg[i].vagas,reg[i].data.dia,reg[i].data.mes,reg[i].data.ano);
          }    
              getch();
     }
     
void relatorioAluno(aluno reg[TF], int TL){
   clrscr();
   if(TL==0){  textcolor(RED); gotoxy(30,2);  
       printf("Nao possui alunos cadastrados\n");}
   else{
          for(int i=0;i<TL;i++)
             printf("%s\t\t%d\n",reg[i].nome,reg[i].ra);
       }
         getch();
}

void AlterarALUNO(aluno reg[TF] , alunocurso reg1[TF],  int TL_aluno, int TL){
     clrscr(); int ra,pos,pos2,ra2;
                  printf("Informe o RA : "); scanf("%d",&ra);
                     pos=buscaRA(reg,TL_aluno,ra);
                      if(pos==-1) 
                         printf("Aluno nao esta cadastrado ");
                                  else{
                               textcolor(GREEN); printf("Aluno Localizado \n"); textcolor(0);
                               printf("Informe o Nome : "); fflush(stdin);gets(reg[pos].nome); 
                               printf("Informe o RA : "); scanf("%d",&ra2);   
                               reg[pos].ra = ra2;
                                 int i=0;
                                 while(i<TL){ 
                                     if(reg1[i].ra == ra) 
                                           reg1[i].ra = ra2; i++;}            
                    }
}
void AlterarCURSO(cursos reg[TF],alunocurso reg1[TF], int TL_curso, int TL){
     clrscr(); int cod;  int pos2=0;
        printf("Informe o Codigo da Disciplina ");
        scanf("%d",&cod);
           int pos=buscaCOD(reg,TL_curso,cod);
     
             if(pos==-1)
                 printf("Essa Disciplina nao foi cadastrada ");
                 else{
                    textcolor(GREEN); printf("Disciplina Encontrada \n"); textcolor(0);
                    printf("Insira os novos dados #\n");
                    printf("Informe o Nome : ");fflush(stdin); gets(reg[pos].nome);
                    printf("\nInforme o Codigo da Displina : "); scanf("%d",&reg[pos].cod);
                    printf("\nInforme a Quantidade de Vagas : "); scanf("%d",&reg[pos].vagas);
                    printf("\nInforme a Data : [dd mm aa] : "); scanf("%d%d%d",&reg[pos].data.dia,&reg[pos].data.mes,&reg[pos].data.ano);           
                          int i=0;
                           while(i<TL){
                                   if(reg1[i].cod == cod)
                                    {
                                      reg1[i].cod = reg[pos].cod;             
                                    }      
                           i++;    
                           }
                     }               
        getch();        
}
void excluir(aluno reg[TF], cursos reg1[TF], alunocurso reg2[TF], int &TL_aluno, int &TL_curso, int &TL){
      char op;
      do{ op=menuExcluir();
            switch(op){
                        case'A': excluiAluno(reg,reg2,reg1,TL_aluno,TL,TL_curso); break;
                        case'B': excluirDisciplina(reg1,reg2,TL_curso,TL);break;
                        case'C': excluirNOME(reg,reg2,reg1,TL_aluno,TL,TL_curso);break;
                        case'D': op=27;
                       }
        }while(op!= 27);
}
void exeRelatorio(aluno reg[TF], cursos reg1[TF], alunocurso reg2[TF] , int TL_aluno, int TL_curso, int TL){
     char op;
       do{
           op=menuRelatorio();
               switch(op){
                           case'A':relatorioAluno(reg,TL_aluno);break;
                           case'B':relatorioCursos(reg1,TL_curso);break;
                           case'C':relatorioMatricula(reg2,TL);break;
                           case'D': op=27;
                          }
          }while(op != 27);
}
void exeAlterar(aluno reg[TF], cursos reg1[TF] , alunocurso reg2[TF], int TL_aluno, int TL_curso, int TL){
     char op;
      do{
          fflush(stdin);
            op=menuAlterar();     
                switch(op){
                             case'A': AlterarALUNO(reg,reg2,TL_aluno,TL);break;
                             case'B': AlterarCURSO(reg1,reg2,TL_curso,TL);break;
                             
                             //case'C': 
                             case'D': op=27; break;
                           }
         }while(op != 27);   
}
void exe(){ 
     aluno reg[TF]; alunocurso reg2[TF]; cursos reg1[TF]; int TL_aluno=0,TL_curso=0,TL=0;
     
     char op;
     do{
          //fflush(stdin);
            op=menu();
     	 switch(op){
     	 	case'A': cadastrarALUNO(reg,TL_aluno); break;
     	    case'B': cadastrarCURSO(reg1,TL_curso); break;
     	    case'C': Matricula(reg,reg1,reg2,TL_aluno,TL_curso,TL);break;
     	    case'D': exeAlterar(reg,reg1,reg2,TL_aluno,TL_curso,TL);break;
     	    case'F': exeRelatorio(reg,reg1,reg2,TL_aluno,TL_curso,TL);break;
     	    case'G': excluir(reg,reg1,reg2,TL_aluno,TL_curso,TL);break;
     	    case'E': cancelar(reg2,reg,reg1,TL_aluno,TL_curso,TL);break;
     	 }
     	    
      }while(op!= 27);

}

int main(){ exe(); getch();}
