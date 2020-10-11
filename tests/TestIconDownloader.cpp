#include "TestIconDownloader.h"
#include <QTest>
#include <gui/IconDownloader.h>
#include <iostream>
#include <vector>

QTEST_GUILESS_MAIN(TestIconDownloader)

void TestIconDownloader::testFaviconResolve()
{
    // Create downloader
    IconDownloader downloader;

    std::vector<std::pair<QString, std::vector<QString>>> valid_urls{
        {"www.rakuten.co.jp", {}},
        {"de.godaddy.com", {}},
        {"barnesandnoble.com", {}},
        {"opera.com", {}},
        {"freewebs.com", {}},
        {"imdb.com", {}},
        {"a8.net", {}},
        {"elpais.com", {}},
        {"youtube.com", {}},
        {"vkontakte.ru", {}},
        {"istockphoto.com", {}},
        {"hhs.gov", {}},
        {"zdnet.com", {}},
        {"salon.com", {}},
        {"ucsd.edu", {}},
        {"typepad.com", {}},
        {"prlog.org", {}},
        {"unblog.fr", {}},
        {"google.com.br", {}},
        {"uol.com.br", {}},
        {"amazon.com", {}},
        {"discuz.net", {}},
        {"phoca.cz", {}},
        {"fotki.com", {}},
        {"www.ezinearticles.com", {}}
    };

    for(const auto &next_test : valid_urls) {
        downloader.setUrl(next_test.first);
        for(const auto & x : downloader.m_urlsToTry) {
            std::cerr << x.toString().toStdString() << std::endl;
        }
    }

    // Invalid URL

    // Missing schema

    // Missing host

    // Well-formed URL
    //QCOMPARE();

    // URL with port

    // 2nd level domain

    // 2nd level domain .co.uk special case

    // 2nd level domain lots of subdomains

    // IP

    // IP with port

    // Username + Password
}
