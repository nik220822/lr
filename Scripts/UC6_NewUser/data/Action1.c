Action1()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_auto_header("DNT", 
		"1");

	web_add_auto_header("Sec-GPC", 
		"1");

	web_add_header("Priority", 
		"u=1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_custom_request("WebTours", 
		"URL=http://localhost:1080/WebTours/", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t37.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Sec-Fetch-Dest", 
		"image");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_header("Priority", 
		"u=4");

	web_concurrent_start(NULL);

	web_custom_request("m6BvG6Rcntmafem2bLfA5IktKm1SEwqO2E4XIjaC12c=.10862.jpg", 
		"URL=https://tiles-cdn.prod.ads.prod.webservices.mozgcp.net/m6BvG6Rcntmafem2bLfA5IktKm1SEwqO2E4XIjaC12c=.10862.jpg", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=", 
		"Snapshot=t38.inf", 
		LAST);

	web_add_header("Sec-Fetch-Dest", 
		"image");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_header("Priority", 
		"u=4");

	web_custom_request("CAP5k4gWqcBGwir7bEEmBWveLMtvldFu-y_kyO3txFA=.9991.jpg", 
		"URL=https://tiles-cdn.prod.ads.prod.webservices.mozgcp.net/CAP5k4gWqcBGwir7bEEmBWveLMtvldFu-y_kyO3txFA=.9991.jpg", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=", 
		"Snapshot=t39.inf", 
		LAST);

	web_add_header("Priority", 
		"u=4");

	web_custom_request("header.html", 
		"URL=http://localhost:1080/WebTours/header.html", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/WebTours/", 
		"Snapshot=t40.inf", 
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
		"Snapshot=t41.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_add_header("Priority", 
		"u=4");

	web_concurrent_start(NULL);

	web_custom_request("webtours.png", 
		"URL=http://localhost:1080/WebTours/images/webtours.png", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://localhost:1080/WebTours/header.html", 
		"Snapshot=t42.inf", 
		LAST);

	web_add_header("Priority", 
		"u=4");

	web_custom_request("hp_logo.png", 
		"URL=http://localhost:1080/WebTours/images/hp_logo.png", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://localhost:1080/WebTours/header.html", 
		"Snapshot=t43.inf", 
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
		"Snapshot=t44.inf", 
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
		"Snapshot=t45.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_add_header("Priority", 
		"u=4");

	lr_think_time(22);

	web_custom_request("mer_login.gif", 
		"URL=http://localhost:1080/WebTours/images/mer_login.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t46.inf", 
		LAST);

	web_websocket_send("ID=2", 
		"Buffer={\"messageType\":\"hello\",\"broadcasts\":{\"remote-settings/monitor_changes\":\"\\\"1717325830324\\\"\"},\"use_webpush\":true}", 
		"IsBinary=0", 
		LAST);

	/*Connection ID 2 received buffer WebSocketReceive0*/

	lr_start_transaction("go_Welcome_Page");

	web_add_header("Priority", 
		"u=1");

	lr_think_time(23);

	web_custom_request("WebTours_2", 
		"URL=http://localhost:1080/WebTours/", 
		"Method=GET", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t47.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Priority", 
		"u=4");

	web_custom_request("header.html_2", 
		"URL=http://localhost:1080/WebTours/header.html", 
		"Method=GET", 
		"Resource=0", 
		"Referer=http://localhost:1080/WebTours/", 
		"Snapshot=t48.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("welcome.pl_2", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?signOff=true", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/WebTours/", 
		"Snapshot=t49.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_custom_request("home.html_2", 
		"URL=http://localhost:1080/WebTours/home.html", 
		"Method=GET", 
		"Resource=0", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?signOff=true", 
		"Snapshot=t50.inf", 
		"Mode=HTTP", 
		LAST);

	web_custom_request("nav.pl_2", 
		"URL=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?signOff=true", 
		"Snapshot=t51.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	lr_end_transaction("go_Welcome_Page",LR_AUTO);

	lr_think_time(37);

	lr_start_transaction("login");

	lr_start_transaction("sign_up");

	web_custom_request("login.pl", 
		"URL=http://localhost:1080/cgi-bin/login.pl?username=&password=&getInfo=true", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/WebTours/home.html", 
		"Snapshot=t52.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_custom_request("profileValidate.js", 
		"URL=http://localhost:1080/WebTours/profileValidate.js", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://localhost:1080/cgi-bin/login.pl?username=&password=&getInfo=true", 
		"Snapshot=t53.inf", 
		LAST);

	web_custom_request("button_next.gif", 
		"URL=http://localhost:1080/WebTours/images/button_next.gif", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/login.pl?username=&password=&getInfo=true", 
		"Snapshot=t54.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_end_transaction("sign_up",LR_AUTO);

	lr_start_transaction("customer_profile_continue");

	web_add_auto_header("Origin", 
		"http://localhost:1080");

	lr_think_time(86);

	web_custom_request("login.pl_2", 
		"URL=http://localhost:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/login.pl?username=&password=&getInfo=true", 
		"Snapshot=t55.inf", 
		"Mode=HTTP", 
		"Body=username=kolya3&password=123&passwordConfirm=&firstName=&lastName=&address1=&address2=&register.x=69&register.y=7", 
		LAST);

	lr_think_time(6);

	web_custom_request("login.pl_3", 
		"URL=http://localhost:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/login.pl", 
		"Snapshot=t56.inf", 
		"Mode=HTTP", 
		"Body=username=kolya3&password=123&passwordConfirm=123&firstName=&lastName=&address1=&address2=&register.x=37&register.y=6", 
		LAST);

	lr_end_transaction("customer_profile_continue",LR_AUTO);

	lr_end_transaction("login",LR_AUTO);

	return 0;
}