#include<stdio.h>
#include<curl/curl.h>

int main(void>
{
 CURL  *curl;
 CURLcode  res;
 
 curl=curl_easy_init();
 if(curl){
 curl_easy_setopt(curl,CURLOPT_URL,"http://myip.ipip.net/");
 res=curl_easy_perform(curl);
 if(res!=CURLE_ok)
   fprintf(stderr,"curl_easy_perform()failled:%s\n",curl_easy_strerror(res));
   curl_easy_cleanup(curl);
     }
     return 0;
       }
