void qsort(long long result[],int star,int End)
{
    int i=star,j=End;
    int mid=(i+j)/2;
    if(i<j)
    {
        while((i<j)&&(result[i]<result[mid]))i++;
        while((i<j)&&(result[j]>result[mid]))j--;
         if (i <= j)
            {
                int temp = result[i];
                result[i] = result[j];
                result[j] = temp;
                i++;
                j--;
            }
        if(star<j)
         qsort(result,star,j);
        if(i<End)
         qsort(result,i,End);
    }
}
