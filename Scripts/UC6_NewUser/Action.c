Action()
{
	int i;
	
	lr_start_transaction("UC6_NewUser");
	
	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_auto_header("Priority", 
		"u=1");

	web_add_auto_header("DNT", 
		"1");

	web_add_auto_header("Sec-GPC", 
		"1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("WebTours", 
		"URL=http://localhost:1080/WebTours", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t65.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://tiles-cdn.prod.ads.prod.webservices.mozgcp.net/m6BvG6Rcntmafem2bLfA5IktKm1SEwqO2E4XIjaC12c=.10862.jpg", "Referer=", ENDITEM, 
		LAST);

	web_websocket_send("ID=1", 
		"Buffer={\"messageType\":\"hello\",\"broadcasts\":{\"remote-settings/monitor_changes\":\"\\\"1717325830324\\\"\"},\"use_webpush\":true}", 
		"IsBinary=0", 
		LAST);

	/*Connection ID 1 received buffer WebSocketReceive0*/

	
	lr_start_transaction("go_Welcome_Page");
	
	web_reg_find("Text=Welcome to the Web Tours site",LAST);

	web_url("WebTours_2", 
		"URL=http://localhost:1080/WebTours/", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t66.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Priority", 
		"u=4");

	web_url("header.html", 
		"URL=http://localhost:1080/WebTours/header.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=http://localhost:1080/WebTours/", 
		"Snapshot=t67.inf", 
		"Mode=HTML", 
		LAST);

	web_url("welcome.pl", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?signOff=true", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/WebTours/", 
		"Snapshot=t68.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("go_Welcome_Page",LR_AUTO);
	
	
	
	lr_think_time(27);
	
	
	
	lr_start_transaction("sign_up");
	
	web_reg_find("Text=First time registering? Please complete the form below",LAST);

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("login.pl", 
		"URL=http://localhost:1080/cgi-bin/login.pl?username=&password=&getInfo=true", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/WebTours/home.html", 
		"Snapshot=t69.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("sign_up",LR_AUTO);
	
	
	
	lr_think_time(21);
	
	
	
	lr_start_transaction("customer_profile_continue");
	
	
	lr_param_sprintf("random_login", "%s", lr_eval_string("{random_char}"));
	
	for(i=0; i<atoi(lr_eval_string("{random_number}")); i++)
	lr_param_sprintf("random_login", "%s%s", lr_eval_string("{random_login}"), lr_eval_string("{random_char}"));
	
	lr_output_message("New login is: %s", lr_eval_string("{random_login}"));
	
	web_reg_find("Text=welcome to the Web Tours family",LAST);
	

	web_add_header("Origin", 
		"http://localhost:1080");

	web_submit_data("login.pl_2", 
		"Action=http://localhost:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"TargetFrame=info", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/login.pl?username=&password=&getInfo=true", 
		"Snapshot=t70.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value={random_login}", ENDITEM,
//		"Name=username", "Value={movie_login}", ENDITEM,		
		"Name=password", "Value=123", ENDITEM,
//		"Name=password", "Value={movie_psw}", ENDITEM,		
		"Name=passwordConfirm", "Value=123", ENDITEM,
//		"Name=passwordConfirm", "Value={movie_psw}", ENDITEM,	
		"Name=firstName", "Value=", ENDITEM, 
		"Name=lastName", "Value=", ENDITEM, 
		"Name=address1", "Value=", ENDITEM, 
		"Name=address2", "Value=", ENDITEM, 
		"Name=register.x", "Value=45", ENDITEM, 
		"Name=register.y", "Value=9", ENDITEM, 
		LAST);

	lr_end_transaction("customer_profile_continue",LR_AUTO);
	
	
	
	lr_think_time(37);
	
	

	lr_start_transaction("customer_profile_continue_2");
	
	web_reg_find("Text=User has returned to the home page",LAST);

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
	
	
	
	lr_end_transaction("UC6_NewUser", LR_AUTO);

	return 0;
}