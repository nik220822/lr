Action1()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_auto_header("DNT", 
		"1");

	web_add_auto_header("Sec-GPC", 
		"1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_header("Priority", 
		"u=1");

	web_custom_request("WebTours", 
		"URL=http://localhost:1080/WebTours/", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t71.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Priority", 
		"u=4");

	web_concurrent_start(NULL);

	web_custom_request("header.html", 
		"URL=http://localhost:1080/WebTours/header.html", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/WebTours/", 
		"Snapshot=t72.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Priority", 
		"u=4");

	web_custom_request("welcome.pl", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?signOff=true", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/WebTours/", 
		"Snapshot=t74.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_add_header("Priority", 
		"u=4");

	web_concurrent_start(NULL);

	web_custom_request("hp_logo.png", 
		"URL=http://localhost:1080/WebTours/images/hp_logo.png", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://localhost:1080/WebTours/header.html", 
		"Snapshot=t73.inf", 
		LAST);

	web_add_header("Priority", 
		"u=4");

	web_custom_request("webtours.png", 
		"URL=http://localhost:1080/WebTours/images/webtours.png", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://localhost:1080/WebTours/header.html", 
		"Snapshot=t75.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_header("Priority", 
		"u=4");

	web_concurrent_start(NULL);

	web_custom_request("home.html", 
		"URL=http://localhost:1080/WebTours/home.html", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?signOff=true", 
		"Snapshot=t76.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Priority", 
		"u=4");

	web_custom_request("nav.pl", 
		"URL=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?signOff=true", 
		"Snapshot=t77.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_add_header("Priority", 
		"u=4");

	lr_think_time(18);

	web_custom_request("mer_login.gif", 
		"URL=http://localhost:1080/WebTours/images/mer_login.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t78.inf", 
		LAST);

	web_websocket_send("ID=1", 
		"Buffer={\"messageType\":\"hello\",\"broadcasts\":{\"remote-settings/monitor_changes\":\"\\\"1718812629975\\\"\"},\"use_webpush\":true}", 
		"IsBinary=0", 
		LAST);

	/*Connection ID 1 received buffer WebSocketReceive0*/

	lr_start_transaction("go_welcome_page");

	web_add_header("Priority", 
		"u=1");

	lr_think_time(112);

	web_custom_request("WebTours_2", 
		"URL=http://localhost:1080/WebTours/", 
		"Method=GET", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t79.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Priority", 
		"u=4");

	web_custom_request("header.html_2", 
		"URL=http://localhost:1080/WebTours/header.html", 
		"Method=GET", 
		"Resource=0", 
		"Referer=http://localhost:1080/WebTours/", 
		"Snapshot=t80.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("welcome.pl_2", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?signOff=true", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/WebTours/", 
		"Snapshot=t81.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_custom_request("home.html_2", 
		"URL=http://localhost:1080/WebTours/home.html", 
		"Method=GET", 
		"Resource=0", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?signOff=true", 
		"Snapshot=t82.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("nav.pl_2", 
		"URL=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?signOff=true", 
		"Snapshot=t83.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	lr_end_transaction("go_welcome_page",LR_AUTO);

	lr_think_time(20);

	lr_start_transaction("sign_up");

	web_custom_request("login.pl", 
		"URL=http://localhost:1080/cgi-bin/login.pl?username=&password=&getInfo=true", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/WebTours/home.html", 
		"Snapshot=t84.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_custom_request("profileValidate.js", 
		"URL=http://localhost:1080/WebTours/profileValidate.js", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://localhost:1080/cgi-bin/login.pl?username=&password=&getInfo=true", 
		"Snapshot=t85.inf", 
		LAST);

	web_custom_request("button_next.gif", 
		"URL=http://localhost:1080/WebTours/images/button_next.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/login.pl?username=&password=&getInfo=true", 
		"Snapshot=t86.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_end_transaction("sign_up",LR_AUTO);

	lr_start_transaction("customer_profile_continue");

	web_add_header("Origin", 
		"http://localhost:1080");

	lr_think_time(45);

	web_custom_request("login.pl_2", 
		"URL=http://localhost:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/login.pl?username=&password=&getInfo=true", 
		"Snapshot=t87.inf", 
		"Mode=HTTP", 
		"Body=username=kolya21&password=123&passwordConfirm=123&firstName=&lastName=&address1=&address2=&register.x=73&register.y=4", 
		LAST);

	lr_end_transaction("customer_profile_continue",LR_AUTO);

	lr_think_time(37);

	lr_start_transaction("customer_profile_continue_2");

	web_custom_request("button_next.gif_2", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=menus", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/login.pl", 
		"Snapshot=t88.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_custom_request("login.pl_3", 
		"URL=http://localhost:1080/cgi-bin/login.pl?intro=true", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?page=menus", 
		"Snapshot=t89.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("nav.pl_3", 
		"URL=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?page=menus", 
		"Snapshot=t90.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_concurrent_start(NULL);

	web_custom_request("itinerary.gif", 
		"URL=http://localhost:1080/WebTours/images/itinerary.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t91.inf", 
		LAST);

	web_custom_request("in_home.gif", 
		"URL=http://localhost:1080/WebTours/images/in_home.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t92.inf", 
		LAST);

	web_custom_request("flights.gif", 
		"URL=http://localhost:1080/WebTours/images/flights.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t93.inf", 
		LAST);

	web_custom_request("signoff.gif", 
		"URL=http://localhost:1080/WebTours/images/signoff.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t94.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_end_transaction("customer_profile_continue_2",LR_AUTO);

	return 0;
}