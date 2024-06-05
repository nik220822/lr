Action2()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_auto_header("DNT", 
		"1");

	web_add_auto_header("Priority", 
		"u=4");

	web_add_auto_header("Sec-Fetch-Dest", 
		"image");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Sec-GPC", 
		"1");

	web_url("m6BvG6Rcntmafem2bLfA5IktKm1SEwqO2E4XIjaC12c=.10862.jpg", 
		"URL=https://tiles-cdn.prod.ads.prod.webservices.mozgcp.net/m6BvG6Rcntmafem2bLfA5IktKm1SEwqO2E4XIjaC12c=.10862.jpg", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=", 
		"Snapshot=t57.inf", 
		LAST);

	web_url("CAP5k4gWqcBGwir7bEEmBWveLMtvldFu-y_kyO3txFA=.9991.jpg", 
		"URL=https://tiles-cdn.prod.ads.prod.webservices.mozgcp.net/CAP5k4gWqcBGwir7bEEmBWveLMtvldFu-y_kyO3txFA=.9991.jpg", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=", 
		"Snapshot=t58.inf", 
		LAST);

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_add_auto_header("Priority", 
		"u=1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("WebTours", 
		"URL=http://localhost:1080/WebTours", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t59.inf", 
		"Mode=HTML", 
		LAST);

	web_websocket_send("ID=2", 
		"Buffer={\"messageType\":\"hello\",\"broadcasts\":{\"remote-settings/monitor_changes\":\"\\\"1717325830324\\\"\"},\"use_webpush\":true}", 
		"IsBinary=0", 
		LAST);

	/*Connection ID 2 received buffer WebSocketReceive0*/

	lr_think_time(35);

	lr_start_transaction("go_Welcome_Page");

	web_url("WebTours_2", 
		"URL=http://localhost:1080/WebTours/", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t60.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Priority", 
		"u=4");

	web_url("header.html", 
		"URL=http://localhost:1080/WebTours/header.html", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=http://localhost:1080/WebTours/", 
		"Snapshot=t61.inf", 
		"Mode=HTML", 
		LAST);

	web_url("welcome.pl", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?signOff=true", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/WebTours/", 
		"Snapshot=t62.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("go_Welcome_Page",LR_AUTO);

	return 0;
}