#include <iostream>
#define CURL_STATICLIB
#include <curl/curl.h>

using namespace std;

// This code works on both Arch Linux and Windows with mingw64 installed.

// Docs: https://everything.curl.dev/libcurl/examples/get

int main()
{
    CURL *curl;
    CURLcode res;

    curl = curl_easy_init();

    if (curl)
    {
        curl_easy_setopt(curl, CURLOPT_URL, "https://www.thedeq.com");

        res = curl_easy_perform(curl);
        if (res != CURLE_OK)
        {
            fprintf(stderr, "curl_easy_perform() failed: %s\n", curl_easy_strerror(res));
        }
        else
        {
            std::cout << res << std::endl;
        }
        curl_easy_cleanup(curl);
    }

    return 0;
}