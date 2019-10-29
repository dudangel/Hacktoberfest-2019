int busca_sentinela(int chave, int vetor[], int n){
    int i = 0;
    vetor[n] = chave; //A ultima posição do vetor possui a busca_sentinela

    while(vetor[i] != chave){
        i++;
    }

    if(i < n) return i;

    return -1;
}