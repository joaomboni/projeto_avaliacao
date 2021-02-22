#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    // ANAMNESE
    float peso, altura, idade, ombro, peitoral, quadril, cintura, abdomen;
    char sexo[15];
    printf("Informe seu peso:\n");
    scanf("%f", &peso);
    printf("Informe sua altura:\n");
    scanf("%f", &altura);
    printf("Informe seu sexo:\n");
    scanf("%s", &sexo);
    printf("Informe sua idade:\n");
    scanf("%f", &idade);
    // CIRCUNFERENCIA DO TRONCO
    printf("Circunferencia do Ombro:\n");
    scanf("%f", &ombro);
    printf("Cincunferencia do Peitoral:\n");
    scanf("%f", &peitoral);
    printf("Circunferencia do Quadril:\n");
    scanf("%f", &quadril);
    printf("Circunferencia da Cintura:\n");
    scanf("%f", &cintura);
    printf("Circunferencia do Abdomen:\n");
    scanf("%f", &abdomen);

    // CIRCUNFERENCIA DO LADO DIREITO

    float biceps_relax, biceps_contraido, antebraco, coxa_med, pant_med;

    printf("\n\nCIRCINFERENCIA DOS MEMBROS (DIREITO)\n\n");
    printf("Circunferencia do Biceps relaxado(direito):\n");
    scanf("%f", &biceps_relax);
    printf("Circunferencia do biceps contraido(direito):\n");
    scanf("%f", &biceps_contraido);
    printf("Circunferencia do antebraco:\n");
    scanf("%f", &antebraco);
    printf("Circunferencia da coxa direita(medial):\n");
    scanf("%f", &coxa_med);
    printf("Circunferencia da panturrilha(medial):\n");
    scanf("%f", &pant_med);

    // CIRCUNFERENCIA DO LADO ESQUERDO

    float biceps_relax_esq, biceps_contraido_esq, antebraco_esq, coxa_med_esq, pant_med_esq;

    printf("CIRCUNFERENCIA DOS MEMBROS (ESQUERDO)\n\n");
    printf("Circunferencia do Biceps relaxado(esquerdo):\n");
    scanf("%f", &biceps_relax_esq);
    printf("Circunferencia do biceps contraido(esquerdo):\n");
    scanf("%f", &biceps_contraido_esq);
    printf("Circunferencia do antebraco-esquerdo:\n");
    scanf("%f", &antebraco_esq);
    printf("Circunferencia da coxa esquerda(medial):\n");
    scanf("%f", &coxa_med_esq);
    printf("Circunferencia da panturrilha esquerda(medial):\n");
    scanf("%f", &pant_med_esq);

    //DOBRAS CUTANEAS
    float subscapular, supra_iliaca, axilar_media, dobra_peitoral, dobra_abd, dobra_coxa;
    double tricipital;
    printf("Dobras Cutaneas:\n\n");
    printf("Dobra Subscapular:\n");
    scanf("%f", &subscapular);

    printf("Dobra Tricipital:\n");
    scanf("%lf", &tricipital);

    printf("Dobra Supra-Ilica:\n");
    scanf("%f", &supra_iliaca);

    printf("Dobra Axilar-Media:\n");
    scanf("%f", &axilar_media);

    printf("Dobra Peitoral:\n");
    scanf("%f", &dobra_peitoral);

    printf("Dobra do Abdomen:\n");
    scanf("%f", &dobra_abd);

    printf("Dobra da Coxa:\n");
    scanf("%f", &dobra_coxa);

    // SOMA DAS 7 DOBRAS
    float s;
    s = subscapular + tricipital + supra_iliaca + axilar_media + dobra_peitoral + dobra_abd + dobra_coxa;

    // DENSIDADE CORPORAL

    float ds;

    ds = (1.112-0.00043499 * (s) + 0.00000055 * (s) * 2 - 0.00028826 * (idade));
    printf("\nA densidade corporal e:%.2f", ds);

    //%GORDURA

    float gordura;

    gordura = (((4.95 / ds) - 4.50) * 100);
    printf("\nSeu percentual de gordura e:%.2f", gordura);

    //MASSA MAGRA

    float mm;

    mm = (peso - gordura);
    printf("\nSua Massa Magra e:%.2f", mm);

    // IMC

    float imc;

   imc = (peso/pow(altura,2));
   printf("\nSeu imc e:%.2f", imc);
   if (imc >= 25.00){
    printf("\nAcima do peso!");
   }else{
        if (imc <= 18.00){
            printf("\nAbaixo do peso");
    }else{
       printf("\nParabens");
    }
   }

    //AREA MUSCULAR DO BRAÇO MULHER = AMB para mulheres = [CB (mm) – (π x PCT)]² / 4π – 6,5
    float mulher, homem;
    if (sexo == 'feminino'){
            mulher = (biceps_relax - (3.14 * pow(tricipital, 2))/ (4 * 3.14) - 6.5);
            printf("\n\nArea Muscular do braco da mulher:%.2f", mulher);
    //##AREA MUSCULAR DO BRACO HOMEN = AMB para homens = [CB (mm) – (π x PCT)]² / 4π – 10,0
    }else{
        homem =(biceps_relax - (3.14 * pow(tricipital, 2))/(4*3.14) - 10.0);
        printf("\n\nArea Muscular do braco do homen:%.2f", homem);
        }

   //##Massa Muscular (kg) = Estatura (cm) x [0,0264 + (0,029 x AMB)]

   float alturacm, massa_muscular_mulher, massa_muscular_homem;
   if (sexo == 'feminino'){
        alturacm =(altura*100);
        massa_muscular_mulher = alturacm * (0.0264 + (0.029 * mulher));
        printf("\n\nSua Massa Muscular é:%.2f", massa_muscular_mulher);

}else{
    alturacm =(altura*100);
    massa_muscular_homem = alturacm * (0.0264 + (0.029 * homem));
    printf("\n\nSuaMassa Muscular é:%.2f", massa_muscular_homem);
}


    getch();
    return 0;
}
